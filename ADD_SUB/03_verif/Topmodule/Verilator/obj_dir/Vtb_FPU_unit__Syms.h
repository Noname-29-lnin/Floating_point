// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_FPU_UNIT__SYMS_H_
#define VERILATED_VTB_FPU_UNIT__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_FPU_unit.h"

// INCLUDE MODULE CLASSES
#include "Vtb_FPU_unit___024root.h"
#include "Vtb_FPU_unit_CLA_4bit.h"
#include "Vtb_FPU_unit_COMP_4bit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_FPU_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_FPU_unit* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_FPU_unit___024root         TOP;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_CLA_4bit          TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4;
    Vtb_FPU_unit_COMP_4bit         TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4;

    // COVERAGE
    uint32_t __Vcoverage[1180];

    // CONSTRUCTORS
    Vtb_FPU_unit__Syms(VerilatedContext* contextp, const char* namep, Vtb_FPU_unit* modelp);
    ~Vtb_FPU_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
