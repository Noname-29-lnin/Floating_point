// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit_CLA_4bit.h"

VL_ATTR_COLD void Vtb_FPU_unit_CLA_4bit___ctor_var_reset(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(4);
    vlSelf->o_p = VL_RAND_RESET_I(1);
    vlSelf->o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_g = VL_RAND_RESET_I(4);
    vlSelf->__PVT__w_p = VL_RAND_RESET_I(4);
    vlSelf->__PVT__w_c = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__a = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__b = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__sum = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__o_p = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__o_g = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__w_g = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__w_p = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__w_c = VL_RAND_RESET_I(4);
}
