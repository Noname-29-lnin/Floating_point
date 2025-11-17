// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_FPU_unit.h for the primary calling header

#ifndef VERILATED_VTB_FPU_UNIT___024ROOT_H_
#define VERILATED_VTB_FPU_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_FPU_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_FPU_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_FPU_unit__DOT__i_clk;
        CData/*0:0*/ tb_FPU_unit__DOT__i_rst_n;
        CData/*0:0*/ tb_FPU_unit__DOT__i_add_sub;
        CData/*0:0*/ tb_FPU_unit__DOT__o_ov_flow;
        CData/*3:0*/ tb_FPU_unit__DOT__w_i_addr;
        CData/*0:0*/ tb_FPU_unit__DOT__o_ov_flag;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__w_sign_result;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare;
        CData/*7:0*/ tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max;
        CData/*7:0*/ tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow;
        CData/*4:0*/ tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag;
        CData/*4:0*/ tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry;
        CData/*7:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
        CData/*6:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p;
        CData/*6:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    };
    struct {
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1;
        CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit;
        CData/*7:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c;
        CData/*6:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p;
        CData/*6:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*3:0*/ tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_13;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_18;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_23;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_24;
        CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__200__t_o_ov_flow;
        CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__200__t_o_un_flow;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
    };
    struct {
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_FPU_unit__DOT__i_32_a;
        IData/*31:0*/ tb_FPU_unit__DOT__i_32_b;
        IData/*31:0*/ tb_FPU_unit__DOT__w_o_data_rom_a;
        IData/*31:0*/ tb_FPU_unit__DOT__w_o_data_rom_b;
        IData/*27:0*/ tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man;
        IData/*27:0*/ tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man;
        IData/*24:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a;
        IData/*24:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b;
        IData/*24:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max;
        IData/*24:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min;
        IData/*28:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b;
        IData/*28:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max;
        IData/*28:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min;
        IData/*27:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b;
        IData/*27:0*/ __VdfgRegularize_hd87f99a1_0_20;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__189__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__189__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__190__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__190__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__191__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__191__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__193__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__193__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__194__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__194__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__195__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__195__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__197__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__197__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__198__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__198__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__199__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__199__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__201__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__201__temp;
    };
    struct {
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__202__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__202__temp;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__203__f;
        IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__203__temp;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*27:0*/, 6> tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage;
        VlUnpacked<IData/*27:0*/, 6> tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage;
        VlUnpacked<IData/*31:0*/, 16> tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom;
        VlUnpacked<IData/*31:0*/, 16> tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1;
        VlUnpacked<IData/*27:0*/, 6> __Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1;
        VlUnpacked<CData/*0:0*/, 22> __Vm_traceActivity;
    };
    std::string __Vtask_tb_FPU_unit__DOT__TestCase_Display_result__187__t_type;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__189__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__190__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__191__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__193__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__194__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__195__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__197__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__198__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__199__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__201__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__202__Vfuncout;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__203__Vfuncout;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hef0ac919__0;
    VlTriggerScheduler __VtrigSched_hef0ac1e8__0;
    VlTriggerVec<33> __VstlTriggered;
    VlTriggerVec<35> __VactTriggered;
    VlTriggerVec<35> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_FPU_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_FPU_unit___024root(Vtb_FPU_unit__Syms* symsp, const char* v__name);
    ~Vtb_FPU_unit___024root();
    VL_UNCOPYABLE(Vtb_FPU_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
