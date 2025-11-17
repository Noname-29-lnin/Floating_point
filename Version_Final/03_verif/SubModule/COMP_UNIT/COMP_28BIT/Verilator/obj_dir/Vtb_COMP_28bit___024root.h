// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_COMP_28bit.h for the primary calling header

#ifndef VERILATED_VTB_COMP_28BIT___024ROOT_H_
#define VERILATED_VTB_COMP_28BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_COMP_28bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_COMP_28bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_COMP_28bit__DOT__i_clk;
    CData/*0:0*/ tb_COMP_28bit__DOT__i_rst_n;
    CData/*0:0*/ tb_COMP_28bit__DOT__w_expect;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*27:0*/ tb_COMP_28bit__DOT__i_data_a;
    IData/*27:0*/ tb_COMP_28bit__DOT__i_data_b;
    IData/*31:0*/ tb_COMP_28bit__DOT__test_count;
    IData/*31:0*/ tb_COMP_28bit__DOT__test_pass;
    IData/*27:0*/ tb_COMP_28bit__DOT__DUT__DOT__w_g;
    IData/*27:0*/ tb_COMP_28bit__DOT__DUT__DOT__w_p;
    IData/*27:0*/ tb_COMP_28bit__DOT__DUT__DOT__w_borrow;
    IData/*27:0*/ __Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__0;
    IData/*27:0*/ __Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haa211b96__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_COMP_28bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_COMP_28bit___024root(Vtb_COMP_28bit__Syms* symsp, const char* v__name);
    ~Vtb_COMP_28bit___024root();
    VL_UNCOPYABLE(Vtb_COMP_28bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
