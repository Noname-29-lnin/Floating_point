// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU_32bit.h for the primary calling header

#include "VFPU_32bit__pch.h"
#include "VFPU_32bit__Syms.h"
#include "VFPU_32bit___024root.h"

void VFPU_32bit___024root___ctor_var_reset(VFPU_32bit___024root* vlSelf);

VFPU_32bit___024root::VFPU_32bit___024root(VFPU_32bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_32bit___024root___ctor_var_reset(this);
}

void VFPU_32bit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_32bit___024root::~VFPU_32bit___024root() {
}
