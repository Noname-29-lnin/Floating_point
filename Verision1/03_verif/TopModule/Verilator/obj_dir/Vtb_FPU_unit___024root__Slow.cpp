// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024root.h"

void Vtb_FPU_unit___024root___ctor_var_reset(Vtb_FPU_unit___024root* vlSelf);

Vtb_FPU_unit___024root::Vtb_FPU_unit___024root(Vtb_FPU_unit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_FPU_unit___024root___ctor_var_reset(this);
}

void Vtb_FPU_unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_FPU_unit___024root::~Vtb_FPU_unit___024root() {
}
