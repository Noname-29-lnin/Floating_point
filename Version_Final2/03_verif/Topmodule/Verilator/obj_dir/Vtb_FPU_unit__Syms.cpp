// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit.h"
#include "Vtb_FPU_unit___024root.h"
#include "Vtb_FPU_unit___024unit.h"
#include "Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg.h"

// FUNCTIONS
Vtb_FPU_unit__Syms::~Vtb_FPU_unit__Syms()
{
}

Vtb_FPU_unit__Syms::Vtb_FPU_unit__Syms(VerilatedContext* contextp, const char* namep, Vtb_FPU_unit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03a__VDynScope_0__Vclpkg{this, Verilated::catName(namep, "$unit::__VDynScope_0__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(555);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03a__VDynScope_0__Vclpkg = &TOP____024unit__03a__03a__VDynScope_0__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03a__VDynScope_0__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
}
