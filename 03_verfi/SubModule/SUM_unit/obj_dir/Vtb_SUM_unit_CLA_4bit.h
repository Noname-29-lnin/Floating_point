// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_SUM_unit.h for the primary calling header

#ifndef VERILATED_VTB_SUM_UNIT_CLA_4BIT_H_
#define VERILATED_VTB_SUM_UNIT_CLA_4BIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_SUM_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_SUM_unit_CLA_4bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,3,0);
    VL_OUT8(o_p,0,0);
    VL_OUT8(o_g,0,0);
    CData/*3:0*/ __PVT__w_g;
    CData/*3:0*/ __PVT__w_p;
    CData/*3:0*/ __PVT__w_c;
    CData/*3:0*/ __Vtogcov__a;
    CData/*3:0*/ __Vtogcov__b;
    CData/*0:0*/ __Vtogcov__cin;
    CData/*3:0*/ __Vtogcov__sum;
    CData/*0:0*/ __Vtogcov__o_p;
    CData/*0:0*/ __Vtogcov__o_g;
    CData/*3:0*/ __Vtogcov__w_g;
    CData/*3:0*/ __Vtogcov__w_p;
    CData/*3:0*/ __Vtogcov__w_c;

    // INTERNAL VARIABLES
    Vtb_SUM_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_SUM_unit_CLA_4bit(Vtb_SUM_unit__Syms* symsp, const char* v__name);
    ~Vtb_SUM_unit_CLA_4bit();
    VL_UNCOPYABLE(Vtb_SUM_unit_CLA_4bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
