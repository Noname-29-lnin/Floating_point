// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_FPU_unit.h for the primary calling header

#ifndef VERILATED_VTB_FPU_UNIT___024UNIT__03A__03A__VDYNSCOPE_0__VCLPKG_H_
#define VERILATED_VTB_FPU_UNIT___024UNIT__03A__03A__VDYNSCOPE_0__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_FPU_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_FPU_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg(Vtb_FPU_unit__Syms* symsp, const char* v__name);
    ~Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg();
    VL_UNCOPYABLE(Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_FPU_unit__Syms;

class Vtb_FPU_unit___024unit__03a__03a__VDynScope_0 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__t_clk,0,0);
    IData/*31:0*/ __PVT__PERIOD;
  private:
    void _ctor_var_reset(Vtb_FPU_unit__Syms* __restrict vlSymsp);
  public:
    Vtb_FPU_unit___024unit__03a__03a__VDynScope_0(Vtb_FPU_unit__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_FPU_unit___024unit__03a__03a__VDynScope_0();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_FPU_unit___024unit__03a__03a__VDynScope_0>& obj);

#endif  // guard
