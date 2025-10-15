// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_unit.h for the primary calling header

#include "Vtb_LOPD_unit__pch.h"
#include "Vtb_LOPD_unit___024unit.h"

VL_ATTR_COLD void Vtb_LOPD_unit___024unit___ctor_var_reset(Vtb_LOPD_unit___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_LOPD_unit___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
