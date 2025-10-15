// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_LOPD_unit.h for the primary calling header

#ifndef VERILATED_VTB_LOPD_UNIT___024ROOT_H_
#define VERILATED_VTB_LOPD_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_LOPD_unit___024unit;


class Vtb_LOPD_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_LOPD_unit___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_LOPD_unit___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_LOPD_unit__DOT__i_clk;
    CData/*0:0*/ tb_LOPD_unit__DOT__i_rst_n;
    CData/*4:0*/ tb_LOPD_unit__DOT__o_one_position;
    CData/*0:0*/ tb_LOPD_unit__DOT__o_zero_flag;
    CData/*0:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1;
    CData/*0:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    CData/*0:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    CData/*1:0*/ tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_6;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_9;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_19;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_rst_n__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_LOPD_unit__DOT__i_addr;
    IData/*31:0*/ tb_LOPD_unit__DOT__i_data;
    IData/*31:0*/ tb_LOPD_unit__DOT__o_addr;
    IData/*31:0*/ tb_LOPD_unit__DOT__DUT__DOT__w_i_addr;
    IData/*31:0*/ tb_LOPD_unit__DOT__DUT__DOT__w_i_data;
    IData/*31:0*/ tb_LOPD_unit__DOT__DUT__DOT__w_o_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h196fd084__0;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_LOPD_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_LOPD_unit___024root(Vtb_LOPD_unit__Syms* symsp, const char* v__name);
    ~Vtb_LOPD_unit___024root();
    VL_UNCOPYABLE(Vtb_LOPD_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
