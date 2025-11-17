// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit__Syms.h"
#include "Vtb_COMP_28bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__act(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_COMP_28bit___024root___eval_triggers__act(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__1));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_COMP_28bit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__1 
        = vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow;
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0 
        = vlSelf->tb_COMP_28bit__DOT__i_clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_COMP_28bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
