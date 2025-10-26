// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit_CLA_4bit.h"
#include "Vtb_FPU_unit__Syms.h"

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1170]);
    if ((1U & (~ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = 1U;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min))));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 1U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 1U)) 
                                         << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 2U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 2U)) 
                                         << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 3U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 3U)) 
                                         << 3U)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                  & (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min))));
    vlSelf->__PVT__w_p = (0xfU & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                  ^ (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min))));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->__PVT__w_c = (1U | (IData)(vlSelf->__PVT__w_c));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1170]);
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 4U)) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                            >> 4U))));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 5U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 5U)) 
                                         << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 6U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 6U)) 
                                         << 2U)));
    }
    if ((1U ^ (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                             >> 7U)) 
                                         << 3U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((IData)((((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  >> 7U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    vlSelf->__PVT__w_g = (0xfU & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                   >> 4U) & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                                >> 4U))));
    vlSelf->__PVT__w_p = (0xfU & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                   >> 4U) ^ (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                                >> 4U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    vlSelf->__PVT__w_g = (0xfU & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                  & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->__PVT__w_p = (0xfU & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                  ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__2\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 4U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 4U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 4U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 1U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 1U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 1U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 8U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 8U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 8U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 2U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 2U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 2U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0xcU)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0xcU));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0xcU));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 3U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 3U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 3U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x10U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x10U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x10U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 4U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 4U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x14U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x14U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x14U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 5U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 5U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 5U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                         >> 0x18U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x18U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   ^ vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                                  >> 0x18U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 6U)));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                >> 6U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                        >> 6U));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1170]);
    if ((1U & (~ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = (1U | (IData)(vlSelf->__Vtogcov__a));
    }
    if ((8U & (IData)(vlSelf->__Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = (7U & (IData)(vlSelf->__Vtogcov__a));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if (((0xfU == (0xfU & (7U ^ (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))) 
         ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (0xfU & (7U 
                                                   ^ 
                                                   (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))));
    }
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 1U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 1U)) 
                                         << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 2U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 2U)) 
                                         << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 3U)) ^ ((IData)(vlSelf->__Vtogcov__b) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 3U)) 
                                         << 3U)));
    }
    vlSelf->__PVT__w_c = (1U | (IData)(vlSelf->__PVT__w_c));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
                                    | ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                         >> 1U)) | (IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))) 
                                    << 2U) | (0xfffffffcU 
                                              & ((((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                   << 1U) 
                                                  & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                     << 2U)) 
                                                 & ((IData)(vlSelf->__PVT__w_c) 
                                                    << 2U))))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                          >> 2U)) | (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))) 
                                     | (IData)((6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))) 
                                    | ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 3U)));
    vlSelf->o_g = (1U & ((IData)((0U == (0xcU & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))) 
                         | ((IData)((4U == (0xcU & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))) 
                            & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                   >> 1U)) | (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = (0xfU & (7U ^ ((~ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
                                 ^ (IData)(vlSelf->__PVT__w_c))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1170]);
    if ((1U & (~ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = (1U | (IData)(vlSelf->__Vtogcov__a));
    }
    if ((2U & (IData)(vlSelf->__Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = (0xdU & (IData)(vlSelf->__Vtogcov__a));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if (((0xfU == (0xfU & (1U ^ (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                    >> 4U))))) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (0xfU & (1U 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                     >> 4U)))));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                           >> 4U)));
    }
    if ((1U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 4U)) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                            >> 4U))));
    }
    if ((1U & (~ ((IData)(vlSelf->__Vtogcov__b) >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 5U)) 
                                         << 1U)));
    }
    if ((1U & (~ ((IData)(vlSelf->__Vtogcov__b) >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 6U)) 
                                         << 2U)));
    }
    if ((1U & (1U ^ ((IData)(vlSelf->__Vtogcov__b) 
                     >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 7U)) 
                                         << 3U)));
    }
    vlSelf->o_g = (1U & (((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                              >> 7U)) & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                            >> 6U))) 
                         & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                               >> 4U))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C;
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                        >> 4U)) << 1U) 
                                   | (0x1ffffffeU & 
                                      (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__w_c) 
                                                  << 1U))))));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & (((1U & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                              >> 4U))) 
                                    | ((IData)(((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                >> 4U)) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 2U)));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((1U & (~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                              >> 4U))) 
                                    | ((IData)(((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                >> 4U)) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 3U)));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = (0xfU & (1U ^ ((~ ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                     >> 4U)) ^ (IData)(vlSelf->__PVT__w_c))));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__2\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    }
    vlSelf->__PVT__w_g = ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                          & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b));
    vlSelf->__PVT__w_p = (0xfU & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                  ^ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((1U & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
    if ((IData)((((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  >> 7U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b) 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    }
    vlSelf->__PVT__w_g = (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                           >> 4U) & (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b));
    vlSelf->__PVT__w_p = (0xfU & (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                   >> 4U) ^ (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->o_g = (1U & (((IData)(vlSelf->__PVT__w_g) 
                          >> 3U) | ((((IData)(vlSelf->__PVT__w_p) 
                                      >> 3U) & ((IData)(vlSelf->__PVT__w_g) 
                                                >> 2U)) 
                                    | ((IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->__PVT__w_p)))) 
                                       & (((IData)(vlSelf->__PVT__w_g) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->__PVT__w_p) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__w_g)))))));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__2\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    vlSelf->__PVT__w_c = ((0xdU & (IData)(vlSelf->__PVT__w_c)) 
                          | (2U & (((IData)(vlSelf->__PVT__w_g) 
                                    | ((IData)(vlSelf->__PVT__w_p) 
                                       & (IData)(vlSelf->__PVT__w_c))) 
                                   << 1U)));
    vlSelf->__PVT__w_c = ((0xbU & (IData)(vlSelf->__PVT__w_c)) 
                          | (4U & ((((IData)(vlSelf->__PVT__w_g) 
                                     << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                << 1U) 
                                               & ((IData)(vlSelf->__PVT__w_g) 
                                                  << 2U))) 
                                   | ((((IData)(vlSelf->__PVT__w_p) 
                                        << 1U) & ((IData)(vlSelf->__PVT__w_p) 
                                                  << 2U)) 
                                      & ((IData)(vlSelf->__PVT__w_c) 
                                         << 2U)))));
    vlSelf->__PVT__w_c = ((7U & (IData)(vlSelf->__PVT__w_c)) 
                          | (8U & (((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__w_g) 
                                       << 1U) | (((IData)(vlSelf->__PVT__w_p) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__w_g) 
                                                    << 2U)))) 
                                    | (((IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__w_p)))) 
                                        & (IData)(vlSelf->__PVT__w_g)) 
                                       << 3U)) | (((IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__PVT__w_p)))) 
                                                   & (IData)(vlSelf->__PVT__w_c)) 
                                                  << 3U))));
    if ((1U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}
