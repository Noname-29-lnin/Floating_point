// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_LOPD_16bit.h for the primary calling header

#ifndef VERILATED_VTB_LOPD_16BIT___024ROOT_H_
#define VERILATED_VTB_LOPD_16BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_LOPD_16bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_LOPD_16bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_LOPD_8bit__DOT__o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT__o_zero_flag;
    CData/*3:0*/ tb_LOPD_8bit__DOT__w_expect_pos;
    CData/*0:0*/ tb_LOPD_8bit__DOT__w_expect_zero;
    CData/*3:0*/ tb_LOPD_8bit__DOT____Vtogcov__o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT____Vtogcov__o_zero_flag;
    CData/*3:0*/ tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos;
    CData/*0:0*/ tb_LOPD_8bit__DOT____Vtogcov__w_expect_zero;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1;
    CData/*3:0*/ tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_0;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_1;
    CData/*3:0*/ tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0;
    CData/*0:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1;
    CData/*1:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1;
    CData/*2:0*/ tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_9;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_LOPD_8bit__DOT__i_data;
    SData/*15:0*/ tb_LOPD_8bit__DOT____Vtogcov__i_data;
    IData/*31:0*/ tb_LOPD_8bit__DOT__test_count;
    IData/*31:0*/ tb_LOPD_8bit__DOT__test_pass;
    IData/*31:0*/ tb_LOPD_8bit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_LOPD_16bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_LOPD_16bit___024root(Vtb_LOPD_16bit__Syms* symsp, const char* v__name);
    ~Vtb_LOPD_16bit___024root();
    VL_UNCOPYABLE(Vtb_LOPD_16bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
