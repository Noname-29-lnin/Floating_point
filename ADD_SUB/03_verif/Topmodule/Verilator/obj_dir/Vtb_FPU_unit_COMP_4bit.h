// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_FPU_unit.h for the primary calling header

#ifndef VERILATED_VTB_FPU_UNIT_COMP_4BIT_H_
#define VERILATED_VTB_FPU_UNIT_COMP_4BIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_FPU_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_FPU_unit_COMP_4bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_data_a,3,0);
    VL_IN8(i_data_b,3,0);
    VL_OUT8(o_less,0,0);
    VL_OUT8(o_equal,0,0);
    CData/*0:0*/ __PVT__w_less_low;
    CData/*0:0*/ __PVT__w_equal_low;
    CData/*0:0*/ __PVT__w_less_high;
    CData/*0:0*/ __PVT__w_equal_high;
    CData/*3:0*/ __Vtogcov__i_data_a;
    CData/*3:0*/ __Vtogcov__i_data_b;
    CData/*0:0*/ __Vtogcov__o_less;
    CData/*0:0*/ __Vtogcov__o_equal;
    CData/*0:0*/ __Vtogcov__w_less_low;
    CData/*0:0*/ __Vtogcov__w_equal_low;
    CData/*0:0*/ __Vtogcov__w_less_high;
    CData/*0:0*/ __Vtogcov__w_equal_high;

    // INTERNAL VARIABLES
    Vtb_FPU_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_FPU_unit_COMP_4bit(Vtb_FPU_unit__Syms* symsp, const char* v__name);
    ~Vtb_FPU_unit_COMP_4bit();
    VL_UNCOPYABLE(Vtb_FPU_unit_COMP_4bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
