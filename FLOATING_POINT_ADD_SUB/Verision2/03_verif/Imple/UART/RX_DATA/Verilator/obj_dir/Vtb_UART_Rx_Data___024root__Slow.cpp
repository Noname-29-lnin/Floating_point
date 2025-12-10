// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_UART_Rx_Data.h for the primary calling header

#include "Vtb_UART_Rx_Data__pch.h"
#include "Vtb_UART_Rx_Data__Syms.h"
#include "Vtb_UART_Rx_Data___024root.h"

void Vtb_UART_Rx_Data___024root___ctor_var_reset(Vtb_UART_Rx_Data___024root* vlSelf);

Vtb_UART_Rx_Data___024root::Vtb_UART_Rx_Data___024root(Vtb_UART_Rx_Data__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_UART_Rx_Data___024root___ctor_var_reset(this);
}

void Vtb_UART_Rx_Data___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_UART_Rx_Data___024root::~Vtb_UART_Rx_Data___024root() {
}
