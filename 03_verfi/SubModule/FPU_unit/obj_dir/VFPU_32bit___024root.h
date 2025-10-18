// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFPU_32bit.h for the primary calling header

#ifndef VERILATED_VFPU_32BIT___024ROOT_H_
#define VERILATED_VFPU_32BIT___024ROOT_H_  // guard

#include "verilated.h"


class VFPU_32bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFPU_32bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_alu_op,0,0);
        CData/*0:0*/ FPU_32bit__DOT__EXP_o_exp_diff_signal;
        CData/*4:0*/ FPU_32bit__DOT__NOR_o_lopd;
        CData/*0:0*/ FPU_32bit__DOT__NOR_o_zero_flag;
        CData/*7:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp;
        CData/*7:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b;
        CData/*0:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*4:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value;
        CData/*0:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_compare;
        CData/*0:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in;
        CData/*7:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c;
        CData/*6:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p;
        CData/*6:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1;
        CData/*0:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    };
    struct {
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data;
        CData/*0:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
        CData/*1:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
        CData/*3:0*/ FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_18;
        CData/*7:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*7:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*7:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__2;
        CData/*1:0*/ __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__2;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN(i_data_a,31,0);
        VL_IN(i_data_b,31,0);
        VL_OUT(o_result,31,0);
        IData/*22:0*/ FPU_32bit__DOT__ROU_o_mantissa_result;
        IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0;
        IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1;
        IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a;
        IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0;
        IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0;
        IData/*27:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b;
        IData/*23:0*/ __VdfgRegularize_hd87f99a1_0_23;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*27:0*/, 6> FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data;
        VlUnpacked<IData/*31:0*/, 6> FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data;
        VlUnpacked<IData/*31:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data__0;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data__0;
        VlUnpacked<IData/*31:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data__1;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data__1;
        VlUnpacked<IData/*31:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data__2;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data__2;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlTriggerVec<12> __VstlTriggered;
    VlTriggerVec<12> __VicoTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFPU_32bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFPU_32bit___024root(VFPU_32bit__Syms* symsp, const char* v__name);
    ~VFPU_32bit___024root();
    VL_UNCOPYABLE(VFPU_32bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
