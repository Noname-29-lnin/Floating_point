// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__ico(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_FPU_unit___024root___eval_phase__ico(Vtb_FPU_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_FPU_unit___024root___eval_phase__act(Vtb_FPU_unit___024root* vlSelf);
bool Vtb_FPU_unit___024root___eval_phase__nba(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../Topmodule/../../02_rtl/COMP_2bit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_FPU_unit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../Topmodule/../../02_rtl/COMP_2bit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_FPU_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../Topmodule/../../02_rtl/COMP_2bit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_FPU_unit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_FPU_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_FPU_unit___024root___eval_debug_assertions(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->COMP_2bit__02Ei_data_a 
                     & 0xfcU))) {
        Verilated::overWidthError("COMP_2bit.i_data_a");}
    if (VL_UNLIKELY((vlSelf->COMP_2bit__02Ei_data_b 
                     & 0xfcU))) {
        Verilated::overWidthError("COMP_2bit.i_data_b");}
    if (VL_UNLIKELY((vlSelf->i_data & 0xf0U))) {
        Verilated::overWidthError("i_data");}
    if (VL_UNLIKELY((vlSelf->i_carry & 0xfeU))) {
        Verilated::overWidthError("i_carry");}
    if (VL_UNLIKELY((vlSelf->CLA_24bit__02Ei_data_a 
                     & 0xff000000U))) {
        Verilated::overWidthError("CLA_24bit.i_data_a");}
    if (VL_UNLIKELY((vlSelf->CLA_24bit__02Ei_data_b 
                     & 0xff000000U))) {
        Verilated::overWidthError("CLA_24bit.i_data_b");}
}
#endif  // VL_DEBUG
