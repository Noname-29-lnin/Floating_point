// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFPU_32bit__pch.h"
#include "VFPU_32bit.h"
#include "VFPU_32bit___024root.h"

// FUNCTIONS
VFPU_32bit__Syms::~VFPU_32bit__Syms()
{
}

VFPU_32bit__Syms::VFPU_32bit__Syms(VerilatedContext* contextp, const char* namep, VFPU_32bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(93);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
