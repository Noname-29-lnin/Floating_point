// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit__Syms.h"
#include "Vtb_COMP_28bit___024root.h"

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_initial__TOP(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x38626974U;
    __Vtemp_1[2U] = 0x4d505f32U;
    __Vtemp_1[3U] = 0x625f434fU;
    __Vtemp_1[4U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__stl(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_triggers__stl(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__0));
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__0 
        = vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_COMP_28bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
