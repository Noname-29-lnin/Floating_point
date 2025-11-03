// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_LOPD_4bit.h for the primary calling header

#ifndef VERILATED_VTB_LOPD_4BIT___024ROOT_H_
#define VERILATED_VTB_LOPD_4BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_LOPD_4bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_LOPD_4bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_LOPD_4bit__DOT__i_data;
    CData/*1:0*/ tb_LOPD_4bit__DOT__o_pos_one;
    CData/*0:0*/ tb_LOPD_4bit__DOT__o_zero_flag;
    CData/*1:0*/ tb_LOPD_4bit__DOT__w_expect_pos;
    CData/*0:0*/ tb_LOPD_4bit__DOT__w_expect_zero;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_LOPD_4bit__DOT__test_count;
    IData/*31:0*/ tb_LOPD_4bit__DOT__test_pass;
    IData/*31:0*/ tb_LOPD_4bit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_LOPD_4bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_LOPD_4bit___024root(Vtb_LOPD_4bit__Syms* symsp, const char* v__name);
    ~Vtb_LOPD_4bit___024root();
    VL_UNCOPYABLE(Vtb_LOPD_4bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
