// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_LOPD_UNIT__SYMS_H_
#define VERILATED_VTB_LOPD_UNIT__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_LOPD_unit.h"

// INCLUDE MODULE CLASSES
#include "Vtb_LOPD_unit___024root.h"
#include "Vtb_LOPD_unit___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_LOPD_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_LOPD_unit* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_LOPD_unit___024root        TOP;
    Vtb_LOPD_unit___024unit        TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_LOPD_unit;

    // CONSTRUCTORS
    Vtb_LOPD_unit__Syms(VerilatedContext* contextp, const char* namep, Vtb_LOPD_unit* modelp);
    ~Vtb_LOPD_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
