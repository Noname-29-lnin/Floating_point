// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SHF_unit.h for the primary calling header

#include "Vtb_SHF_unit__pch.h"
#include "Vtb_SHF_unit___024root.h"

VL_ATTR_COLD void Vtb_SHF_unit___024root___eval_initial__TOP(Vtb_SHF_unit___024root* vlSelf);
VlCoroutine Vtb_SHF_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_SHF_unit___024root* vlSelf);

void Vtb_SHF_unit___024root___eval_initial(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_initial\n"); );
    // Body
    Vtb_SHF_unit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_SHF_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__0 
        = vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data;
    vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__1 
        = vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data;
}

void Vtb_SHF_unit___024root___act_sequent__TOP__0(Vtb_SHF_unit___024root* vlSelf);
void Vtb_SHF_unit___024root___act_comb__TOP__0(Vtb_SHF_unit___024root* vlSelf);

void Vtb_SHF_unit___024root___eval_act(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_SHF_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_SHF_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_SHF_unit___024root___nba_sequent__TOP__0(Vtb_SHF_unit___024root* vlSelf);

void Vtb_SHF_unit___024root___eval_nba(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SHF_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_SHF_unit___024root___timing_resume(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_SHF_unit___024root___eval_triggers__act(Vtb_SHF_unit___024root* vlSelf);

bool Vtb_SHF_unit___024root___eval_phase__act(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_SHF_unit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_SHF_unit___024root___timing_resume(vlSelf);
        Vtb_SHF_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_SHF_unit___024root___eval_phase__nba(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_SHF_unit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__nba(Vtb_SHF_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__act(Vtb_SHF_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_SHF_unit___024root___eval(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_SHF_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SHF_unit/tb_SHF_unit.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_SHF_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SHF_unit/tb_SHF_unit.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_SHF_unit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_SHF_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_SHF_unit___024root___eval_debug_assertions(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
