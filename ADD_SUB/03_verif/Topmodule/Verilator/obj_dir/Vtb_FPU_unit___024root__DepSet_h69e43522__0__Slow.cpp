// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_static(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_final(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__stl(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_settle(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_FPU_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__stl(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_FPU_unit.dut.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.less_chain)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.equal_chain)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_FPU_unit.dut.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_FPU_unit.dut.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_triggers__stl(Vtb_FPU_unit___024root* vlSelf);
VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_FPU_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_FPU_unit.dut.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.less_chain)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.equal_chain)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_FPU_unit.dut.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_FPU_unit.dut.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_FPU_unit.dut.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.less_chain)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_FPU_unit.dut.MAN_COMP_28BIT_UNIT.equal_chain)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_FPU_unit.dut.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_FPU_unit.dut.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_FPU_unit___024root___ctor_var_reset(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_floating_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__i_floating_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__o_floating_result = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__i_fpu_op = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_a = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_sign_result = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_max = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_min = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_max = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_COMP_28BIT_less = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_compara = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_sign_min = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__o_equal = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data = VL_RAND_RESET_I(16);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data = VL_RAND_RESET_I(16);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0 = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1 = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(3);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__o_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_12 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
