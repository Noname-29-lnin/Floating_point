// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024root.h"

void Vtb_FPU_unit___024root___ctor_var_reset(Vtb_FPU_unit___024root* vlSelf);

Vtb_FPU_unit___024root::Vtb_FPU_unit___024root(Vtb_FPU_unit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_FPU_unit___024root___ctor_var_reset(this);
}

void Vtb_FPU_unit___024root___configure_coverage(Vtb_FPU_unit___024root* vlSelf, bool first);

void Vtb_FPU_unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtb_FPU_unit___024root___configure_coverage(this, first);
}

Vtb_FPU_unit___024root::~Vtb_FPU_unit___024root() {
}

// Coverage
void Vtb_FPU_unit___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
