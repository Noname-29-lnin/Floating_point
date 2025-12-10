// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_LOPD_24bit.h for the primary calling header

#ifndef VERILATED_VTB_LOPD_24BIT___024ROOT_H_
#define VERILATED_VTB_LOPD_24BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_LOPD_24bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_LOPD_24bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_LOPD_24bit__DOT__i_clk;
    VL_IN8(i_data,3,0);
    VL_OUT8(o_pos_one,1,0);
    VL_OUT8(o_zero_flag,0,0);
    CData/*4:0*/ tb_LOPD_24bit__DOT__w_expect_pos;
    CData/*0:0*/ tb_LOPD_24bit__DOT__w_expect_zero;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14;
    CData/*0:0*/ tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_1;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_2;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_3;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_4;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_5;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_6;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_7;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_8;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_9;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ tb_LOPD_24bit__DOT__i_data;
    IData/*31:0*/ tb_LOPD_24bit__DOT__test_count;
    IData/*31:0*/ tb_LOPD_24bit__DOT__test_pass;
    IData/*31:0*/ tb_LOPD_24bit__DOT__bit_pos;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf70d7fc2__0;
    VlTriggerScheduler __VtrigSched_hf70d7f83__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_LOPD_24bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_LOPD_24bit___024root(Vtb_LOPD_24bit__Syms* symsp, const char* v__name);
    ~Vtb_LOPD_24bit___024root();
    VL_UNCOPYABLE(Vtb_LOPD_24bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
