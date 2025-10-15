// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_unit.h for the primary calling header

#include "Vtb_LOPD_unit__pch.h"
#include "Vtb_LOPD_unit__Syms.h"
#include "Vtb_LOPD_unit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_initial__TOP(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x756e6974U;
    __Vtemp_1[2U] = 0x4f50445fU;
    __Vtemp_1[3U] = 0x74625f4cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__stl(Vtb_LOPD_unit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_triggers__stl(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(3U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(5U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(6U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(7U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_unit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
