// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_static(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_final(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__stl(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_settle(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
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
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 3, "", "Settle region did not converge.");
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x200000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x80000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x100000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
}
#endif  // VL_DEBUG

void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
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
void Vtb_FPU_unit___024root___act_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__32(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__35(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__41(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__42(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__43(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__44(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__45(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_stl(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x80001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x20001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x100201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x100401ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x10100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x100801ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x8100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x101001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x4100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x102001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x2100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x108001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x900001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x104001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x1100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x110001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x300001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x500001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0xc0001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x120001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x100203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0xc100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x3100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x1fb00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0xb00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x500201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x300203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x9fb00201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x3b00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0xfb00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x9fb00201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x8fb00001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__33(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0xfb00203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x9fb00205ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x9fb00209ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x9fb00211ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x9fb00221ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__38(vlSelf);
    }
    if ((0x9fb00241ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__39(vlSelf);
    }
    if ((0x9fb00281ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__40(vlSelf);
    }
    if ((0x9fb00301ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__41(vlSelf);
    }
    if ((0x19fb00201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__42(vlSelf);
    }
    if ((0x4fb00203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__43(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x19fb00203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__44(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
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
    if ((0x6fb00203ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__45(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_triggers__stl(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_FPU_unit___024root___eval_phase__stl(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
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
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(negedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] tb_FPU_unit.DUT.EXP_SUB_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] tb_FPU_unit.DUT.SHF_RIGHT_28BIT_UNIT.stage)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] tb_FPU_unit.DUT.MAN_ALU_UNIT.ALU_SUB_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_1.w_c)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] tb_FPU_unit.DUT.EXP_ADJUST_UNIT.CLA_8BIT_UNIT.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] tb_FPU_unit.DUT.NORMALIZATION_UNIT.SHF_left_28bit_unit.stage)\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[6].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[5].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[4].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[3].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[2].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_BLOCK_GEN[1].CLA_4BIT_UNIT_1.w_c or [hybrid] tb_FPU_unit.DUT.ROUNDING_UNIT.INCREASE_ROUNDING.CLA_4BIT_UNIT_0.w_c)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge tb_FPU_unit.i_clk)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(negedge tb_FPU_unit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_FPU_unit___024root___ctor_var_reset(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__i_32_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__i_32_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__o_ov_flow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__w_i_addr = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = VL_RAND_RESET_I(32);
    vlSelf->tb_FPU_unit__DOT__o_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_sign_result = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number = VL_RAND_RESET_I(5);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max = VL_RAND_RESET_I(25);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min = VL_RAND_RESET_I(29);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b = VL_RAND_RESET_I(28);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c = VL_RAND_RESET_I(8);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g = VL_RAND_RESET_I(7);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_13 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_18 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_20 = VL_RAND_RESET_I(28);
    vlSelf->__VdfgRegularize_hd87f99a1_0_23 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_24 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__189__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__189__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__189__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__190__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__190__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__190__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__191__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__191__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__191__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__193__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__193__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__193__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__194__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__194__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__194__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__195__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__195__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__195__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__197__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__197__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__197__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__198__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__198__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__198__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__199__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__199__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__199__temp = 0;
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__200__t_o_ov_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_FPU_unit__DOT__Display_result__200__t_o_un_flow = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__201__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__201__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__201__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__202__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__202__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__202__temp = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__203__Vfuncout = 0;
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__203__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_FPU_unit__DOT__float_to_real__203__temp = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
