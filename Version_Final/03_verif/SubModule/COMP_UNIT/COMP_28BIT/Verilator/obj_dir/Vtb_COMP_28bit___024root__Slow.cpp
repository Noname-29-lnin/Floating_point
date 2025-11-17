// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit__Syms.h"
#include "Vtb_COMP_28bit___024root.h"

void Vtb_COMP_28bit___024root___ctor_var_reset(Vtb_COMP_28bit___024root* vlSelf);

Vtb_COMP_28bit___024root::Vtb_COMP_28bit___024root(Vtb_COMP_28bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_COMP_28bit___024root___ctor_var_reset(this);
}

void Vtb_COMP_28bit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_COMP_28bit___024root::~Vtb_COMP_28bit___024root() {
}
