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

    //Start LFSR test 
   
    //TEST1: Check seed can be set correctly; 
    *reg32(USER_LFSR_BASE_ADDR, 0x4) = 0x1;
    uint32_t lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    if(lfsr_value == 0x1){
        printf("TEST1:Seed set correctly, seed: %x\n", lfsr_value);
    }else{
        printf("TEST1:Seed set incorrectly, read value: %x\n", lfsr_value);
    }


    for(volatile int i = 0; i < 32; i++) {}

    //TEST2: Check LFSR can be enabled and generating sequence correctly by inspecting the waveform;
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x1; 
    
    for(volatile int i = 0; i < 7; i++) {}

    lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    
    printf("TEST2:Current read value: %x\n", lfsr_value);


    //TEST3: Check we can switch the seed while the LFSR enabled, and sequence would be generated with the new seed
    *reg32(USER_LFSR_BASE_ADDR, 0x4) = 0x5;
    lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);
    printf("TEST3:Current generated number with seed 0x5 is: %x \n", lfsr_value);//Confirm with wave form this is correctly generated as expected
    
    //TEST4: Check we can disenable the LFSR
    *reg32(USER_LFSR_BASE_ADDR, 0x0) = 0x0;

    //Read out the current generated lfsr value
    lfsr_value = *reg32(USER_LFSR_BASE_ADDR, 0x8);

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