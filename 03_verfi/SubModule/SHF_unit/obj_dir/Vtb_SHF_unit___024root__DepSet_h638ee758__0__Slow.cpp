// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SHF_unit.h for the primary calling header

#include "Vtb_SHF_unit__pch.h"
#include "Vtb_SHF_unit___024root.h"

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_static__TOP(Vtb_SHF_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_static(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_static\n"); );
    // Body
    Vtb_SHF_unit___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_final(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__stl(Vtb_SHF_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_SHF_unit___024root___eval_phase__stl(Vtb_SHF_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_settle(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_settle\n"); );
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
            Vtb_SHF_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SHF_unit/tb_SHF_unit.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_SHF_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__stl(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_SHF_unit.DUT.GEN_SHIFT_LEFT.SHF_SHIFT_LEFT.stage_data)\n");
    }
}
#endif  // VL_DEBUG

void Vtb_SHF_unit___024root___act_sequent__TOP__0(Vtb_SHF_unit___024root* vlSelf);
void Vtb_SHF_unit___024root___act_comb__TOP__0(Vtb_SHF_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_stl(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SHF_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SHF_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_triggers__stl(Vtb_SHF_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_SHF_unit___024root___eval_phase__stl(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_SHF_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_SHF_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__act(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_SHF_unit.DUT.GEN_SHIFT_LEFT.SHF_SHIFT_LEFT.stage_data)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__nba(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_SHF_unit.DUT.GEN_SHIFT_LEFT.SHF_SHIFT_LEFT.stage_data)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SHF_unit___024root___ctor_var_reset(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_SHF_unit__DOT__i_shift_number = VL_RAND_RESET_I(5);
    vlSelf->tb_SHF_unit__DOT__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_SHF_unit__DOT__expected_data = VL_RAND_RESET_I(24);
    vlSelf->tb_SHF_unit__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_SHF_unit__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->tb_SHF_unit__DOT__fail_count = VL_RAND_RESET_I(32);
    vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number = VL_RAND_RESET_I(5);
    vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data = VL_RAND_RESET_I(24);
    vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__0[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__1[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
