// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_4bit.h for the primary calling header

#include "Vtb_LOPD_4bit__pch.h"
#include "Vtb_LOPD_4bit__Syms.h"
#include "Vtb_LOPD_4bit___024root.h"

void Vtb_LOPD_4bit___024root___ctor_var_reset(Vtb_LOPD_4bit___024root* vlSelf);

Vtb_LOPD_4bit___024root::Vtb_LOPD_4bit___024root(Vtb_LOPD_4bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_LOPD_4bit___024root___ctor_var_reset(this);
}

void Vtb_LOPD_4bit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_LOPD_4bit___024root::~Vtb_LOPD_4bit___024root() {
}
