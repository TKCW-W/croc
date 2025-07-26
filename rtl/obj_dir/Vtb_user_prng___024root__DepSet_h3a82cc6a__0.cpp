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
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__1__addr;
    __Vtask_tb_user_prng__DOT__obi_write__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_write__1__data;
    __Vtask_tb_user_prng__DOT__obi_write__1__data = 0;
    IData/*31:0*/ __Vtask_tb_user_prng__DOT__obi_read__2__addr;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 0;
    SData/*15:0*/ __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_user_prng__DOT__lfsr_step__3__state;
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c64656eU;
    __Vtemp_1[2U] = 0x675f676fU;
    __Vtemp_1[3U] = 0x5f70726eU;
    __Vtemp_1[4U] = 0x75736572U;
    __Vtemp_1[5U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_prng__DOT__rst_n = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__rst_n = 1U;
    __Vtask_tb_user_prng__DOT__obi_write__0__data = 0xace1U;
    __Vtask_tb_user_prng__DOT__obi_write__0__addr = 4U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = ((0x1fU 
                                                   & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]) 
                                                  | ((IData)(
                                                             (0x1300000000ULL 
                                                              | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)))) 
                                                     << 5U));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (((IData)(
                                                           (0x1300000000ULL 
                                                            | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data)))) 
                                                   >> 0x1bU) 
                                                  | ((__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                      << 0xaU) 
                                                     | ((IData)(
                                                                ((0x1300000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data))) 
                                                                 >> 0x20U)) 
                                                        << 5U)));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & (((0x1fU 
                                                       & (__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                          >> 0x16U)) 
                                                      | ((IData)(
                                                                 ((0x1300000000ULL 
                                                                   | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__0__data))) 
                                                                  >> 0x20U)) 
                                                         >> 0x1bU)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_write__0__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_prng__DOT__obi_write__1__data = 1U;
    __Vtask_tb_user_prng__DOT__obi_write__1__addr = 0U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = ((0x1fU 
                                                   & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]) 
                                                  | ((IData)(
                                                             (0x1300000000ULL 
                                                              | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__1__data)))) 
                                                     << 5U));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (((IData)(
                                                           (0x1300000000ULL 
                                                            | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__1__data)))) 
                                                   >> 0x1bU) 
                                                  | ((__Vtask_tb_user_prng__DOT__obi_write__1__addr 
                                                      << 0xaU) 
                                                     | ((IData)(
                                                                ((0x1300000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__1__data))) 
                                                                 >> 0x20U)) 
                                                        << 5U)));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & (((0x1fU 
                                                       & (__Vtask_tb_user_prng__DOT__obi_write__1__addr 
                                                          >> 0x16U)) 
                                                      | ((IData)(
                                                                 ((0x1300000000ULL 
                                                                   | (QData)((IData)(__Vtask_tb_user_prng__DOT__obi_write__1__data))) 
                                                                  >> 0x20U)) 
                                                         >> 0x1bU)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_write__1__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__golden = 0xace1U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 0: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 0: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 1U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 1: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 1: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 2: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 2: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 3: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 3: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 4: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 4: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 5: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 5: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 6: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 6: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 7: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 7: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 8: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 8: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 9U;
    __Vtask_tb_user_prng__DOT__obi_read__2__addr = 8U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0x1fU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] = (0x60U 
                                                  | (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                     << 0xaU));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] = (0x3ffU 
                                                  & ((0x1fU 
                                                      & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                         >> 0x16U)) 
                                                     | (0x3e0U 
                                                        & (__Vtask_tb_user_prng__DOT__obi_read__2__addr 
                                                           >> 0x16U))));
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (1U 
                                                  | vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] = (0xfffffffeU 
                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]);
    co_await vlSelfRef.__VtrigSched_h048fa3ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_prng.clk)", 
                                                         "user_domain/tb_user_prng.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 7U))) != (IData)(vlSelfRef.tb_user_prng__DOT__golden)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_user_prng.sv:101: Assertion failed in %Ntb_user_prng.unnamedblk1: Mismatch at cycle 9: Expected %x, Got %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     16,(IData)(vlSelfRef.tb_user_prng__DOT__golden),
                     16,(0xffffU & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                            >> 7U))));
        VL_STOP_MT("user_domain/tb_user_prng.sv", 101, "", false);
    } else {
        VL_WRITEF_NX("Cycle 9: Match - %x\n",0,16,vlSelfRef.tb_user_prng__DOT__golden);
    }
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__state 
        = vlSelfRef.tb_user_prng__DOT__golden;
    vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback 
        = (1U & VL_REDXOR_32((0xb400U & (IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state))));
    __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout 
        = ((0xfffeU & ((IData)(__Vfunc_tb_user_prng__DOT__lfsr_step__3__state) 
                       << 1U)) | (IData)(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
    vlSelfRef.tb_user_prng__DOT__golden = __Vfunc_tb_user_prng__DOT__lfsr_step__3__Vfuncout;
    vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i = 0xaU;
    VL_WRITEF_NX("\342\234\205 Test passed: All outputs match golden model.\n",0);
    VL_FINISH_MT("user_domain/tb_user_prng.sv", 110, "");
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
