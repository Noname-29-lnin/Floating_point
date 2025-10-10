// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_SUM_unit.h for the primary calling header

#ifndef VERILATED_VTB_SUM_UNIT___024ROOT_H_
#define VERILATED_VTB_SUM_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_SUM_unit_CLA_4bit;


class Vtb_SUM_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_SUM_unit___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_SUM_unit_CLA_4bit* __PVT__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_SUM_unit__DOT__i_carry;
    CData/*0:0*/ tb_SUM_unit__DOT__expected_carry;
    CData/*0:0*/ tb_SUM_unit__DOT____Vtogcov__i_carry;
    CData/*0:0*/ tb_SUM_unit__DOT____Vtogcov__o_carry;
    CData/*0:0*/ tb_SUM_unit__DOT____Vtogcov__expected_carry;
    CData/*7:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c;
    CData/*6:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p;
    CData/*6:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g;
    CData/*7:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c;
    CData/*6:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p;
    CData/*6:0*/ tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*27:0*/ tb_SUM_unit__DOT__i_data_a;
    IData/*27:0*/ tb_SUM_unit__DOT__i_data_b;
    IData/*27:0*/ tb_SUM_unit__DOT__o_sum;
    IData/*27:0*/ tb_SUM_unit__DOT__expected_sum;
    IData/*31:0*/ tb_SUM_unit__DOT__i;
    IData/*31:0*/ tb_SUM_unit__DOT__pass_count;
    IData/*31:0*/ tb_SUM_unit__DOT__fail_count;
    IData/*27:0*/ tb_SUM_unit__DOT____Vtogcov__i_data_a;
    IData/*27:0*/ tb_SUM_unit__DOT____Vtogcov__i_data_b;
    IData/*27:0*/ tb_SUM_unit__DOT____Vtogcov__o_sum;
    IData/*27:0*/ tb_SUM_unit__DOT____Vtogcov__expected_sum;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_SUM_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_SUM_unit___024root(Vtb_SUM_unit__Syms* symsp, const char* v__name);
    ~Vtb_SUM_unit___024root();
    VL_UNCOPYABLE(Vtb_SUM_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
