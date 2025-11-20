// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow 
        = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)) 
           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
              >> 7U));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__2\n"); );
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
    tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgTmp_hd2ca0d93__0 
        = ((~ (IData)((0U != (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_SWAP1_max 
                                       >> 0x10U) ^ 
                                      (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U)))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
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

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 1U) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     << 2U)))) 
                               | (((IData)((6U == (6U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                                  << 3U)) | (((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                             << 3U))) 
                       | ((4U & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                   << 1U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                              << 1U) 
                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 2U))) 
                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                      << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                << 2U)) 
                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                       << 2U)))) | 
                          (2U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                 << 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number 
        = ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U)) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__9\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 3U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__11\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 2U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bae4039__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bc27682__0 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__13\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 5U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__15\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 4U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__16\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bae4039__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bc27682__0 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__17\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 6U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bae4039__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bc27682__0 
        = (IData)((0U == (0xaU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__19\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g 
        = ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                      << 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                  << 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                            << 4U)) 
                                | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                     << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                               << 5U)) 
                                   | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                        << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                  << 5U)) 
                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                         << 6U)))))) 
           | ((0x20U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                         << 2U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                     << 2U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                               << 3U)) 
                                   | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                        << 5U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                  << 4U)) 
                                      | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                           << 5U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                           << 4U)) 
                                         & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                             | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                            << 5U)))))) 
              | ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                            << 1U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                        << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                  << 2U)) 
                                      | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                           << 4U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                           << 3U)) 
                                         | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                              << 4U) 
                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                << 3U)) 
                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                               << 4U)))))) 
                 | ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                  << 1U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                               << 3U) 
                                              & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 << 2U)) 
                                             | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                    << 2U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                   << 3U)))))) 
                    | ((4U & ((0x7ffffffcU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                              >> 1U)) 
                              | ((0x7ffffffcU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g))) 
                                 | (0xfffffffcU & (
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                     << 2U) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       << 1U)) 
                                                   | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                        << 2U) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          << 1U)) 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                         << 2U))))))) 
                       | ((2U & ((0x3ffffffeU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 >> 2U)) 
                                 | ((0x3ffffffeU & 
                                     (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                       >> 2U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 >> 1U))) 
                                    | (0xfffffffeU 
                                       & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                            << 1U) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g)) 
                                          | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                               << 1U) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p)) 
                                             & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))) 
                                                << 1U))))))) 
                          | (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                  >> 2U)) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                     >> 1U)) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_g) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_p) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__DOT__w_c))))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__20\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__21\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x7ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [0U] >> 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x3ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [1U] >> 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                            [2U] >> 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                           [3U] >> 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U] >> 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__26\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h52be7c25__0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bae4039__0) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_hf8322e18__0 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bc27682__0));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__27\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h52be7c25__0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bae4039__0) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_hf8322e18__0 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bc27682__0));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__28\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) 
                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                       >> 3U))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__29\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
            << 0x18U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                          << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                          << 8U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                           << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0U] 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__30\n"); );
    // Body
    vlSelf->__VdfgTmp_he6ef3697__0 = (1U & (IData)(
                                                   ((0U 
                                                     != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                    | (0U 
                                                       != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h52be7c25__0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bae4039__0) 
           & (IData)((0U == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_hf8322e18__0 
        = ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
               >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bc27682__0));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__31\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((0xffffff80U & (((((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 << 1U) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                               | (((IData)(
                                                           (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                   << 7U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 3U))) 
                                              | (((IData)(
                                                          (0x70U 
                                                           == 
                                                           (0x70U 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                  << 7U) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    << 4U))) 
                                             | (((IData)(
                                                         (0x78U 
                                                          == 
                                                          (0x78U 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                 << 7U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                   << 5U))) 
                                            | (((IData)(
                                                        (0x7cU 
                                                         == 
                                                         (0x7cU 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                << 7U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                  << 6U)))) 
                            | (((IData)((0x7eU == (0x7eU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                               << 7U)) | (((IData)(
                                                   (0x7fU 
                                                    == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p))) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                          << 7U))) 
                 | ((0x40U & (((0xffffffc0U & ((((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                        << 2U))) 
                                                 | (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                     << 6U) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                       << 3U))) 
                                                | (((IData)(
                                                            (0x38U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 4U))) 
                                               | (((IData)(
                                                           (0x3cU 
                                                            == 
                                                            (0x3cU 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                   << 6U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 5U)))) 
                               | (((IData)((0x3eU == 
                                            (0x3eU 
                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                  << 6U)) | (((IData)(
                                                      (0x3fU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                             << 6U))) 
                    | ((0x20U & (((0xffffffe0U & ((
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                        << 1U) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                          << 2U))) 
                                                   | (((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                       << 5U) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                         << 3U))) 
                                                  | (((IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x1cU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                      << 5U) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                        << 4U)))) 
                                  | (((IData)((0x1eU 
                                               == (0x1eU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                     << 5U)) | (((IData)(
                                                         (0x1fU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                << 5U))) 
                       | ((0x10U & (((0xfffffff0U & 
                                      ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                         << 1U) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                       | (((IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                           << 4U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                           << 3U)))) 
                                     | (((IData)((0xeU 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                        << 4U)) | (
                                                   ((IData)(
                                                            (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                   << 4U))) 
                          | ((8U & (((0xfffffff8U & 
                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                        << 1U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                     << 2U)))) 
                                     | (((IData)((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)) 
                                        << 3U)) | (
                                                   ((IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)) 
                                                   << 3U))) 
                             | ((4U & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                         << 1U) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                      << 2U))) 
                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                            << 1U) 
                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                              << 2U)) 
                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                             << 2U)))) 
                                | ((2U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                          << 1U)) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__33\n"); );
    // Body
    vlSelf->__VdfgTmp_h090a2097__0 = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow)
                                       ? (0x8000000U 
                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                              << 0x17U) 
                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             << 3U) 
                                                            | (7U 
                                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__0__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                                  >> 1U)))))))))
                                       : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))
                                           ? vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man
                                           : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                          [5U]));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag 
        = (1U & ((~ (IData)(((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)) 
                             | (0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                 & (~ (IData)(vlSelf->__VdfgTmp_he6ef3697__0))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__36\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag 
        = ((~ (IData)(((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)) 
                       | (0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0x1fU : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
                        << 4U) | ((8U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                          & (~ (IData)(vlSelf->__VdfgTmp_he6ef3697__0))) 
                                         << 3U)) | 
                                  ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                      ? (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bae4039__0) 
                                          & (IData)(
                                                    (0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                         & (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))
                                      : ((IData)(vlSelf->__VdfgTmp_he6ef3697__0)
                                          ? (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bae4039__0) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                             & (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum))))
                                          : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bae4039__0) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                             & (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)))))) 
                                    << 2U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h52be7c25__0) 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h52be7c25__0) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                        >> 1U)) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bae4039__0) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelf->__VdfgTmp_he6ef3697__0)
                                                  ? 
                                                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h52be7c25__0) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h52be7c25__0) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bae4039__0) 
                                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                              >> 1U)))))
                                                  : 
                                                 (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h52be7c25__0) 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h52be7c25__0) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bae4039__0) 
                                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                              >> 1U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                     ? 
                                                    (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_hf8322e18__0) 
                                                      & (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_hf8322e18__0) 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                            >> 2U)) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgTmp_h0bc27682__0) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                           | (IData)(
                                                                     (4U 
                                                                      == 
                                                                      (0xcU 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT__sum)))))))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgTmp_he6ef3697__0)
                                                      ? 
                                                     (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_hf8322e18__0) 
                                                       & (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_hf8322e18__0) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 2U)) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgTmp_h0bc27682__0) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (0xcU 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum)))))))
                                                      : 
                                                     (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_hf8322e18__0) 
                                                       & (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum))))) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_hf8322e18__0) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT__sum) 
                                                             >> 2U)) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgTmp_h0bc27682__0) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (0xcU 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT__sum)))))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__37\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit 
        = (1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                 & (vlSelf->__VdfgTmp_h090a2097__0 
                    >> 2U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : (0xffffffU & (vlSelf->__VdfgTmp_h090a2097__0 
                                 >> 4U)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__38\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffeU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [0U] << 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffcU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [1U] << 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [2U] << 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfffff00U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [3U] << 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfff0000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [4U] << 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__39\n"); );
    // Body
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 1U;
    } else if ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT__sum))) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 0U;
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b 
            = (0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position) 
                          >> 4U)));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b 
            = (0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
            >> 4U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__40\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0x7fffffU == (0x7fffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                  << 0x17U) | ((((0x3fffffU == (0x3fffffU 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                << 0x16U) | ((((0x1fffffU 
                                                == 
                                                (0x1fffffU 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                              << 0x15U) 
                                             | ((((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                 << 0x14U) 
                                                | ((((0x7ffffU 
                                                      == 
                                                      (0x7ffffU 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                    << 0x13U) 
                                                   | ((((0x3ffffU 
                                                         == 
                                                         (0x3ffffU 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                        & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                       << 0x12U) 
                                                      | ((((0x1ffffU 
                                                            == 
                                                            (0x1ffffU 
                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                          << 0x11U) 
                                                         | ((((0xffffU 
                                                               == 
                                                               (0xffffU 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                             << 0x10U) 
                                                            | ((((0x7fffU 
                                                                  == 
                                                                  (0x7fffU 
                                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                << 0xfU) 
                                                               | ((((0x3fffU 
                                                                     == 
                                                                     (0x3fffU 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                   << 0xeU) 
                                                                  | ((((0x1fffU 
                                                                        == 
                                                                        (0x1fffU 
                                                                         & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                      << 0xdU) 
                                                                     | ((((0xfffU 
                                                                           == 
                                                                           (0xfffU 
                                                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                         << 0xcU) 
                                                                        | ((((0x7ffU 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                            << 0xbU) 
                                                                           | ((((0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                               << 0xaU) 
                                                                              | ((((0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 9U) 
                                                                                | ((((0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 8U) 
                                                                                | ((((0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 7U) 
                                                                                | ((((0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 6U) 
                                                                                | ((((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 5U) 
                                                                                | ((((0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 4U) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 3U) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp)) 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
                                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry) 
                                                                                << 1U)) 
                                                                                | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                                                & (vlSelf->__VdfgTmp_h090a2097__0 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                                                                                & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                                                & ((vlSelf->__VdfgTmp_h090a2097__0 
                                                                                >> 1U) 
                                                                                | vlSelf->__VdfgTmp_h090a2097__0)))))))))))))))))))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_ROUNDING_man 
        = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp 
           ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__41(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__41\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
              & (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__42(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__42\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__43(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__43\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgTmp_h1c6e9cb3__0) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__44(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__44\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0x7fU == (0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                  << 7U) | ((((0x3fU == (0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                             << 6U) | ((((0x1fU == 
                                          (0x1fU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                        << 5U) | ((
                                                   ((0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                   << 4U) 
                                                  | ((((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                      << 3U) 
                                                     | ((((3U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result))) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)) 
                                                               << 1U)) 
                                                           | ((0xffffffU 
                                                               == vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_man_temp) 
                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_carry))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hd789dadf__0) 
            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0) 
               | (IData)((((0x7f800000U == (0x7f800000U 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0)) 
                          & (~ (IData)((0U != (0x7fffffU 
                                               & vlSelf->tb_FPU_unit__DOT__i_32_a))))))))
            ? 0xffU : ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                       ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)));
}

void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf);
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
void Vtb_FPU_unit___024root___ico_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___ico_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_act(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_act\n"); );
    // Body
    if ((0x38000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x38000000200000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x38000000400000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x38000002000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x38000001000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__17(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__19(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__20(vlSelf);
    }
    if ((0x38000000480000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x38000000500000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x38000000420000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x38000000440000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x38000000402000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x38000000404000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x38000000408000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x38000000410000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x38000000400200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x38000000400400ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x38000000400800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x38000000401000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x38000000400080ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x38000000400100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x38000000400040ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x38000002800000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x38000001400000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x1f8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__21(vlSelf);
    }
    if ((0x2001000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__22(vlSelf);
    }
    if ((0x4004000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__23(vlSelf);
    }
    if ((0x204000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x38000000450000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x38000000405000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x38000000600100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x38000000555500ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x38000000400500ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x38000000600040ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x6005400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__25(vlSelf);
    }
    if ((0x38000000755504ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x38000000405500ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x7fffc00000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___ico_comb__TOP__26(vlSelf);
    }
    if ((0x38000000455500ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x38000000755504ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x38000000455504ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x38000000655500ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x38000000755506ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__40(vlSelf);
    }
    if ((0x38000000655520ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__41(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x38000000655510ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__42(vlSelf);
    }
    if ((0x38000000655528ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__43(vlSelf);
    }
    if ((0x38000000755515ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__44(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___nba_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h2aa8b8e8__0 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0;
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_ha6ffb882__0 = 0;
    // Body
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
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0 
        = (IData)((0x7f800000U == (0xff800000U & vlSelf->tb_FPU_unit__DOT__i_32_a)));
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
    tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h040f4345__0 
        = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0 
        = ((0U != (0x7fffffU & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
           & (IData)(tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hceb24c2d__0));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_exponent_result 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_hd789dadf__0) 
            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h05bafb70__0) 
               | (IData)((((0x7f800000U == (0x7f800000U 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)) 
                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__PSC_UNIT__DOT____VdfgTmp_h450ca397__0)) 
                          & (~ (IData)((0U != (0x7fffffU 
                                               & vlSelf->tb_FPU_unit__DOT__i_32_a))))))))
            ? 0xffU : ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXP_ADJUST_result) 
                       ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ROUNDING__DOT__w_carry)));
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
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___nba_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_FPU_unit__DOT__i_rst_n) {
        vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = 
            vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom
            [vlSelf->tb_FPU_unit__DOT__w_i_addr];
        vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = 
            vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom
            [vlSelf->tb_FPU_unit__DOT__w_i_addr];
    } else {
        vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b = 0U;
        vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a = 0U;
    }
}

void Vtb_FPU_unit___024root___eval_nba(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_nba\n"); );
    // Body
    if ((0x38000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_FPU_unit___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_FPU_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_FPU_unit___024root___timing_resume(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_resume\n"); );
    // Body
    if ((0x8000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb41ccb8d__0.resume("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((0x20000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb41ccc4c__0.resume("@(negedge tb_FPU_unit.i_clk)");
    }
    if ((0x10000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_FPU_unit___024root___timing_commit(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_commit\n"); );
    // Body
    if ((! (0x8000000000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb41ccb8d__0.commit("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((! (0x20000000000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb41ccc4c__0.commit("@(negedge tb_FPU_unit.i_clk)");
    }
}

void Vtb_FPU_unit___024root___eval_triggers__act(Vtb_FPU_unit___024root* vlSelf);

bool Vtb_FPU_unit___024root___eval_phase__act(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<54> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__act(vlSelf);
    Vtb_FPU_unit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_FPU_unit___024root___timing_resume(vlSelf);
        Vtb_FPU_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_FPU_unit___024root___eval_phase__nba(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_FPU_unit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__ico(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_FPU_unit___024root___eval_phase__ico(Vtb_FPU_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_FPU_unit___024root___eval(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval\n"); );
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
            Vtb_FPU_unit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../TopModule/../../02_rlt/COMP_2bit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_FPU_unit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../TopModule/../../02_rlt/COMP_2bit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_FPU_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../TopModule/../../02_rlt/COMP_2bit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_FPU_unit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_FPU_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_FPU_unit___024root___eval_debug_assertions(Vtb_FPU_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->COMP_2bit__02Ei_data_a 
                     & 0xfcU))) {
        Verilated::overWidthError("COMP_2bit.i_data_a");}
    if (VL_UNLIKELY((vlSelf->COMP_2bit__02Ei_data_b 
                     & 0xfcU))) {
        Verilated::overWidthError("COMP_2bit.i_data_b");}
    if (VL_UNLIKELY((vlSelf->i_data & 0xf0U))) {
        Verilated::overWidthError("i_data");}
    if (VL_UNLIKELY((vlSelf->CLA_24bit__02Ei_carry 
                     & 0xfeU))) {
        Verilated::overWidthError("CLA_24bit.i_carry");}
    if (VL_UNLIKELY((vlSelf->CLA_24bit__02Ei_data_a 
                     & 0xff000000U))) {
        Verilated::overWidthError("CLA_24bit.i_data_a");}
    if (VL_UNLIKELY((vlSelf->CLA_24bit__02Ei_data_b 
                     & 0xff000000U))) {
        Verilated::overWidthError("CLA_24bit.i_data_b");}
    if (VL_UNLIKELY((vlSelf->CKSA_28bit__02Ei_carry 
                     & 0xfeU))) {
        Verilated::overWidthError("CKSA_28bit.i_carry");}
    if (VL_UNLIKELY((vlSelf->CKSA_28bit__02Ei_data_a 
                     & 0xf0000000U))) {
        Verilated::overWidthError("CKSA_28bit.i_data_a");}
    if (VL_UNLIKELY((vlSelf->CKSA_28bit__02Ei_data_b 
                     & 0xf0000000U))) {
        Verilated::overWidthError("CKSA_28bit.i_data_b");}
}
#endif  // VL_DEBUG
