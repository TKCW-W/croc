// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "gpio.h"
#include "util.h"

int main() {
    uart_init();

    printf("He%xo World!\n", 0x11);
    uart_write_flush();
    *reg8(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = 0x0F; // lowest four as outputs
    *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0x0A; // ready output pattern
    *reg8(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET)  = 0xFF;  // enable lowest eight
    asm volatile (
        "nop; nop; nop; nop; nop;"
    ); // wait a few cycles to give GPIO signal time to propagate
    printf("GPIO (expect 0xA0): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    *reg8(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = 0x0F;
    asm volatile (
        "nop; nop; nop; nop; nop;"
    ); // wait a few cycles to give GPIO signal time to propagate
    printf("GPIO (expect 0x50): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    uart_write_flush();

    for(volatile int i = 0; i < 128; i++) {}

    //Set a seed to the LFSR module
    *reg32(USER_LFSR_BASE_ADDR, 0x4) = 0x1;

    for(volatile int i = 0; i < 32; i++) {}

    //Check the seed value is written as expected
    uint32_t lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    printf("LFSR seed set correctly as: %x \n", lfsr_value);

    //Enable the LFSR, start generating pseudo random numbers
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x1;

    //Read out the current generated lfsr value
    lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    printf("Current generated number is: %x \n", lfsr_value);

    //Disable the LFSR
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x0;

    //Read out the current generated lfsr value
    //lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    
    // Change to another seed and enable
    *reg32(USER_LFSR_BASE_ADDR, 0x4) = 0x5;
    //printf("LFSR seed reset correctly as: %x \n", lfsr_value);

    //Enable the LFSR, start generating pseudo random numbers
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x1;

    //Disable the LFSR
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x0;

    //Read out the current generated lfsr value
    lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    printf("Current generated number is: %x", lfsr_value);

    for(volatile int i = 0; i < 64; i++) {}

    //Read the value again to check the LFSR is disabled, generated number shall not change
    uint32_t lfsr_dis_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);

    if (lfsr_value == lfsr_dis_value) {
        printf("LFSR disabled!\n");
    }else{
        printf("LFSR not disabled!\n");
    }
    

    uart_write_flush();

    return 1;
}