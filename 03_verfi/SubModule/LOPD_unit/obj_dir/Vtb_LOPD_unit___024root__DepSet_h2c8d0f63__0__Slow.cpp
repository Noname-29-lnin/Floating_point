// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_unit.h for the primary calling header

#include "Vtb_LOPD_unit__pch.h"
#include "Vtb_LOPD_unit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_static(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_final(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__stl(Vtb_LOPD_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_LOPD_unit___024root___eval_phase__stl(Vtb_LOPD_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_settle(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_settle\n"); );
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
            Vtb_LOPD_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("LOPD_unit/tb_LOPD_unit.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_LOPD_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__stl(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
}
#endif  // VL_DEBUG

void Vtb_LOPD_unit___024root___act_sequent__TOP__0(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__0(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__1(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__2(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__3(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__4(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__5(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__6(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__7(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__1(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__2(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__3(Vtb_LOPD_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_stl(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_stl\n"); );
    // Body
    if ((0x101ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x25ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x89ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0xcbULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__3(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_triggers__stl(Vtb_LOPD_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_LOPD_unit___024root___eval_phase__stl(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_LOPD_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_LOPD_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__act(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_LOPD_unit.i_clk or negedge tb_LOPD_unit.i_rst_n)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge tb_LOPD_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__nba(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_0)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_0.w_pos_one_1)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_1.LOPD_8bit_unit_1.w_pos_one_1)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_LOPD_unit.DUT.genblk1.DUT.LOPD_16bit_unit_0.LOPD_8bit_unit_0.w_pos_one_0)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_LOPD_unit.i_clk or negedge tb_LOPD_unit.i_rst_n)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge tb_LOPD_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_LOPD_unit___024root___ctor_var_reset(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__i_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__i_data = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__o_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__o_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_LOPD_unit__DOT__o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_o_data = VL_RAND_RESET_I(32);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 = VL_RAND_RESET_I(2);
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_16 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_19 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 = VL_RAND_RESET_I(2);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
