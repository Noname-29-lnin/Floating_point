// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit_COMP_4bit.h"
#include "Vtb_FPU_unit__Syms.h"

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x17U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x18U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x17U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x18U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                        ^ vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b) 
                                                       >> 0x17U))))));
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1800000U 
                                                     & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a)))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                           >> 0x17U)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                               >> 0x17U)) 
                                           & (IData)(
                                                     (0x1800000U 
                                                      == 
                                                      (0x1800000U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                 >> 0x18U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x18U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x6000000U 
                                                      & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a)))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                            >> 0x19U)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x19U)) 
                                            & (IData)(
                                                      (0x6000000U 
                                                       == 
                                                       (0x6000000U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                  >> 0x1aU)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                 >> 0x1aU)))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                         ^ vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b) 
                                                        >> 0x19U))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x17U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x18U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x17U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x18U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x17U)));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                        ^ vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b) 
                                                       >> 0x17U))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1bU) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1cU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1bU) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1cU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                        ^ vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b) 
                                                       >> 0x1bU))))));
    vlSelf->__PVT__w_less_low = (1U & (((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a)))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                           >> 0x1bU)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                               >> 0x1bU)) 
                                           & (IData)(
                                                     (0x18000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                 >> 0x1cU)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1cU)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x60000000U 
                                                      & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a)))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                            >> 0x1dU)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1dU)) 
                                            & (IData)(
                                                      (0x60000000U 
                                                       == 
                                                       (0x60000000U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                  >> 0x1eU)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                 >> 0x1eU)))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                         ^ vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b) 
                                                        >> 0x1dU))))));
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1bU) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1cU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1bU) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1cU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__i_floating_b 
                                                >> 0x1bU)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4\n"); );
    // Body
    if ((1U & (IData)(vlSelf->__Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = (0xeU & (IData)(vlSelf->__Vtogcov__i_data_b));
    }
    vlSelf->o_less = 0U;
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0\n"); );
    // Body
    vlSelf->o_equal = (1U & ((~ (IData)((0U != (3U 
                                                & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 2U))))) 
                             & (~ (IData)((0U != (3U 
                                                  & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U]))))));
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((~ (IData)((0U != (3U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U])))) ^ (IData)(vlSelf->__Vtogcov__w_equal_low)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = (1U & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U])))));
    }
    if ((1U & ((~ (IData)((0U != (3U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 2U))))) 
               ^ (IData)(vlSelf->__Vtogcov__w_equal_high)))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = (1U & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 2U))))));
    }
    if ((1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 5U) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 4U))) 
                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 4U)) 
                                           & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 1U) 
                                              & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 5U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 1U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 7U) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 6U))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 2U)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 6U)) 
                                            & (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 7U)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 3U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 4U) 
                                                       ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 6U) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 2U)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 4U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 5U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                               >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 6U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                               >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 7U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 4U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 9U) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 8U))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 4U)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 8U)) 
                                           & (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 9U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 5U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xbU) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xaU))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 6U)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xaU)) 
                                            & (IData)(
                                                      (0xc0U 
                                                       == 
                                                       (0xc0U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0xbU)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 7U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 8U) 
                                                       ^ 
                                                       (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 4U)))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0xaU) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 6U)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 8U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 9U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                               >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                 >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                 >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 8U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xdU) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xcU))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 8U)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xcU)) 
                                           & (IData)(
                                                     (0x300U 
                                                      == 
                                                      (0x300U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xdU)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 9U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xfU) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xeU))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xaU)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xeU)) 
                                            & (IData)(
                                                      (0xc00U 
                                                       == 
                                                       (0xc00U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0xfU)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xbU)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0xcU) 
                                                       ^ 
                                                       (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 8U)))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0xeU) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0xaU)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                 >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                 >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                 >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xcU)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x11U) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x10U))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xcU)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x10U)) 
                                           & (IData)(
                                                     (0x3000U 
                                                      == 
                                                      (0x3000U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x11U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xdU)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x13U) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x12U))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xeU)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x12U)) 
                                            & (IData)(
                                                      (0xc000U 
                                                       == 
                                                       (0xc000U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x13U)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xfU)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x10U) 
                                                       ^ 
                                                       (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 0xcU)))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0x12U) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0xeU)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x10U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x15U) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x14U))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x10U)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x14U)) 
                                           & (IData)(
                                                     (0x30000U 
                                                      == 
                                                      (0x30000U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x15U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x11U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x17U) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x16U))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x12U)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x16U)) 
                                            & (IData)(
                                                      (0xc0000U 
                                                       == 
                                                       (0xc0000U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x17U)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x13U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x14U) 
                                                       ^ 
                                                       (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 0x10U)))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0x16U) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0x12U)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__i_data_b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__i_data_b = ((7U & (IData)(vlSelf->__Vtogcov__i_data_b)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x14U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->__PVT__w_less_low = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x19U) 
                                            | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x18U))) 
                                        & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x14U)) 
                                       | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x18U)) 
                                           & (IData)(
                                                     (0x300000U 
                                                      == 
                                                      (0x300000U 
                                                       & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x19U)) 
                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x15U)))));
    vlSelf->__PVT__w_less_high = (1U & (((~ ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1bU) 
                                             | (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1aU))) 
                                         & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x16U)) 
                                        | (((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1aU)) 
                                            & (IData)(
                                                      (0xc00000U 
                                                       == 
                                                       (0xc00000U 
                                                        & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                           | ((~ (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x1bU)) 
                                              & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x17U)))));
    vlSelf->__PVT__w_equal_low = (1U & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x18U) 
                                                       ^ 
                                                       (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 0x14U)))))));
    vlSelf->__PVT__w_equal_high = (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0x1aU) 
                                                        ^ 
                                                        (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0x16U)))))));
    if (((IData)(vlSelf->__PVT__w_less_low) ^ (IData)(vlSelf->__Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_low = vlSelf->__PVT__w_less_low;
    }
    if (((IData)(vlSelf->__PVT__w_less_high) ^ (IData)(vlSelf->__Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->__Vtogcov__w_less_high = vlSelf->__PVT__w_less_high;
    }
    if (((IData)(vlSelf->__PVT__w_equal_low) ^ (IData)(vlSelf->__Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = vlSelf->__PVT__w_equal_low;
    }
    if (((IData)(vlSelf->__PVT__w_equal_high) ^ (IData)(vlSelf->__Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = vlSelf->__PVT__w_equal_high;
    }
    vlSelf->o_less = ((IData)(vlSelf->__PVT__w_less_high) 
                      | ((IData)(vlSelf->__PVT__w_equal_high) 
                         & (IData)(vlSelf->__PVT__w_less_low)));
    vlSelf->o_equal = ((IData)(vlSelf->__PVT__w_equal_high) 
                       & (IData)(vlSelf->__PVT__w_equal_low));
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__2\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                [5U] >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__i_data_a) 
                                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x18U)));
    }
}
