// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__26(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__26\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX("@%t | [JTAG] Simulation finished: return code 0x%0x\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("/scratch/vlsi2_12fs25/croc_drc/rtl/tb_croc_soc.sv", 298, "");
    vlSelfRef.tb_croc_soc__DOT__tb_data = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code;
    tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x32U;
    while (VL_LTS_III(32, 0U, tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h348173d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_rst_sys.clk)", 
                                                             "/scratch/vlsi2_12fs25/croc_drc/rtl/tb_croc_soc.sv", 
                                                             492);
        tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_croc_soc__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FINISH_MT("/scratch/vlsi2_12fs25/croc_drc/rtl/tb_croc_soc.sv", 496, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_croc_soc___024root___eval_triggers__act(Vtb_croc_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_triggers__act\n"); );
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__1)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down__1)));
    vlSelfRef.__VactTriggered.setBit(0x11U, (0U != 
                                             ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[0U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[0U]) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[1U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[1U])) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[2U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[2U])) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[3U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[3U]))));
    vlSelfRef.__VactTriggered.setBit(0x12U, (0U != 
                                             ((((((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[0U]) 
                                                    | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
                                                       ^ 
                                                       vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[1U])) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[2U])) 
                                                  | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[3U])) 
                                                 | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[4U])) 
                                                | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[5U])) 
                                               | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[6U])) 
                                              | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[7U]))));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__1)));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__break_d) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__break_d__1)));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__word_len_bits) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__word_len_bits__1)));
    vlSelfRef.__VactTriggered.setBit(0x16U, (vlSelfRef.__VdfgRegularize_hd87f99a1_5_56 
                                             != vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_56__1));
    vlSelfRef.__VactTriggered.setBit(0x17U, (vlSelfRef.__VdfgRegularize_hd87f99a1_5_57 
                                             != vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_57__1));
    vlSelfRef.__VactTriggered.setBit(0x18U, (vlSelfRef.__VdfgRegularize_hd87f99a1_5_58 
                                             != vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_58__1));
    vlSelfRef.__VactTriggered.setBit(0x19U, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_22) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_22__1)));
    vlSelfRef.__VactTriggered.setBit(0x1aU, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_23) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_23__1)));
    vlSelfRef.__VactTriggered.setBit(0x1bU, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_24) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_24__1)));
    vlSelfRef.__VactTriggered.setBit(0x1cU, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_12) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_12__1)));
    vlSelfRef.__VactTriggered.setBit(0x1dU, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_13) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_13__1)));
    vlSelfRef.__VactTriggered.setBit(0x1eU, ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_5_14) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_14__1)));
    vlSelfRef.__VactTriggered.setBit(0x1fU, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_0 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_0__1));
    vlSelfRef.__VactTriggered.setBit(0x20U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_1 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_1__1));
    vlSelfRef.__VactTriggered.setBit(0x21U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_2 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_2__1));
    vlSelfRef.__VactTriggered.setBit(0x22U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_5 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_5__1));
    vlSelfRef.__VactTriggered.setBit(0x23U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_6 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_6__1));
    vlSelfRef.__VactTriggered.setBit(0x24U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_7 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_7__1));
    vlSelfRef.__VactTriggered.setBit(0x25U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_10 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_10__1));
    vlSelfRef.__VactTriggered.setBit(0x26U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_11 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_11__1));
    vlSelfRef.__VactTriggered.setBit(0x27U, (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_12 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_12__1));
    vlSelfRef.__VactTriggered.setBit(0x28U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____1)));
    vlSelfRef.__VactTriggered.setBit(0x29U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____1)));
    vlSelfRef.__VactTriggered.setBit(0x2aU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x2bU, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x2cU, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0)));
    vlSelfRef.__VactTriggered.setBit(0x2dU, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x2eU, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0)));
    vlSelfRef.__VactTriggered.setBit(0x2fU, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(0x30U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(0x31U, ((IData)(vlSelfRef.tb_croc_soc__DOT__fetch_en_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0))));
    vlSelfRef.__VactTriggered.setBit(0x32U, ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__uart_tx_o)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0)));
    vlSelfRef.__VactTriggered.setBit(0x33U, ((IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp__1[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[0U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[1U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[2U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[3U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[4U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[5U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[6U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1[7U] 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__sbr_port_gnt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__break_d__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__break_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__word_len_bits__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_uart_rx__DOT__word_len_bits;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_56__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_56;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_57__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_57;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_58__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_58;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_22__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_22;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_23__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_23;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_24__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_24;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_12__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_12;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_13__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_13;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_5_14__1 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_5_14;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_0__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_1__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_2__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_5__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_5;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_6__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_6;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_7__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_7;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_10__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_10;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_11__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_11;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_12__1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_9_12;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET____1 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 
        = vlSelfRef.tb_croc_soc__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0 
        = vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0 
        = vlSelfRef.tb_croc_soc__DOT__fetch_en_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0 
        = vlSelfRef.tb_croc_soc__DOT__uart_tx_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0 
        = vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xfU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x10U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x11U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x12U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x13U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x14U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x15U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x16U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x17U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x18U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x19U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x20U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x21U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x22U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x23U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x24U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x25U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x26U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x27U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x28U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x29U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_croc_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
