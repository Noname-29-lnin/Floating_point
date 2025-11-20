// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_static__TOP(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_static(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_static\n"); );
    // Body
    Vtb_FPU_unit___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_static__TOP(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__test_count = 0U;
    vlSelf->tb_FPU_unit__DOT__test_pass = 0U;
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_final(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__stl(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_settle(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../TopModule/../../02_rlt/COMP_2bit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_FPU_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__stl(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ROUNDING.w_carry or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x80000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x100000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x200000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x400000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x800000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] CKSA_28bit.w_carry)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] CKSA_28bit.U0_1.w_c)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 37 is active: @([hybrid] CKSA_28bit.U0_1.w_c or [hybrid] CKSA_28bit.U1_1.w_c or [hybrid] CKSA_28bit.U2_1.w_c or [hybrid] CKSA_28bit.U3_1.w_c or [hybrid] CKSA_28bit.U4_1.w_c or [hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 38 is active: @([hybrid] CKSA_28bit.U0_0.w_c)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 39 is active: @([hybrid] CKSA_28bit.U0_0.w_c or [hybrid] CKSA_28bit.U1_0.w_c or [hybrid] CKSA_28bit.U2_0.w_c or [hybrid] CKSA_28bit.U3_0.w_c or [hybrid] CKSA_28bit.U4_0.w_c or [hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 40 is active: @([hybrid] CKSA_28bit.U1_1.w_c)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 41 is active: @([hybrid] CKSA_28bit.U1_0.w_c)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 42 is active: @([hybrid] CKSA_28bit.U2_1.w_c)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 43 is active: @([hybrid] CKSA_28bit.U2_0.w_c)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 44 is active: @([hybrid] CKSA_28bit.U3_1.w_c)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 45 is active: @([hybrid] CKSA_28bit.U3_0.w_c)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 46 is active: @([hybrid] CKSA_28bit.U4_1.w_c)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 47 is active: @([hybrid] CKSA_28bit.U4_0.w_c)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 48 is active: @([hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 49 is active: @([hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 50 is active: @([hybrid] CKSA_28bit.U6_1.w_c)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 51 is active: @([hybrid] CKSA_28bit.U6_0.w_c)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_FPU_unit___024root___stl_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h7cce17c8__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h7cce17c8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hc195ed0f__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hc195ed0f__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hd800da22__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hd800da22__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hdbd36c31__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hdbd36c31__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hfd7d5815__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hfd7d5815__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hccfef1f8__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hccfef1f8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h7cce17c8__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h7cce17c8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hc195ed0f__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hc195ed0f__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hd800da22__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hd800da22__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hdbd36c31__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hdbd36c31__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hfd7d5815__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hfd7d5815__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hccfef1f8__0;
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hccfef1f8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgTmp_h695911e0__0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgTmp_h695911e0__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    CData/*0:0*/ CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h1c6e9cb3__0;
    CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    // Body
    vlSelf->o_pos_one = (((IData)(((0U == (0xcU & (IData)(vlSelf->i_data))) 
                                   & ((IData)(vlSelf->i_data) 
                                      | ((IData)(vlSelf->i_data) 
                                         >> 1U)))) 
                          << 1U) | (1U & ((~ ((IData)(vlSelf->i_data) 
                                              >> 3U)) 
                                          & (((IData)(vlSelf->i_data) 
                                              >> 2U) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->i_data))))))));
    vlSelf->o_zero_flag = (1U & (~ (IData)((0U != (IData)(vlSelf->i_data)))));
    vlSelf->o_less = (1U & (((~ (IData)((0U != (IData)(vlSelf->COMP_2bit__02Ei_data_a)))) 
                             & (IData)(vlSelf->COMP_2bit__02Ei_data_b)) 
                            | (((~ (IData)(vlSelf->COMP_2bit__02Ei_data_a)) 
                                & (IData)((3U == (IData)(vlSelf->COMP_2bit__02Ei_data_b)))) 
                               | ((~ ((IData)(vlSelf->COMP_2bit__02Ei_data_a) 
                                      >> 1U)) & ((IData)(vlSelf->COMP_2bit__02Ei_data_b) 
                                                 >> 1U)))));
    vlSelf->o_equal = (1U & (~ (IData)((0U != ((IData)(vlSelf->COMP_2bit__02Ei_data_a) 
                                               ^ (IData)(vlSelf->COMP_2bit__02Ei_data_b))))));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub) 
           & (IData)(((0xff800000U == (0xff800000U 
                                       & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                      & (~ (IData)((0U != (0x7fffffU 
                                           & vlSelf->tb_FPU_unit__DOT__i_32_a)))))));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0 
        = (IData)((((0x7f800000U == (0x7f800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                       >> 0x1fU)) & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hd789dadf__0 
        = (IData)(((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
                   & (0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
                   & (~ (IData)((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b))))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & (vlSelf->CLA_24bit__02Ei_data_a & vlSelf->CLA_24bit__02Ei_data_b));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 4U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 8U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0xcU));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x10U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    & vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x14U));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & (vlSelf->CLA_24bit__02Ei_data_a ^ vlSelf->CLA_24bit__02Ei_data_b));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 4U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 8U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0xcU));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x10U));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->CLA_24bit__02Ei_data_a 
                    ^ vlSelf->CLA_24bit__02Ei_data_b) 
                   >> 0x14U));
    vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_g = (0xfU 
                                               & (vlSelf->CKSA_28bit__02Ei_data_a 
                                                  & vlSelf->CKSA_28bit__02Ei_data_b));
    vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 4U));
    vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 8U));
    vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0xcU));
    vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x10U));
    vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x14U));
    vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_g = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   & vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x18U));
    vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_p = (0xfU 
                                               & (vlSelf->CKSA_28bit__02Ei_data_a 
                                                  ^ vlSelf->CKSA_28bit__02Ei_data_b));
    vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 4U));
    vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 8U));
    vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0xcU));
    vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x10U));
    vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x14U));
    vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_p = (0xfU 
                                               & ((vlSelf->CKSA_28bit__02Ei_data_a 
                                                   ^ vlSelf->CKSA_28bit__02Ei_data_b) 
                                                  >> 0x18U));
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgTmp_h695911e0__0 
        = ((vlSelf->tb_FPU_unit__DOT__i_32_a ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
           >> 0x1fU);
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0x5000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hd800da22__0 
        = (IData)((0x2800000U == (0x2800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hdbd36c31__0 
        = (IData)((0x3000000U == (0x3000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x3000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0x50000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hd800da22__0 
        = (IData)((0x28000000U == (0x28000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hdbd36c31__0 
        = (IData)((0x30000000U == (0x30000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x30000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0x6000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0 
        = (IData)((0x1800000U == (0x1800000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0x60000000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0 
        = (IData)((0x18000000U == (0x18000000U & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0 
        = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0 
        = ((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->CLA_24bit__DOT__w_p = (((IData)((0xfU == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                    << 5U) | (((IData)(
                                                       (0xfU 
                                                        == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0xfU 
                                                           == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0xfU 
                                                                 == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                        << 1U) 
                                                       | (0xfU 
                                                          == (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))))));
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->__VdfgTmp_h7de88dc3__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_p))));
    vlSelf->__VdfgTmp_hc7f773d5__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_p))));
    vlSelf->__VdfgTmp_hcfc94fdc__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_p))));
    vlSelf->__VdfgTmp_h77199685__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_p))));
    vlSelf->__VdfgTmp_hd23a05eb__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_p))));
    vlSelf->__VdfgTmp_h273692f9__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_p))));
    vlSelf->__VdfgTmp_hda0dd4b2__0 = (IData)((((IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_g) 
                                                 >> 2U)));
    CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)
                  ? (~ (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgTmp_h695911e0__0))
                  : (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgTmp_h695911e0__0)));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a >> 0x18U)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__i_32_b >> 0x19U) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a >> 0x1cU)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0));
    tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__i_32_b >> 0x1dU) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man 
        = ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hd789dadf__0) 
             << 1U) | ((((~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                             >> 0x1fU)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0)) 
                        << 1U) | ((((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0) 
                                    & ((0U != (0x7fffffU 
                                               & vlSelf->tb_FPU_unit__DOT__i_32_b)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                   << 1U) | ((((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0) 
                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0)) 
                                              << 1U) 
                                             | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0) 
                                                  & (0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->tb_FPU_unit__DOT__i_32_b))) 
                                                 << 1U) 
                                                | ((((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0) 
                                                     & (IData)(
                                                               (0x7f800000U 
                                                                == 
                                                                (0xff800000U 
                                                                 & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                    << 1U) 
                                                   | (2U 
                                                      & (((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0) 
                                                          << 1U) 
                                                         & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                             >> 0x1eU) 
                                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0) 
                                                               << 1U)))))))))) 
           | ((((IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0) 
                & ((~ (IData)((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                   & (~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                         >> 0x1fU)))) | (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1fU) 
                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0))) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub) 
                                             & ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x1fU)) 
                                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                   >> 0x1fU)) 
                                               & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0))))) 
              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0)));
    vlSelf->__VdfgTmp_h1885aee4__0 = ((IData)(CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_h8f5d8cbf__0 = ((IData)(CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_he03e609b__0 = ((IData)(CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_h8285d4cf__0 = ((IData)(CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_h572ecf81__0 = ((IData)(CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_h530ef46a__0 = ((IData)(CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_p) 
              >> 1U));
    vlSelf->__VdfgTmp_hb3ff7a59__0 = ((IData)(CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                      & ((IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_g) 
                                         >> 1U));
    vlSelf->CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h8a056683__0 
        = ((IData)(CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h1c6e9cb3__0) 
           & ((IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_p) 
              >> 1U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_low 
        = (1U & (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                         >> 0x17U)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x17U))) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x18U)) | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x19U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1aU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1aU)) 
                                         | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hca3231d2__0) 
                                             & ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x17U)) 
                                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0))) 
                                            | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hc195ed0f__0) 
                                                & ((~ 
                                                    (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     >> 0x17U)) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hd800da22__0))) 
                                               | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hc195ed0f__0) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hdbd36c31__0)) 
                                                  | ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x4800000U 
                                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                              & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hfd7d5815__0))) 
                                                     | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hccfef1f8__0) 
                                                         & ((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                              >> 0x17U)) 
                                                            & (IData)(
                                                                      (0x4800000U 
                                                                       == 
                                                                       (0x4800000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b))))) 
                                                        | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hccfef1f8__0) 
                                                            & (IData)(
                                                                      (0x5000000U 
                                                                       == 
                                                                       (0x5000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                 >> 0x19U)) 
                                                               & (IData)(
                                                                         (0x6000000U 
                                                                          == 
                                                                          (0x6000000U 
                                                                           & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                              | ((IData)(
                                                                         (((0U 
                                                                            == 
                                                                            (0x2800000U 
                                                                             & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                                           & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                              >> 0x1aU)) 
                                                                          & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_h29946ca5__0))) 
                                                                 | ((IData)(
                                                                            (((0U 
                                                                               == 
                                                                               (0x1800000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                                              & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                                >> 0x1aU)) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hd800da22__0))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                          >> 0x18U)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                            >> 0x1aU) 
                                                                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                            >> 0x17U)) 
                                                                          & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                              >> 0x1aU) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_high 
        = (1U & (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                         >> 0x1bU)) & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1bU))) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x1cU)) | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x1dU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1eU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1eU)) 
                                         | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hca3231d2__0) 
                                             & ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x1bU)) 
                                                & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0))) 
                                            | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hc195ed0f__0) 
                                                & ((~ 
                                                    (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     >> 0x1bU)) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hd800da22__0))) 
                                               | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hc195ed0f__0) 
                                                   & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hdbd36c31__0)) 
                                                  | ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x48000000U 
                                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                              & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hfd7d5815__0))) 
                                                     | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hccfef1f8__0) 
                                                         & ((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                              >> 0x1bU)) 
                                                            & (IData)(
                                                                      (0x48000000U 
                                                                       == 
                                                                       (0x48000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b))))) 
                                                        | (((IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hccfef1f8__0) 
                                                            & (IData)(
                                                                      (0x50000000U 
                                                                       == 
                                                                       (0x50000000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                 >> 0x1dU)) 
                                                               & (IData)(
                                                                         (0x60000000U 
                                                                          == 
                                                                          (0x60000000U 
                                                                           & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                                              | ((IData)(
                                                                         (((0U 
                                                                            == 
                                                                            (0x28000000U 
                                                                             & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                                           & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                              >> 0x1eU)) 
                                                                          & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_h29946ca5__0))) 
                                                                 | ((IData)(
                                                                            (((0U 
                                                                               == 
                                                                               (0x18000000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                                                                              & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                                >> 0x1eU)) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hd800da22__0))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                          >> 0x1cU)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                            >> 0x1eU) 
                                                                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                                            >> 0x1bU)) 
                                                                          & ((vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                                              >> 0x1eU) 
                                                                             & (IData)(tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->__VdfgTmp_h207cfc3a__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_g));
    vlSelf->__VdfgTmp_he6032948__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_g));
    vlSelf->__VdfgTmp_h8509e247__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_g));
    vlSelf->__VdfgTmp_ha4d0f811__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_g));
    vlSelf->__VdfgTmp_h50c41b4e__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_g));
    vlSelf->__VdfgTmp_hc1e1e567__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_g));
    vlSelf->__VdfgTmp_h7869d370__0 = ((IData)(vlSelf->CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h8a056683__0) 
                                      & (IData)(vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_g));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_high) 
           | ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                         >> 0x1bU))))) 
              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_low)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0U] 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare)
             ? (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a))
             : (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b))) 
           << 4U);
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
            = (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_b));
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
            = (0x800000U | (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xaU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (6U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xa0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x60U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xa00U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x600U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xa000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x6000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xa0000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x60000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hc195ed0f__0 
        = (IData)((0U == (0xa00000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hccfef1f8__0 
        = (IData)((0U == (0x600000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xcU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xc0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xc00U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xc000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xc0000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hca3231d2__0 
        = (IData)((0U == (0xc00000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 1U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hca3231d2__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 5U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hca3231d2__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 9U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hca3231d2__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0xdU)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hca3231d2__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0x11U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hca3231d2__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h7cce17c8__0 
        = ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               >> 0x15U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hca3231d2__0));
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___stl_sequent__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 2U) & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                 [5U]));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 2U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 1U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 6U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 4U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 6U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 5U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xaU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 8U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xaU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 9U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xeU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xcU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xeU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xdU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x12U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x10U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x12U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x11U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x16U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x14U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x16U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x15U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hd800da22__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x1aU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x18U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hdbd36c31__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x1aU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x19U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 1U) & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                 [5U]));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 5U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 4U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 9U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 8U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0xdU) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] >> 0xcU)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x11U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x10U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x15U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x14U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h29946ca5__0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] >> 0x19U) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0x18U)));
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___stl_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___stl_comb__TOP__22\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h6b3a57ba__0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h6b3a57ba__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h523d9033__0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h523d9033__0 = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6 
        = (1U & (~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                            >> 0x14U) 
                                           ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x18U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 2U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 6U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 0xaU) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 0xeU) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 0x12U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 0x16U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h29946ca5__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hfd7d5815__0 
        = ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U] >> 0x1aU) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h29946ca5__0));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 0x10U) ^ 
                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U)))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_1 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 4U))) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h7cce17c8__0) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 5U)) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hca3231d2__0) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 6U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 3U)) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 7U)) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hca3231d2__0) 
                                                   & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h29946ca5__0))) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hc195ed0f__0) 
                                                      & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hd800da22__0))) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hc195ed0f__0) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hdbd36c31__0)) 
                                                        | ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (9U 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hfd7d5815__0))) 
                                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hccfef1f8__0) 
                                                               & ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 7U) 
                                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 4U)))) 
                                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hccfef1f8__0) 
                                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 7U) 
                                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 5U))) 
                                                                 | (((~ 
                                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                       >> 2U)) 
                                                                     & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                         [5U] 
                                                                         >> 7U) 
                                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                           [5U] 
                                                                           >> 6U))) 
                                                                    | ((IData)(
                                                                               (((0U 
                                                                                == 
                                                                                (5U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h29946ca5__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 7U))) 
                                                                       | ((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hd800da22__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 7U))) 
                                                                          | (((~ 
                                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 1U)) 
                                                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 7U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                             | ((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max) 
                                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 7U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_2 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 4U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 8U))) | 
                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h7cce17c8__0) 
                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] >> 9U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hca3231d2__0) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                              >> 7U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xbU)) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hca3231d2__0) 
                                             & ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 4U)) 
                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h29946ca5__0))) 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hc195ed0f__0) 
                                                & ((~ 
                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                     >> 4U)) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hd800da22__0))) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hc195ed0f__0) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hdbd36c31__0)) 
                                                  | ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x90U 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hfd7d5815__0))) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hccfef1f8__0) 
                                                         & ((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                              >> 4U)) 
                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 0xbU) 
                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                  [5U] 
                                                                  >> 8U)))) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hccfef1f8__0) 
                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 0xbU) 
                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                  [5U] 
                                                                  >> 9U))) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                 >> 6U)) 
                                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                   [5U] 
                                                                   >> 0xbU) 
                                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0xaU))) 
                                                              | ((IData)(
                                                                         (((0U 
                                                                            == 
                                                                            (0x50U 
                                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h29946ca5__0)) 
                                                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                             [5U] 
                                                                             >> 0xbU))) 
                                                                 | ((IData)(
                                                                            (((0U 
                                                                               == 
                                                                               (0x30U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hd800da22__0)) 
                                                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xbU))) 
                                                                    | (((~ 
                                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                          >> 5U)) 
                                                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                            [5U] 
                                                                            >> 0xbU) 
                                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                       | ((~ 
                                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                            >> 4U)) 
                                                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                              [5U] 
                                                                              >> 0xbU) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_3 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 8U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 0xcU))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0xdU)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hca3231d2__0) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU)) 
                                          | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 0xbU)) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xfU)) 
                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hca3231d2__0) 
                                                 & ((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                      >> 8U)) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h29946ca5__0))) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hc195ed0f__0) 
                                                    & ((~ 
                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                         >> 8U)) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hd800da22__0))) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hc195ed0f__0) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hdbd36c31__0)) 
                                                      | ((IData)(
                                                                 ((0U 
                                                                   == 
                                                                   (0x900U 
                                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hfd7d5815__0))) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hccfef1f8__0) 
                                                             & ((~ 
                                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                  >> 8U)) 
                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                    [5U] 
                                                                    >> 0xfU) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0xcU)))) 
                                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hccfef1f8__0) 
                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                    [5U] 
                                                                    >> 0xfU) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                      [5U] 
                                                                      >> 0xdU))) 
                                                               | (((~ 
                                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                     >> 0xaU)) 
                                                                   & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0xfU) 
                                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                         [5U] 
                                                                         >> 0xeU))) 
                                                                  | ((IData)(
                                                                             (((0U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h29946ca5__0)) 
                                                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xfU))) 
                                                                     | ((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hd800da22__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xfU))) 
                                                                        | (((~ 
                                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                              >> 9U)) 
                                                                            & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xfU) 
                                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                           | ((~ 
                                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 8U)) 
                                                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0xfU) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_4 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0xcU)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                      [5U] >> 0x10U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x11U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hca3231d2__0) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x12U)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0xfU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x13U)) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hca3231d2__0) 
                                                  & ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0xcU)) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h29946ca5__0))) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hc195ed0f__0) 
                                                     & ((~ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                          >> 0xcU)) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hd800da22__0))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hc195ed0f__0) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hdbd36c31__0)) 
                                                       | ((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x9000U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hfd7d5815__0))) 
                                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hccfef1f8__0) 
                                                              & ((~ 
                                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                   >> 0xcU)) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x13U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x10U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hccfef1f8__0) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x13U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x11U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0xeU)) 
                                                                    & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 0x13U) 
                                                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                          [5U] 
                                                                          >> 0x12U))) 
                                                                   | ((IData)(
                                                                              (((0U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h29946ca5__0)) 
                                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x13U))) 
                                                                      | ((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hd800da22__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x13U))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0xdU)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0xcU)) 
                                                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_5 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0x10U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x15U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hca3231d2__0) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x16U)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0x13U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x17U)) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hca3231d2__0) 
                                                  & ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0x10U)) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h29946ca5__0))) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hc195ed0f__0) 
                                                     & ((~ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                          >> 0x10U)) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hd800da22__0))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hc195ed0f__0) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hdbd36c31__0)) 
                                                       | ((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x90000U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hfd7d5815__0))) 
                                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hccfef1f8__0) 
                                                              & ((~ 
                                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                   >> 0x10U)) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x14U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hccfef1f8__0) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x15U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0x12U)) 
                                                                    & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 0x17U) 
                                                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                          [5U] 
                                                                          >> 0x16U))) 
                                                                   | ((IData)(
                                                                              (((0U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h29946ca5__0)) 
                                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x17U))) 
                                                                      | ((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hd800da22__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x17U))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0x11U)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x17U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0x10U)) 
                                                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x17U) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_6 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h7cce17c8__0) 
                  & ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                         >> 0x14U)) & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h7cce17c8__0) 
                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                        [5U] >> 0x19U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hca3231d2__0) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU)) 
                                           | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                   >> 0x17U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x1bU)) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hca3231d2__0) 
                                                  & ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                       >> 0x14U)) 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h29946ca5__0))) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hc195ed0f__0) 
                                                     & ((~ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                          >> 0x14U)) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hd800da22__0))) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hc195ed0f__0) 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hdbd36c31__0)) 
                                                       | ((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x900000U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hfd7d5815__0))) 
                                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hccfef1f8__0) 
                                                              & ((~ 
                                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                   >> 0x14U)) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x1bU) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x18U)))) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hccfef1f8__0) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 0x1bU) 
                                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 0x19U))) 
                                                                | (((~ 
                                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                      >> 0x16U)) 
                                                                    & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                        [5U] 
                                                                        >> 0x1bU) 
                                                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                          [5U] 
                                                                          >> 0x1aU))) 
                                                                   | ((IData)(
                                                                              (((0U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h29946ca5__0)) 
                                                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x1bU))) 
                                                                      | ((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hd800da22__0)) 
                                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x1bU))) 
                                                                         | (((~ 
                                                                              (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                               >> 0x15U)) 
                                                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x1bU) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hdbd36c31__0))) 
                                                                            | ((~ 
                                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                                                >> 0x14U)) 
                                                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                                [5U] 
                                                                                >> 0x1bU) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h6b3a57ba__0 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 0xcU) ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U)))))) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0));
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h523d9033__0 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 8U) ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU)))))) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h6b3a57ba__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_6) 
           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6) 
               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_5)) 
              | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0) 
                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_4)) 
                 | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h6b3a57ba__0) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_3)) 
                    | (((IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h523d9033__0) 
                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_2)) 
                       | (((~ (IData)((0U != (0xfU 
                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                  >> 4U) 
                                                 ^ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 8U)))))) 
                           & (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_h523d9033__0)) 
                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_1) 
                             | ((~ (IData)((0U != (0xfU 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                                      ^ 
                                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 4U)))))) 
                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 1U) 
                                           | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 2U) 
                                              | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 3U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_h29946ca5__0) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hd800da22__0) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hdbd36c31__0) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hfd7d5815__0) 
                                                             | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                 [5U] 
                                                                 >> 3U) 
                                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                   [5U] 
                                                                   | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                       [5U] 
                                                                       >> 1U) 
                                                                      | ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                          [5U] 
                                                                          >> 2U) 
                                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_h29946ca5__0) 
                                                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hd800da22__0) 
                                                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hdbd36c31__0) 
                                                                                | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hfd7d5815__0))))))))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) 
           | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less));
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U];
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               << 4U);
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
               << 4U);
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
            [5U];
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result 
        = (1U & (((((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                       >> 0x1fU)) | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1fU)) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub))) 
                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                 | ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man)) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                       >> 0x1fU))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
        = (0xfffffffU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)
                          ? (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min)
                          : vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                   ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p))));
}

void Vtb_FPU_unit___024root___ico_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__41(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__42(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__43(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__44(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_stl(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((0x200000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x100000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x80000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x40000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x20000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x10000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x1000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x4000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x10000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x20000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x40000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x80000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((0x100000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((0x200000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x400000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((0x800000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((0x1000000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((0x2000000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__17(vlSelf);
    }
    if ((0x4000000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((0x8000000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__19(vlSelf);
    }
    if ((0x8000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__20(vlSelf);
    }
    if ((0x400001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x800001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___stl_comb__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x4000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x2000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x3f0000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__21(vlSelf);
    }
    if ((0x4002000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__22(vlSelf);
    }
    if ((0x8008000000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__23(vlSelf);
    }
    if ((0x408000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x900001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0xa00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x840001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x880001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x804001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x808001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x810001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x820001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x800401ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x800801ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x801001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x802001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x800101ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x800201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x800081ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x5000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x2800001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xc00a800000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__25(vlSelf);
    }
    if ((0x8a0001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x80a001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0xc00201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0xaaaa01ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x800a01ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0xc00081ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xffff800000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__26(vlSelf);
    }
    if ((0xeaaa09ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x80aa01ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x8aaa01ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xeaaa09ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x8aaa09ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xcaaa01ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xeaaa0dULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__40(vlSelf);
    }
    if ((0xcaaa41ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__41(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xcaaa21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__42(vlSelf);
    }
    if ((0xcaaa51ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__43(vlSelf);
    }
    if ((0xeaaa2bULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__44(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_triggers__stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_FPU_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__ico(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((8ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] CKSA_28bit.w_carry)\n");
    }
    if ((0x400ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] CKSA_28bit.U0_1.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] CKSA_28bit.U0_1.w_c or [hybrid] CKSA_28bit.U1_1.w_c or [hybrid] CKSA_28bit.U2_1.w_c or [hybrid] CKSA_28bit.U3_1.w_c or [hybrid] CKSA_28bit.U4_1.w_c or [hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] CKSA_28bit.U0_0.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] CKSA_28bit.U0_0.w_c or [hybrid] CKSA_28bit.U1_0.w_c or [hybrid] CKSA_28bit.U2_0.w_c or [hybrid] CKSA_28bit.U3_0.w_c or [hybrid] CKSA_28bit.U4_0.w_c or [hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] CKSA_28bit.U1_1.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] CKSA_28bit.U1_0.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] CKSA_28bit.U2_1.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 17 is active: @([hybrid] CKSA_28bit.U2_0.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 18 is active: @([hybrid] CKSA_28bit.U3_1.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 19 is active: @([hybrid] CKSA_28bit.U3_0.w_c)\n");
    }
    if ((0x100000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 20 is active: @([hybrid] CKSA_28bit.U4_1.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 21 is active: @([hybrid] CKSA_28bit.U4_0.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 22 is active: @([hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x800000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 23 is active: @([hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 24 is active: @([hybrid] CKSA_28bit.U6_1.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 25 is active: @([hybrid] CKSA_28bit.U6_0.w_c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ROUNDING.w_carry or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] CKSA_28bit.w_carry)\n");
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] CKSA_28bit.U0_1.w_c)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] CKSA_28bit.U0_1.w_c or [hybrid] CKSA_28bit.U1_1.w_c or [hybrid] CKSA_28bit.U2_1.w_c or [hybrid] CKSA_28bit.U3_1.w_c or [hybrid] CKSA_28bit.U4_1.w_c or [hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] CKSA_28bit.U0_0.w_c)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] CKSA_28bit.U0_0.w_c or [hybrid] CKSA_28bit.U1_0.w_c or [hybrid] CKSA_28bit.U2_0.w_c or [hybrid] CKSA_28bit.U3_0.w_c or [hybrid] CKSA_28bit.U4_0.w_c or [hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] CKSA_28bit.U1_1.w_c)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] CKSA_28bit.U1_0.w_c)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] CKSA_28bit.U2_1.w_c)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] CKSA_28bit.U2_0.w_c)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] CKSA_28bit.U3_1.w_c)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] CKSA_28bit.U3_0.w_c)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @([hybrid] CKSA_28bit.U4_1.w_c)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @([hybrid] CKSA_28bit.U4_0.w_c)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @([hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @([hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @([hybrid] CKSA_28bit.U6_1.w_c)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @([hybrid] CKSA_28bit.U6_0.w_c)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @(negedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ROUNDING.w_carry or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_carry)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] CLA_24bit.CLA_BLOCK_GEN[0].CLA_4BIT_UNIT.w_c or [hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] CLA_24bit.w_c)\n");
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] CKSA_28bit.w_carry)\n");
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] CKSA_28bit.U0_1.w_c)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] CKSA_28bit.U0_1.w_c or [hybrid] CKSA_28bit.U1_1.w_c or [hybrid] CKSA_28bit.U2_1.w_c or [hybrid] CKSA_28bit.U3_1.w_c or [hybrid] CKSA_28bit.U4_1.w_c or [hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] CKSA_28bit.U0_0.w_c)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] CKSA_28bit.U0_0.w_c or [hybrid] CKSA_28bit.U1_0.w_c or [hybrid] CKSA_28bit.U2_0.w_c or [hybrid] CKSA_28bit.U3_0.w_c or [hybrid] CKSA_28bit.U4_0.w_c or [hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] CKSA_28bit.U1_1.w_c)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] CKSA_28bit.U1_0.w_c)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] CKSA_28bit.U2_1.w_c)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] CKSA_28bit.U2_0.w_c)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] CKSA_28bit.U3_1.w_c)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] CKSA_28bit.U3_0.w_c)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @([hybrid] CKSA_28bit.U4_1.w_c)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @([hybrid] CKSA_28bit.U4_0.w_c)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @([hybrid] CKSA_28bit.U5_1.w_c)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @([hybrid] CKSA_28bit.U5_0.w_c)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @([hybrid] CKSA_28bit.U6_1.w_c)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @([hybrid] CKSA_28bit.U6_0.w_c)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @(negedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_FPU_unit___024root___ctor_var_reset(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->COMP_2bit__02Ei_data_a = VL_RAND_RESET_I(2);
    vlSelf->COMP_2bit__02Ei_data_b = VL_RAND_RESET_I(2);
    vlSelf->o_less = VL_RAND_RESET_I(1);
    vlSelf->o_equal = VL_RAND_RESET_I(1);
    vlSelf->i_data = VL_RAND_RESET_I(4);
    vlSelf->o_pos_one = VL_RAND_RESET_I(2);
    vlSelf->o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->CLA_24bit__02Ei_carry = VL_RAND_RESET_I(1);
    vlSelf->CLA_24bit__02Ei_data_a = VL_RAND_RESET_I(24);
    vlSelf->CLA_24bit__02Ei_data_b = VL_RAND_RESET_I(24);
    vlSelf->CLA_24bit__02Eo_sum = VL_RAND_RESET_I(24);
    vlSelf->CLA_24bit__02Eo_carry = VL_RAND_RESET_I(1);
    vlSelf->CKSA_28bit__02Ei_carry = VL_RAND_RESET_I(1);
    vlSelf->CKSA_28bit__02Ei_data_a = VL_RAND_RESET_I(28);
    vlSelf->CKSA_28bit__02Ei_data_b = VL_RAND_RESET_I(28);
    vlSelf->CKSA_28bit__02Eo_sum = VL_RAND_RESET_I(28);
    vlSelf->CKSA_28bit__02Eo_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_32_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__i_32_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__w_i_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__test_count = 0;
    vlSelf->tb_FPU_unit__DOT__test_pass = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_max = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_min = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_ROUNDING_man = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_o_sel_man = VL_RAND_RESET_I(2);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SIGN_OUT__i_comp_man = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_0__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_less_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_low = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_less_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h7cce17c8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hca3231d2__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_h29946ca5__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hc195ed0f__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hd800da22__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hdbd36c31__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hfd7d5815__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT____VdfgTmp_hccfef1f8__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h52be7c25__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bae4039__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_hf8322e18__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bc27682__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h52be7c25__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bae4039__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_hf8322e18__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bc27682__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h52be7c25__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bae4039__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_hf8322e18__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bc27682__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry = VL_RAND_RESET_I(24);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hd789dadf__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0 = 0;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CLA_24bit__DOT__w_c = VL_RAND_RESET_I(7);
    vlSelf->CLA_24bit__DOT__w_p = VL_RAND_RESET_I(6);
    vlSelf->CLA_24bit__DOT__w_g = VL_RAND_RESET_I(6);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0 = 0;
    vlSelf->CKSA_28bit__DOT__w_carry = VL_RAND_RESET_I(7);
    vlSelf->CKSA_28bit__DOT__w_carry_0 = VL_RAND_RESET_I(7);
    vlSelf->CKSA_28bit__DOT__w_carry_1 = VL_RAND_RESET_I(7);
    vlSelf->CKSA_28bit__DOT____Vcellout__U0_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U0_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U1_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U1_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U2_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U2_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U3_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U3_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U4_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U4_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U5_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U5_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U6_0__cout = VL_RAND_RESET_I(1);
    vlSelf->CKSA_28bit__DOT____Vcellout__U6_0__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT____Vcellout__U6_1__cout = VL_RAND_RESET_I(1);
    vlSelf->CKSA_28bit__DOT____Vcellout__U6_1__sum = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U0_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U0_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U0_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U1_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U1_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U1_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U2_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U2_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U2_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U3_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U3_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U3_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U4_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U4_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U4_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U5_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U5_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U5_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U6_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U6_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->CKSA_28bit__DOT__U6_1__DOT____VdfgTmp_h8a056683__0 = 0;
    vlSelf->__VdfgTmp_hda0dd4b2__0 = 0;
    vlSelf->__VdfgTmp_hb3ff7a59__0 = 0;
    vlSelf->__VdfgTmp_h7869d370__0 = 0;
    vlSelf->__VdfgTmp_h273692f9__0 = 0;
    vlSelf->__VdfgTmp_h530ef46a__0 = 0;
    vlSelf->__VdfgTmp_hc1e1e567__0 = 0;
    vlSelf->__VdfgTmp_hd23a05eb__0 = 0;
    vlSelf->__VdfgTmp_h572ecf81__0 = 0;
    vlSelf->__VdfgTmp_h50c41b4e__0 = 0;
    vlSelf->__VdfgTmp_h77199685__0 = 0;
    vlSelf->__VdfgTmp_h8285d4cf__0 = 0;
    vlSelf->__VdfgTmp_ha4d0f811__0 = 0;
    vlSelf->__VdfgTmp_hcfc94fdc__0 = 0;
    vlSelf->__VdfgTmp_he03e609b__0 = 0;
    vlSelf->__VdfgTmp_h8509e247__0 = 0;
    vlSelf->__VdfgTmp_hc7f773d5__0 = 0;
    vlSelf->__VdfgTmp_h8f5d8cbf__0 = 0;
    vlSelf->__VdfgTmp_he6032948__0 = 0;
    vlSelf->__VdfgTmp_h7de88dc3__0 = 0;
    vlSelf->__VdfgTmp_h1885aee4__0 = 0;
    vlSelf->__VdfgTmp_h207cfc3a__0 = 0;
    vlSelf->__VdfgTmp_he6ef3697__0 = 0;
    vlSelf->__VdfgTmp_h090a2097__0 = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_i_add_sub = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_i_32_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_i_32_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_o_32_s = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_o_ov_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_o_un_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_sr_32_a = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_sr_32_b = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_sr_32_s = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_sr_32_e = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_sr_rounding_error = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__570__t_error = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_i_add_sub = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_i_32_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_i_32_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_o_32_s = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_o_ov_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_o_un_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_sr_32_a = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_sr_32_b = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_sr_32_s = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_sr_32_e = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__1153__t_error = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__f_sr_32_s = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__f_sr_32_e = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__s_is_nan = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__e_is_nan = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__s_is_inf = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__cal_rounding_error__1161__e_is_inf = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry__0 = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__w_c__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__w_carry__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__w_c__1 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__w_carry__1 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry__1 = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_24bit__DOT__w_c__2 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__w_carry__2 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U0_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U1_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U2_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U3_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U4_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U5_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_1__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CKSA_28bit__DOT__U6_0__DOT__w_c__2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
