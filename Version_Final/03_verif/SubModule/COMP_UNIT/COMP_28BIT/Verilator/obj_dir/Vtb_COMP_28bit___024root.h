// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_COMP_28bit.h for the primary calling header

#ifndef VERILATED_VTB_COMP_28BIT___024ROOT_H_
#define VERILATED_VTB_COMP_28BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_COMP_28bit_COMP_4bit;


class Vtb_COMP_28bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_COMP_28bit___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5;
    Vtb_COMP_28bit_COMP_4bit* __PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_COMP_28bit__DOT__i_clk;
    CData/*0:0*/ tb_COMP_28bit__DOT__i_rst_n;
    CData/*0:0*/ tb_COMP_28bit__DOT__o_less;
    CData/*0:0*/ tb_COMP_28bit__DOT__w_expect;
    CData/*0:0*/ tb_COMP_28bit__DOT____Vtogcov__i_clk;
    CData/*0:0*/ tb_COMP_28bit__DOT____Vtogcov__i_rst_n;
    CData/*0:0*/ tb_COMP_28bit__DOT____Vtogcov__o_less;
    CData/*0:0*/ tb_COMP_28bit__DOT____Vtogcov__w_expect;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_0;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_1;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_2;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_3;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_4;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_5;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_6;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_0;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_1;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_2;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_3;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_4;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_5;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_6;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*27:0*/ tb_COMP_28bit__DOT__i_data_a;
    IData/*27:0*/ tb_COMP_28bit__DOT__i_data_b;
    IData/*31:0*/ tb_COMP_28bit__DOT__test_count;
    IData/*31:0*/ tb_COMP_28bit__DOT__test_pass;
    IData/*27:0*/ tb_COMP_28bit__DOT____Vtogcov__i_data_a;
    IData/*27:0*/ tb_COMP_28bit__DOT____Vtogcov__i_data_b;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h32b8485f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_COMP_28bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_COMP_28bit___024root(Vtb_COMP_28bit__Syms* symsp, const char* v__name);
    ~Vtb_COMP_28bit___024root();
    VL_UNCOPYABLE(Vtb_COMP_28bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
