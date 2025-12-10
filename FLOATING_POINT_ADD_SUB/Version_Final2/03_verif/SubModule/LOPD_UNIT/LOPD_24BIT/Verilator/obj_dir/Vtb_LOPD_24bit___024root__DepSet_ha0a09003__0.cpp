// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_24bit.h for the primary calling header

#include "Vtb_LOPD_24bit__pch.h"
#include "Vtb_LOPD_24bit__Syms.h"
#include "Vtb_LOPD_24bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__ico(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_24bit___024root___eval_triggers__ico(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_24bit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__act(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_24bit___024root___eval_triggers__act(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0 
        = vlSelf->tb_LOPD_24bit__DOT__i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_24bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
