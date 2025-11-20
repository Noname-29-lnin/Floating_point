// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg.h"

Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::Vtb_FPU_unit___024unit__03a__03a__VDynScope_0(Vtb_FPU_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::_ctor_var_reset(Vtb_FPU_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__t_clk = VL_RAND_RESET_I(1);
    __PVT__PERIOD = 0;
}
