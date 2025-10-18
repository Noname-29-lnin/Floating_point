// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU_32bit.h for the primary calling header

#include "VFPU_32bit__pch.h"
#include "VFPU_32bit___024root.h"

void VFPU_32bit___024root___ico_sequent__TOP__0(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__0(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__1(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__2(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__3(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__4(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__5(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__6(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__7(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__8(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__9(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__10(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__11(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__12(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__13(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___ico_comb__TOP__14(VFPU_32bit___024root* vlSelf);

void VFPU_32bit___024root___eval_ico(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x801ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x13ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x103ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x43ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x23ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x203ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x403ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x83ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x243ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x4a3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x7f3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((0x7ebULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x7efULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x7ffULL & vlSelf->__VicoTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__14(vlSelf);
    }
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_sequent__TOP__0(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_0;
    FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_0 = 0;
    IData/*28:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_1;
    FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_1 = 0;
    CData/*0:0*/ FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT____VdfgRegularize_h8d61d2d1_0_0;
    FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT____VdfgRegularize_h8d61d2d1_0_0 = 0;
    // Body
    FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_0 
        = (0x800000U | ((0x10000000U & (vlSelf->i_data_a 
                                        >> 3U)) | (0x7fffffU 
                                                   & vlSelf->i_data_a)));
    FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_1 
        = (0x800000U | ((0x10000000U & (vlSelf->i_data_b 
                                        >> 3U)) | (0x7fffffU 
                                                   & vlSelf->i_data_b)));
    vlSelf->FPU_32bit__DOT__EXP_o_exp_diff_signal = 
        ((0xffU & (vlSelf->i_data_a >> 0x17U)) < (0xffU 
                                                  & (vlSelf->i_data_b 
                                                     >> 0x17U)));
    if (vlSelf->FPU_32bit__DOT__EXP_o_exp_diff_signal) {
        vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp 
            = (0xffU & (vlSelf->i_data_a >> 0x17U));
        vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp 
            = (0xffU & (vlSelf->i_data_b >> 0x17U));
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a 
            = FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_1;
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0 
            = FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_0;
    } else {
        vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp 
            = (0xffU & (vlSelf->i_data_b >> 0x17U));
        vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp 
            = (0xffU & (vlSelf->i_data_a >> 0x17U));
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a 
            = FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_0;
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0 
            = FPU_32bit__DOT__MANTISSA_UNTI__DOT____VdfgRegularize_he704f1e6_0_1;
    }
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                    >> 4U) & (~ ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp) 
                                 >> 4U))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                    >> 4U) ^ (~ ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp) 
                                 >> 4U))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                   & (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                   ^ (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[0U] 
        = (0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0);
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1 
        = ((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1) 
           | (0x10000000U & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | ((IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                   & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = (1U | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | ((IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                                   & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)))))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_compare 
        = ((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a) 
           < (0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | (0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)));
    if (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_compare) {
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0 
            = vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a;
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
            = vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1;
    } else {
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0 
            = vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1;
        vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
            = vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a;
    }
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT____VdfgRegularize_h8d61d2d1_0_0 
        = (1U & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                  ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0) 
                 >> 0x1cU));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value 
        = ((0x10U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U)) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in 
        = (1U & ((IData)(vlSelf->i_alu_op) ? (IData)(FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT____VdfgRegularize_h8d61d2d1_0_0)
                  : (~ (IData)(FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT____VdfgRegularize_h8d61d2d1_0_0))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
        = (0xfffffffU & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in)
                          ? (~ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0)
                          : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                   & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 4U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 8U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                   ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x10U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0xcU));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x14U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 4U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 8U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x18U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x10U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0xcU));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x14U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                    ^ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b) 
                   >> 0x18U));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p))))))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g 
        = ((0x40U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                  << 3U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                            << 4U)) 
                                | (((IData)((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    << 6U) & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                               << 5U) 
                                              | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                  << 5U) 
                                                 & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    << 6U))))))) 
           | ((0x20U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                         << 2U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                     << 2U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                               << 3U)) 
                                   | (((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                       << 5U) & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       << 5U))))))) 
              | ((0x10U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                            << 1U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                        << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  << 2U)) 
                                      | (((IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                          << 4U) & 
                                         (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 3U) | 
                                          (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                            << 3U) 
                                           & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                              << 4U))))))) 
                 | ((8U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                           | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                  << 1U)) | (((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                              << 3U) 
                                             & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                    << 2U) 
                                                   & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                      << 3U))))))) 
                    | ((4U & ((0x7ffffffcU & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                              >> 1U)) 
                              | ((0x7ffffffcU & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g))) 
                                 | (0xfffffffcU & (
                                                   ((IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                    << 2U) 
                                                   & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       << 1U) 
                                                      | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          << 1U) 
                                                         & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                            << 2U)))))))) 
                       | ((2U & ((0x3ffffffeU & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                 | ((0x3ffffffeU & 
                                     (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                       >> 2U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 1U))) 
                                    | (0xfffffffeU 
                                       & (((IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                           << 1U) & 
                                          ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 << 1U)))))))) 
                          | (1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g)))))))))))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__0(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[1U] 
        = ((1U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value))
            ? (0x7ffffffU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                             [0U] >> 1U)) : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
           [0U]);
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[2U] 
        = ((2U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value))
            ? (0x3ffffffU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                             [1U] >> 2U)) : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
           [1U]);
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[3U] 
        = ((4U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value))
            ? (0xffffffU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                            [2U] >> 4U)) : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
           [2U]);
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[4U] 
        = ((8U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value))
            ? (0xfffffU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                           [3U] >> 8U)) : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
           [3U]);
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[5U] 
        = ((0x10U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value))
            ? (0xfffU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                         [4U] >> 0x10U)) : vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
           [4U]);
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__1(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_22;
    // Body
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (1U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 2U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 4U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 3U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 5U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 6U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
    __Vtemp_22 = ((0x80U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                             | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                            << 1U)) | ((0x40U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                                  | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                     & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                                 << 1U)) 
                                       | ((0x20U & 
                                           (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                             | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                            << 1U)) 
                                          | ((0x10U 
                                              & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                                  | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                     & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                                 << 1U)) 
                                             | ((8U 
                                                 & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                                     | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                        & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                                    << 1U)) 
                                                | ((4U 
                                                    & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                                        | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                           & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g) 
                                                           | ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p) 
                                                              & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in))))))));
    vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c 
        = __Vtemp_22;
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data 
        = ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->__VdfgRegularize_hd87f99a1_0_23 = (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                                << 0x14U) 
                                               | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                                            << 4U) 
                                                           | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))))));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[0U] 
        = (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
            << 0x18U) | vlSelf->__VdfgRegularize_hd87f99a1_0_23);
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__2(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                               >> 3U))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__3(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__3\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                               >> 3U))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = (IData)(
                                                     (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__4(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__4\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                               >> 3U))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__5(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__5\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                               >> 3U))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__6(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__6\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                               >> 3U))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_11 = (IData)(
                                                      (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                        >> 1U) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__7(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__7\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                               >> 3U))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_18 = (IData)(
                                                      (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                        >> 1U) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data)))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__8(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__8\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                            >> 1U)) 
                            | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                               >> 3U))));
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                     >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                >> 1U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__9(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__9\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1 
        = (1U & ((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                      >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                 >> 1U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__10(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__10\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1 
        = (((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                 >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                            >> 1U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
            & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18))) 
           & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b 
        = ((0x80U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
            ? 0xfU : ((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                       ? 0U : (1U & (~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
            >> 4U) & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                    >> 4U) ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | ((IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                   & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__11(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__11\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__NOR_o_zero_flag = ((((~ 
                                                  (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                       >> 1U) 
                                                      | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))) 
                                                & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                                               & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__12(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__12\n"); );
    // Init
    CData/*3:0*/ __VdfgRegularize_hd87f99a1_0_21;
    __VdfgRegularize_hd87f99a1_0_21 = 0;
    // Body
    __VdfgRegularize_hd87f99a1_0_21 = ((8U & (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)
                                                ? (~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))
                                                : (~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0))) 
                                              << 3U)) 
                                       | ((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)
                                             ? ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                 ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                 : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11))
                                             : ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
                                                && (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18))) 
                                           << 2U) | 
                                          ((2U & (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)
                                                    ? 
                                                   ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                     ? 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                      ? 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                      >> 1U))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                      ? 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                      >> 1U)))
                                                    : 
                                                   ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)
                                                     ? 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                      ? 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                      >> 1U))
                                                     : 
                                                    ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                     >> 1U))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)
                                                ? ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                    ? 
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                     ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                     : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                    : 
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                     ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                     : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))
                                                : ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)
                                                    ? 
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                     ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                     : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                    : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b 
        = ((0x80U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
            ? 0xeU : ((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                       ? 0U : (IData)(__VdfgRegularize_hd87f99a1_0_21)));
    vlSelf->FPU_32bit__DOT__NOR_o_lopd = ((0x10U & 
                                           ((~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1)) 
                                            << 4U)) 
                                          | (IData)(__VdfgRegularize_hd87f99a1_0_21));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
           & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                   ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | ((IData)(
                                                           (0xcU 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                                   & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)))))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                    >> 7U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                   << 3U))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | ((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)) 
              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                 >> 7U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xeU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xdU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (2U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                     | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                        & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                    << 1U)));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((0xbU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (4U & ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                    | ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                         << 1U) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 2U)) & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 2U)))));
    vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
           | (8U & (((0xfffffff8U & (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                      << 1U) | (((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   << 2U)))) 
                     | (((IData)((6U == (6U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                         & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                        << 3U)) | (((IData)((7U == 
                                             (7U & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                    & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 3U))));
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__13(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__13\n"); );
    // Body
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[1U] 
        = ((1U & (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))
            ? (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
               [0U] >> 1U) : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
           [0U]);
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[2U] 
        = ((2U & (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))
            ? (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
               [1U] >> 2U) : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
           [1U]);
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[3U] 
        = ((4U & (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))
            ? (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
               [2U] >> 4U) : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
           [2U]);
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[4U] 
        = ((8U & (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))
            ? (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
               [3U] >> 8U) : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
           [3U]);
    vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[5U] 
        = ((0x10U & (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))
            ? (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
               [4U] >> 0x10U) : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
           [4U]);
}

VL_INLINE_OPT void VFPU_32bit___024root___ico_comb__TOP__14(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___ico_comb__TOP__14\n"); );
    // Body
    vlSelf->o_result = ((4U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                               >> 0x1aU)) | ((2U & 
                                              (((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
                                                & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
                                                   & (((1U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                                             >> 7U)) 
                                                           & (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                              [5U] 
                                                              >> 0x1cU)))
                                                        ? 
                                                       vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                       [5U]
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                                                         ? 
                                                        (0x8000000U 
                                                         | ((0x7000000U 
                                                             & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                                << 0x18U)) 
                                                            | vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                         : 
                                                        vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                        [5U])) 
                                                      >> 5U)))));
}

void VFPU_32bit___024root___eval_triggers__ico(VFPU_32bit___024root* vlSelf);

bool VFPU_32bit___024root___eval_phase__ico(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFPU_32bit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VFPU_32bit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFPU_32bit___024root___eval_act(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_act\n"); );
    // Body
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x201ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x121ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x251ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x3f9ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((0x3f5ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x3f7ULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x3ffULL & vlSelf->__VactTriggered.word(0U))) {
        VFPU_32bit___024root___ico_comb__TOP__14(vlSelf);
    }
}

void VFPU_32bit___024root___eval_nba(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_nba\n"); );
}

void VFPU_32bit___024root___eval_triggers__act(VFPU_32bit___024root* vlSelf);

bool VFPU_32bit___024root___eval_phase__act(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFPU_32bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFPU_32bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFPU_32bit___024root___eval_phase__nba(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFPU_32bit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU_32bit___024root___dump_triggers__ico(VFPU_32bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU_32bit___024root___dump_triggers__nba(VFPU_32bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU_32bit___024root___dump_triggers__act(VFPU_32bit___024root* vlSelf);
#endif  // VL_DEBUG

void VFPU_32bit___024root___eval(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VFPU_32bit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/02_rtl/FPU_32bit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFPU_32bit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFPU_32bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/02_rtl/FPU_32bit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFPU_32bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/02_rtl/FPU_32bit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFPU_32bit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFPU_32bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFPU_32bit___024root___eval_debug_assertions(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_alu_op & 0xfeU))) {
        Verilated::overWidthError("i_alu_op");}
}
#endif  // VL_DEBUG
