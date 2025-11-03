// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit_COMP_4bit.h"
#include "Vtb_COMP_28bit__Syms.h"

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a));
    }
    if ((2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a));
    }
    if ((4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a));
    }
    if ((8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a));
    }
    if ((1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b));
    }
    if ((2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b));
    }
    if ((4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b));
    }
    if ((8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                       ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b))))));
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                             >> 1U) 
                                            | vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)) 
                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                       | (((~ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a) 
                                           & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                               >> 1U) 
                                              & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 1U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 1U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xcU 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 2U)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 2U)) 
                                            & (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 3U)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 3U)))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 2U))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 4U)));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 4U))))));
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x30U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 4U)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 4U)) 
                                           & (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 5U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 5U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc0U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 6U)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 7U)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 7U)))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 6U))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 8U)));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 8U))))));
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x300U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 8U)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 8U)) 
                                           & (IData)(
                                                     (0x300U 
                                                      == 
                                                      (0x300U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 9U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 9U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 0xaU)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xaU)) 
                                            & (IData)(
                                                      (0xc00U 
                                                       == 
                                                       (0xc00U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 0xbU)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 0xbU)))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 0xaU))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0xcU)));
    }
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3000U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 0xcU)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 0xcU)) 
                                           & (IData)(
                                                     (0x3000U 
                                                      == 
                                                      (0x3000U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 0xdU)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0xdU)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 0xeU)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0xeU)) 
                                            & (IData)(
                                                      (0xc000U 
                                                       == 
                                                       (0xc000U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 0xfU)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 0xfU)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 0xcU))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 0xeU))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x10U)));
    }
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x30000U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 0x10U)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 0x10U)) 
                                           & (IData)(
                                                     (0x30000U 
                                                      == 
                                                      (0x30000U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 0x11U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x11U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc0000U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 0x12U)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x12U)) 
                                            & (IData)(
                                                      (0xc0000U 
                                                       == 
                                                       (0xc0000U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 0x13U)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 0x13U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 0x10U))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 0x12U))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x14U)));
    }
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x300000U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 0x14U)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 0x14U)) 
                                           & (IData)(
                                                     (0x300000U 
                                                      == 
                                                      (0x300000U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 0x15U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x15U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00000U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 0x16U)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x16U)) 
                                            & (IData)(
                                                      (0xc00000U 
                                                       == 
                                                       (0xc00000U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 0x17U)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 0x17U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 0x14U))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 0x16U))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(Vtb_COMP_28bit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x18U)));
    }
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3000000U 
                                                     & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                        & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                           >> 0x18U)) 
                                       | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                               >> 0x18U)) 
                                           & (IData)(
                                                     (0x3000000U 
                                                      == 
                                                      (0x3000000U 
                                                       & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                 >> 0x19U)) 
                                             & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                >> 0x19U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000U 
                                                      & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a)))) 
                                         & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                            >> 0x1aU)) 
                                        | (((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                >> 0x1aU)) 
                                            & (IData)(
                                                      (0xc000000U 
                                                       == 
                                                       (0xc000000U 
                                                        & vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                  >> 0x1bU)) 
                                              & (vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b 
                                                 >> 0x1bU)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                        ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                       >> 0x18U))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_a 
                                                         ^ vlSymsp->TOP.tb_COMP_28bit__DOT__i_data_b) 
                                                        >> 0x1aU))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}
