// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit_COMP_4bit.h"

VL_ATTR_COLD void Vtb_COMP_28bit_COMP_4bit___ctor_var_reset(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data_a = VL_RAND_RESET_I(4);
    vlSelf->i_data_b = VL_RAND_RESET_I(4);
    vlSelf->o_less = VL_RAND_RESET_I(1);
    vlSelf->o_equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__i_data_a = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__i_data_b = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__o_less = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__o_equal = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_equal_high = VL_RAND_RESET_I(1);
}
