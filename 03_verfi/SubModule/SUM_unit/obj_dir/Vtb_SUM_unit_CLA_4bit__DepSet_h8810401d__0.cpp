// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SUM_unit.h for the primary calling header

#include "Vtb_SUM_unit__pch.h"
#include "Vtb_SUM_unit_CLA_4bit.h"
#include "Vtb_SUM_unit__Syms.h"

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[172]);
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__i_carry) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_SUM_unit__DOT__i_carry;
    }
    if ((1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    vlSelf->__PVT__w_g = (0xfU & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                  & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    vlSelf->__PVT__w_p = (0xfU & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                  ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->__Vtogcov__w_p = ((7U & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_p)));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_SUM_unit__DOT__i_carry));
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if (((IData)(vlSelf->o_g) ^ (IData)(vlSelf->__Vtogcov__o_g))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__i_carry) 
         ^ (IData)(vlSelf->__Vtogcov__cin))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = vlSymsp->TOP.tb_SUM_unit__DOT__i_carry;
    }
    if ((1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
               ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a));
    }
    if ((1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    if ((8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
               ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (IData)(vlSymsp->TOP.tb_SUM_unit__DOT__i_carry));
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 4U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 4U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 1U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 1U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 4U)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 8U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 8U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 2U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 2U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 8U)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0xcU));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0xcU));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 3U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 3U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x10U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x10U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 4U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x14U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x14U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 5U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 5U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    vlSelf->__PVT__w_g = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   & vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x18U));
    vlSelf->__PVT__w_p = (0xfU & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                   ^ vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b) 
                                  >> 0x18U));
    if ((1U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->__Vtogcov__w_g = ((0xeU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->__Vtogcov__w_g = ((0xdU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->__Vtogcov__w_g = ((0xbU & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_g) ^ (IData)(vlSelf->__Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->__Vtogcov__w_g = ((7U & (IData)(vlSelf->__Vtogcov__w_g)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_g)));
    }
    if (((0xfU == (IData)(vlSelf->__PVT__w_p)) ^ (IData)(vlSelf->__Vtogcov__o_p))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->__Vtogcov__o_p = (0xfU == (IData)(vlSelf->__PVT__w_p));
    }
    if ((1U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->__Vtogcov__w_p = ((0xeU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->__Vtogcov__w_p = ((0xdU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->__Vtogcov__w_p = ((0xbU & (IData)(vlSelf->__Vtogcov__w_p)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->__Vtogcov__o_g = vlSelf->o_g;
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                >> 6U) ^ (IData)(vlSelf->__Vtogcov__cin)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->__Vtogcov__cin = (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                        >> 6U));
    }
    vlSelf->__PVT__w_c = ((0xeU & (IData)(vlSelf->__PVT__w_c)) 
                          | (1U & ((IData)(vlSymsp->TOP.tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
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
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->__Vtogcov__w_c = ((0xeU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (1U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->__Vtogcov__w_c = ((0xdU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (2U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->__Vtogcov__w_c = ((0xbU & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (4U & (IData)(vlSelf->__PVT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__w_c) ^ (IData)(vlSelf->__Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->__Vtogcov__w_c = ((7U & (IData)(vlSelf->__Vtogcov__w_c)) 
                                  | (8U & (IData)(vlSelf->__PVT__w_c)));
    }
    vlSelf->sum = ((IData)(vlSelf->__PVT__w_p) ^ (IData)(vlSelf->__PVT__w_c));
    if ((1U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->__Vtogcov__sum = ((0xeU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (1U & (IData)(vlSelf->sum)));
    }
    if ((2U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->__Vtogcov__sum = ((0xdU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (2U & (IData)(vlSelf->sum)));
    }
    if ((4U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->__Vtogcov__sum = ((0xbU & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (4U & (IData)(vlSelf->sum)));
    }
    if ((8U & ((IData)(vlSelf->sum) ^ (IData)(vlSelf->__Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->__Vtogcov__sum = ((7U & (IData)(vlSelf->__Vtogcov__sum)) 
                                  | (8U & (IData)(vlSelf->sum)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Body
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->__Vtogcov__a = ((0xeU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->__Vtogcov__a = ((0xdU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->__Vtogcov__a = ((0xbU & (IData)(vlSelf->__Vtogcov__a)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__a) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->__Vtogcov__a = ((7U & (IData)(vlSelf->__Vtogcov__a)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->__Vtogcov__b = ((0xeU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (1U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->__Vtogcov__b = ((0xdU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (2U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->__Vtogcov__b = ((0xbU & (IData)(vlSelf->__Vtogcov__b)) 
                                | (4U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
    if ((IData)(((vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                  >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__b) 
                               >> 3U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->__Vtogcov__b = ((7U & (IData)(vlSelf->__Vtogcov__b)) 
                                | (8U & (vlSymsp->TOP.tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U)));
    }
}
