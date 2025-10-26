// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_FPU_unit___024root___eval_triggers__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1)));
    vlSelf->__VactTriggered.set(2U, vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage.neq(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1));
    vlSelf->__VactTriggered.set(3U, vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage.neq(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1)));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->tb_FPU_unit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1.assign(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1.assign(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 
        = vlSelf->tb_FPU_unit__DOT__i_clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_FPU_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
