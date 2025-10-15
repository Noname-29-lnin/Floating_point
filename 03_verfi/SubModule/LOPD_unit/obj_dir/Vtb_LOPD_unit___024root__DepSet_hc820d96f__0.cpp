// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_unit.h for the primary calling header

#include "Vtb_LOPD_unit__pch.h"
#include "Vtb_LOPD_unit__Syms.h"
#include "Vtb_LOPD_unit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__act(Vtb_LOPD_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_unit___024root___eval_triggers__act(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1)));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSelf->tb_LOPD_unit__DOT__i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(9U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->tb_LOPD_unit__DOT__i_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0 
        = vlSelf->tb_LOPD_unit__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_rst_n__0 
        = vlSelf->tb_LOPD_unit__DOT__i_rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_comb__TOP__0(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_comb__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("i_addr = %10# | i_data = %b | o_addr = %10# | o_one_position = %2# | o_zero_flag = %b |\n",0,
                     32,vlSelf->tb_LOPD_unit__DOT__i_addr,
                     32,vlSelf->tb_LOPD_unit__DOT__i_data,
                     32,vlSelf->tb_LOPD_unit__DOT__o_addr,
                     5,(IData)(vlSelf->tb_LOPD_unit__DOT__o_one_position),
                     1,vlSelf->tb_LOPD_unit__DOT__o_zero_flag);
    }
}
