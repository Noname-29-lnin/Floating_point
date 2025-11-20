// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_FPU_unit.h for the primary calling header

#ifndef VERILATED_VTB_FPU_UNIT___024UNIT_H_
#define VERILATED_VTB_FPU_UNIT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_FPU_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_FPU_unit___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_FPU_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_FPU_unit___024unit(Vtb_FPU_unit__Syms* symsp, const char* v__name);
    ~Vtb_FPU_unit___024unit();
    VL_UNCOPYABLE(Vtb_FPU_unit___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
