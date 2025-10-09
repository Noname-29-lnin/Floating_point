// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SHF_UNIT__SYMS_H_
#define VERILATED_VTB_SHF_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_SHF_unit.h"

// INCLUDE MODULE CLASSES
#include "Vtb_SHF_unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_SHF_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_SHF_unit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_SHF_unit___024root         TOP;

    // COVERAGE
    uint32_t __Vcoverage[248];

    // CONSTRUCTORS
    Vtb_SHF_unit__Syms(VerilatedContext* contextp, const char* namep, Vtb_SHF_unit* modelp);
    ~Vtb_SHF_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
