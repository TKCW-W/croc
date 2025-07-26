// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_user_prng__Syms.h"


void Vtb_user_prng___024root__trace_chg_0_sub_0(Vtb_user_prng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_user_prng___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root__trace_chg_0\n"); );
    // Init
    Vtb_user_prng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_prng___024root*>(voidSelf);
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_user_prng___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_user_prng___024root__trace_chg_0_sub_0(Vtb_user_prng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_user_prng__DOT__rst_n));
        bufp->chgIData(oldp+1,(((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                                 << 0x16U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+2,((1U & (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                    >> 9U))));
        bufp->chgCData(oldp+3,((0xfU & (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                        >> 5U))),4);
        bufp->chgIData(oldp+4,(((vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                 << 0x1bU) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                              >> 5U))),32);
        bufp->chgCData(oldp+5,((7U & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                      >> 2U))),3);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U])));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_user_prng__DOT__lfsr_step__Vstatic__feedback));
        bufp->chgSData(oldp+9,(vlSelfRef.tb_user_prng__DOT__golden),16);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_user_prng__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+11,(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q),16);
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg))));
        bufp->chgSData(oldp+13,(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg),16);
    }
    bufp->chgBit(oldp+14,(vlSelfRef.tb_user_prng__DOT__clk));
    bufp->chgIData(oldp+15,((IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                     >> 7U))),32);
    bufp->chgCData(oldp+16,((7U & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                           >> 4U)))),3);
    bufp->chgBit(oldp+17,((1U & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 3U)))));
    bufp->chgBit(oldp+18,((1U & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 2U)))));
    bufp->chgBit(oldp+19,((1U & (IData)((vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                                         >> 1U)))));
    bufp->chgBit(oldp+20,((1U & (IData)(vlSelfRef.tb_user_prng__DOT__obi_rsp_o))));
    bufp->chgSData(oldp+21,(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d),16);
    bufp->chgBit(oldp+22,(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable));
    bufp->chgBit(oldp+23,(((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable) 
                           & (4U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                                      << 0x16U) | (
                                                   vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                                   >> 0xaU))))));
    bufp->chgBit(oldp+24,(((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable) 
                           & (0U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                                      << 0x16U) | (
                                                   vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                                   >> 0xaU))))));
}

void Vtb_user_prng___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root__trace_cleanup\n"); );
    // Init
    Vtb_user_prng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_prng___024root*>(voidSelf);
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
