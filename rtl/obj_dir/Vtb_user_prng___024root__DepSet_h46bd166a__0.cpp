// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_prng.h for the primary calling header

#include "Vtb_user_prng__pch.h"
#include "Vtb_user_prng___024root.h"

VL_ATTR_COLD void Vtb_user_prng___024root___eval_initial__TOP(Vtb_user_prng___024root* vlSelf);
VlCoroutine Vtb_user_prng___024root___eval_initial__TOP__Vtiming__0(Vtb_user_prng___024root* vlSelf);
VlCoroutine Vtb_user_prng___024root___eval_initial__TOP__Vtiming__1(Vtb_user_prng___024root* vlSelf);

void Vtb_user_prng___024root___eval_initial(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_prng___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_user_prng___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_user_prng___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__clk__0 
        = vlSelfRef.tb_user_prng__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_prng__DOT__rst_n__0 
        = vlSelfRef.tb_user_prng__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_user_prng___024root___eval_initial__TOP__Vtiming__1(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "user_domain/tb_user_prng.sv", 
                                             59);
        vlSelfRef.tb_user_prng__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_user_prng__DOT__clk)));
    }
}

void Vtb_user_prng___024root___act_sequent__TOP__0(Vtb_user_prng___024root* vlSelf);

void Vtb_user_prng___024root___eval_act(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_prng___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_prng___024root___act_sequent__TOP__0(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = ((0x1fffffffffdULL 
                                               & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]))) 
                                                 << 1U));
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = (0x1fffffffffeULL 
                                              & vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = (3ULL 
                                              & vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
    if ((1U & ((~ (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                   >> 0xbU)) & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]))) {
        if ((0U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                     << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                  >> 0xcU)))) {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = ((0xfULL & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                   | (((QData)((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg)) 
                       << 9U) | ((QData)((IData)((0x1fU 
                                                  & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                                     >> 2U)))) 
                                 << 4U)));
        } else if ((8U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                            << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                         >> 0xcU)))) {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = ((0xfULL & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                   | (((QData)((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q)) 
                       << 9U) | ((QData)((IData)((0x1fU 
                                                  & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                                     >> 2U)))) 
                                 << 4U)));
        } else {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (8ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
        }
    }
    vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable 
        = (1U & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                 & (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                    >> 0xbU)));
    vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write 
        = ((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable) 
           & (4U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                      << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                   >> 0xcU))));
    if (vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = (0xffffU & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                          >> 7U));
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write)) 
                      & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg)))) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = ((0xfffeU & ((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q) 
                           << 1U)) | (1U & VL_REDXOR_32(
                                                        (0xb400U 
                                                         & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q)))));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write)))) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
    }
}

void Vtb_user_prng___024root___nba_sequent__TOP__0(Vtb_user_prng___024root* vlSelf);
void Vtb_user_prng___024root___nba_sequent__TOP__1(Vtb_user_prng___024root* vlSelf);
void Vtb_user_prng___024root___nba_comb__TOP__0(Vtb_user_prng___024root* vlSelf);

void Vtb_user_prng___024root___eval_nba(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_prng___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_prng___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_prng___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_prng___024root___nba_sequent__TOP__0(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
    __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q = 0;
    // Body
    __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q 
        = vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
    if (vlSelfRef.tb_user_prng__DOT__rst_n) {
        if (vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write) {
            __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q 
                = (0xffffU & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                              >> 7U));
        } else if ((1U & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg))) {
            __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q 
                = ((0xfffeU & ((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q) 
                               << 1U)) | (1U & VL_REDXOR_32(
                                                            (0xb400U 
                                                             & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q)))));
        }
        if (((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable) 
             & (0U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                        << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                     >> 0xcU))))) {
            vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg 
                = (0xffffU & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                              >> 7U));
        }
    } else {
        __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q = 0xace1U;
        vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg = 0U;
    }
    vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q 
        = __Vdly__tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
}

VL_INLINE_OPT void Vtb_user_prng___024root___nba_sequent__TOP__1(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = ((0x1fffffffffdULL 
                                               & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]))) 
                                                 << 1U));
    vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable 
        = (1U & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                 & (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                    >> 0xbU)));
    vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write 
        = ((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__write_enable) 
           & (4U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                      << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                   >> 0xcU))));
}

VL_INLINE_OPT void Vtb_user_prng___024root___nba_comb__TOP__0(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = (0x1fffffffffeULL 
                                              & vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
    vlSelfRef.tb_user_prng__DOT__obi_rsp_o = (3ULL 
                                              & vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
    if ((1U & ((~ (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                   >> 0xbU)) & vlSelfRef.tb_user_prng__DOT__obi_req_i[0U]))) {
        if ((0U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                     << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                  >> 0xcU)))) {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = ((0xfULL & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                   | (((QData)((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg)) 
                       << 9U) | ((QData)((IData)((0x1fU 
                                                  & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                                     >> 2U)))) 
                                 << 4U)));
        } else if ((8U == ((vlSelfRef.tb_user_prng__DOT__obi_req_i[2U] 
                            << 0x14U) | (vlSelfRef.tb_user_prng__DOT__obi_req_i[1U] 
                                         >> 0xcU)))) {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = ((0xfULL & vlSelfRef.tb_user_prng__DOT__obi_rsp_o) 
                   | (((QData)((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q)) 
                       << 9U) | ((QData)((IData)((0x1fU 
                                                  & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                                                     >> 2U)))) 
                                 << 4U)));
        } else {
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (1ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
            vlSelfRef.tb_user_prng__DOT__obi_rsp_o 
                = (8ULL | vlSelfRef.tb_user_prng__DOT__obi_rsp_o);
        }
    }
    if (vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = (0xffffU & (vlSelfRef.tb_user_prng__DOT__obi_req_i[0U] 
                          >> 7U));
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write)) 
                      & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__ctrl_reg)))) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = ((0xfffeU & ((IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q) 
                           << 1U)) | (1U & VL_REDXOR_32(
                                                        (0xb400U 
                                                         & (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q)))));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_user_prng__DOT__dut__DOT__seed_write)))) {
        vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_d 
            = vlSelfRef.tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
    }
}

void Vtb_user_prng___024root___timing_resume(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h048fa3ad__0.resume(
                                                   "@(posedge tb_user_prng.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_user_prng___024root___timing_commit(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h048fa3ad__0.commit(
                                                   "@(posedge tb_user_prng.clk)");
    }
}

void Vtb_user_prng___024root___eval_triggers__act(Vtb_user_prng___024root* vlSelf);

bool Vtb_user_prng___024root___eval_phase__act(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_user_prng___024root___eval_triggers__act(vlSelf);
    Vtb_user_prng___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_user_prng___024root___timing_resume(vlSelf);
        Vtb_user_prng___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_user_prng___024root___eval_phase__nba(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_user_prng___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_prng___024root___dump_triggers__nba(Vtb_user_prng___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_prng___024root___dump_triggers__act(Vtb_user_prng___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_prng___024root___eval(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_user_prng___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("user_domain/tb_user_prng.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_user_prng___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("user_domain/tb_user_prng.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_user_prng___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_user_prng___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_user_prng___024root___eval_debug_assertions(Vtb_user_prng___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_prng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_prng___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
