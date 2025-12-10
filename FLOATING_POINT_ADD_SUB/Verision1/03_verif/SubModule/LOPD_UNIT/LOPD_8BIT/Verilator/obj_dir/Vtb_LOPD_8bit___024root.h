// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_LOPD_8bit.h for the primary calling header

#ifndef VERILATED_VTB_LOPD_8BIT___024ROOT_H_
#define VERILATED_VTB_LOPD_8BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_LOPD_8bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_LOPD_8bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb_LOPD_8bit__DOT__i_data;
    CData/*2:0*/ tb_LOPD_8bit__DOT__w_expect_pos;
    CData/*0:0*/ tb_LOPD_8bit__DOT__w_expect_zero;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_LOPD_8bit__DOT__test_count;
    IData/*31:0*/ tb_LOPD_8bit__DOT__test_pass;
    IData/*31:0*/ tb_LOPD_8bit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_LOPD_8bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_LOPD_8bit___024root(Vtb_LOPD_8bit__Syms* symsp, const char* v__name);
    ~Vtb_LOPD_8bit___024root();
    VL_UNCOPYABLE(Vtb_LOPD_8bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
