// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_prng.h for the primary calling header

#ifndef VERILATED_VTB_USER_PRNG___024ROOT_H_
#define VERILATED_VTB_USER_PRNG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_user_prng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_prng___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_user_prng__DOT__clk;
    CData/*0:0*/ tb_user_prng__DOT__rst_n;
    CData/*0:0*/ tb_user_prng__DOT__lfsr_step__Vstatic__feedback;
    CData/*0:0*/ tb_user_prng__DOT__dut__DOT__seed_valid;
    CData/*0:0*/ tb_user_prng__DOT__dut__DOT__write_enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_prng__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_prng__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_user_prng__DOT__golden;
    SData/*15:0*/ tb_user_prng__DOT__dut__DOT__lfsr_reg_q;
    SData/*15:0*/ tb_user_prng__DOT__dut__DOT__lfsr_reg_d;
    SData/*15:0*/ tb_user_prng__DOT__dut__DOT__ctrl_reg;
    IData/*31:0*/ tb_user_prng__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*73:0*/ tb_user_prng__DOT__obi_req_i;
    QData/*38:0*/ tb_user_prng__DOT__obi_rsp_o;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h048fa3ad__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_user_prng__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_prng___024root(Vtb_user_prng__Syms* symsp, const char* v__name);
    ~Vtb_user_prng___024root();
    VL_UNCOPYABLE(Vtb_user_prng___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
