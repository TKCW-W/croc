// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_prng.h for the primary calling header

#include "Vtb_user_prng__pch.h"
#include "Vtb_user_prng__Syms.h"
#include "Vtb_user_prng___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_user_prng___024root___eval_initial__TOP__Vtiming__0(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__0__addr;
    __Vtask_tb_user_prng__DOT__obi_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__0__data;
    __Vtask_tb_user_prng__DOT__obi_write__0__data = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_read__1__addr;
    __Vtask_tb_user_prng__DOT__obi_read__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_read__1__data;
    __Vtask_tb_user_prng__DOT__obi_read__1__data = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__2__addr;
    __Vtask_tb_user_prng__DOT__obi_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__2__data;
    __Vtask_tb_user_prng__DOT__obi_write__2__data = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_read__3__addr;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_read__3__data;
    __Vtask_tb_user_prng__DOT__obi_read__3__data = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX("\342\217\263 Starting PRNG output dump...\n",0);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x70726e67U;
    __Vtemp_1[2U] = 0x7365725fU;
    __Vtemp_1[3U] = 0x74625f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_prng__DOT__rst_n = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__rst_n = 1U;
    __Vtask_tb_user_prng__DOT__obi_write__0__data = 0xace1U;
    __Vtask_tb_user_prng__DOT__obi_write__0__addr = 4U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = ((3U 
                                                   & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]) 
                                                  | ((IData)(
                                                             (0x3e000000000ULL 
                                                              | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)) 
                                                                 << 5U))) 
                                                     << 2U));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (((IData)(
                                                           (0x3e000000000ULL 
                                                            | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)) 
                                                               << 5U))) 
                                                   >> 0x1eU) 
                                                  | ((__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                      << 0xcU) 
                                                     | ((IData)(
                                                                ((0x3e000000000ULL 
                                                                  | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)) 
                                                                     << 5U)) 
                                                                 >> 0x20U)) 
                                                        << 2U)));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0xfffU 
                                                  & (((3U 
                                                       & (__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                          >> 0x14U)) 
                                                      | ((IData)(
                                                                 ((0x3e000000000ULL 
                                                                   | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)) 
                                                                      << 5U)) 
                                                                  >> 0x20U)) 
                                                         >> 0x1eU)) 
                                                     | (0xffcU 
                                                        & (__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                           >> 0x14U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | (0xfffffffcU 
                                                     & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]));
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_prng__DOT__obi_read__1__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__1__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__1__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__1__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__initial_rdata = __Vtask_tb_user_prng__DOT__obi_read__1__data;
    VL_WRITEF_NX("Cycle -1: LFSR initial output = %x\n",0,
                 16,(0xffffU & vlSelfRef.tb_user_prng__DOT__initial_rdata));
    __Vtask_tb_user_prng__DOT__obi_write__2__data = 1U;
    __Vtask_tb_user_prng__DOT__obi_write__2__addr = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = ((3U 
                                                   & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]) 
                                                  | ((IData)(
                                                             (0x3e000000000ULL 
                                                              | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__2__data)) 
                                                                 << 5U))) 
                                                     << 2U));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (((IData)(
                                                           (0x3e000000000ULL 
                                                            | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__2__data)) 
                                                               << 5U))) 
                                                   >> 0x1eU) 
                                                  | ((__Vtask_tb_user_prng__DOT__obi_write__2__addr 
                                                      << 0xcU) 
                                                     | ((IData)(
                                                                ((0x3e000000000ULL 
                                                                  | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__2__data)) 
                                                                     << 5U)) 
                                                                 >> 0x20U)) 
                                                        << 2U)));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0xfffU 
                                                  & (((3U 
                                                       & (__Vtask_tb_user_prng__DOT__obi_write__2__addr 
                                                          >> 0x14U)) 
                                                      | ((IData)(
                                                                 ((0x3e000000000ULL 
                                                                   | ((QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__2__data)) 
                                                                      << 5U)) 
                                                                  >> 0x20U)) 
                                                         >> 0x1eU)) 
                                                     | (0xffcU 
                                                        & (__Vtask_tb_user_prng__DOT__obi_write__2__addr 
                                                           >> 0x14U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | (0xfffffffcU 
                                                     & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]));
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("DUT LFSR: %x\n",0,16,vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q);
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  0: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 1U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  1: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  2: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  3: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  4: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  5: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  6: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  7: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  8: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 9U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle  9: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xaU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 10: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xbU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 11: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xcU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 12: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xdU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 13: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xeU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 14: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xfU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 15: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x10U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 16: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x11U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 17: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x12U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 18: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x13U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 19: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x14U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 20: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x15U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 21: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x16U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 22: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x17U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 23: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x18U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 24: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x19U;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 25: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x1aU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 26: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x1bU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 27: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x1cU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 28: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x1dU;
    __Vtask_tb_user_prng__DOT__obi_read__3__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x780U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                     << 0xcU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (__Vtask_tb_user_prng__DOT__obi_read__3__addr 
                                                  >> 0x14U);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    __Vtask_tb_user_prng__DOT__obi_read__3__data = (IData)(
                                                           (vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                                            >> 9U));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata 
        = __Vtask_tb_user_prng__DOT__obi_read__3__data;
    VL_WRITEF_NX("Cycle 29: LFSR output = %x\n",0,16,
                 (0xffffU & vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__unnamedblk2__DOT__rdata));
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0x1eU;
    VL_FINISH_MT("user_domain/tb_user_prng.sv", 131, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_prng___024root___dump_triggers__act(Vtb_user_prng___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_prng___024root___eval_triggers__act(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_user_prng__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_user_prng__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__clk__0 
        = vlSelfRef.tb_user_prng__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__rst_n__0 
        = vlSelfRef.tb_user_prng__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_prng___024root___dump_triggers__act(vlSelf);
    }
#endif
}
