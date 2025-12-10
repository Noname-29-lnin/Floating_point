// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_COMP_28BIT__SYMS_H_
#define VERILATED_VTB_COMP_28BIT__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_COMP_28bit.h"

// INCLUDE MODULE CLASSES
#include "Vtb_COMP_28bit___024root.h"
#include "Vtb_COMP_28bit_COMP_4bit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_COMP_28bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_COMP_28bit* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_COMP_28bit___024root       TOP;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5;
    Vtb_COMP_28bit_COMP_4bit       TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6;

    // COVERAGE
    uint32_t __Vcoverage[99];

    // CONSTRUCTORS
    Vtb_COMP_28bit__Syms(VerilatedContext* contextp, const char* namep, Vtb_COMP_28bit* modelp);
    ~Vtb_COMP_28bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
