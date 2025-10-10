// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SUM_unit.h for the primary calling header

#include "Vtb_SUM_unit__pch.h"
#include "Vtb_SUM_unit___024root.h"

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_static__TOP(Vtb_SUM_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_static(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_static\n"); );
    // Body
    Vtb_SUM_unit___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_final(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__stl(Vtb_SUM_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_SUM_unit___024root___eval_phase__stl(Vtb_SUM_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_settle(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_settle\n"); );
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
            Vtb_SUM_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SUM_unit/tb_SUM_unit.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_SUM_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__stl(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_SUM_unit.DUT.CLA_28BIT_UNIT.w_c)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_triggers__stl(Vtb_SUM_unit___024root* vlSelf);
VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_stl(Vtb_SUM_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_SUM_unit___024root___eval_phase__stl(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_SUM_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_SUM_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__act(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_SUM_unit.DUT.CLA_28BIT_UNIT.w_c)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__nba(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_SUM_unit.DUT.CLA_28BIT_UNIT.w_c)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SUM_unit___024root___ctor_var_reset(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_SUM_unit__DOT__i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_SUM_unit__DOT__i_data_a = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT__i_data_b = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT__o_sum = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT__expected_sum = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT__expected_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_SUM_unit__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_SUM_unit__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->tb_SUM_unit__DOT__fail_count = VL_RAND_RESET_I(32);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__o_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum = VL_RAND_RESET_I(28);
    vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(8);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(8);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
