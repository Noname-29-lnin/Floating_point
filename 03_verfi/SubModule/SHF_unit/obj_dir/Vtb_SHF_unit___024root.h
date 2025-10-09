// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_SHF_unit.h for the primary calling header

#ifndef VERILATED_VTB_SHF_UNIT___024ROOT_H_
#define VERILATED_VTB_SHF_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_SHF_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_SHF_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ tb_SHF_unit__DOT__i_shift_number;
    CData/*4:0*/ tb_SHF_unit__DOT____Vtogcov__i_shift_number;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ tb_SHF_unit__DOT__i_data;
    IData/*23:0*/ tb_SHF_unit__DOT__expected_data;
    IData/*31:0*/ tb_SHF_unit__DOT__i;
    IData/*31:0*/ tb_SHF_unit__DOT__pass_count;
    IData/*31:0*/ tb_SHF_unit__DOT__fail_count;
    IData/*23:0*/ tb_SHF_unit__DOT____Vtogcov__i_data;
    IData/*23:0*/ tb_SHF_unit__DOT____Vtogcov__o_data;
    IData/*23:0*/ tb_SHF_unit__DOT____Vtogcov__expected_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*23:0*/, 6> tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data;
    VlUnpacked<IData/*23:0*/, 6> tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data;
    VlUnpacked<IData/*23:0*/, 6> __Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__0;
    VlUnpacked<IData/*23:0*/, 6> __Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__1;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_SHF_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_SHF_unit___024root(Vtb_SHF_unit__Syms* symsp, const char* v__name);
    ~Vtb_SHF_unit___024root();
    VL_UNCOPYABLE(Vtb_SHF_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
