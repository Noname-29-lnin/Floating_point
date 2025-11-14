// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_UART_Tx_Data.h for the primary calling header

#include "Vtb_UART_Tx_Data__pch.h"
#include "Vtb_UART_Tx_Data___024root.h"

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_static(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_final(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__stl(Vtb_UART_Tx_Data___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_UART_Tx_Data___024root___eval_phase__stl(Vtb_UART_Tx_Data___024root* vlSelf);

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_settle(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_settle\n"); );
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
            Vtb_UART_Tx_Data___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_UART_Tx_Data___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__stl(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___stl_sequent__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf);

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_stl(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_UART_Tx_Data___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___stl_sequent__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd_n 
        = (3U & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd) 
                 + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done)));
    vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__n_bdr_count 
        = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
            ? 0U : (0xffffffU & ((IData)(1U) + vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)));
    vlSelf->o_w_start = ((~ ((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                             & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
                         & (((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                            | (IData)(vlSelf->UART_SS_detect_start__DOT__w_start_save)));
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start 
        = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done) 
           | (IData)(vlSelf->tb_UART_Tx_Data__DOT__i_tx_en));
    if ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state 
                = ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                             ? 1U : 0U));
        } else {
            if ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))) {
                    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & 0U);
                    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)));
                    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 4U;
            }
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index));
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))));
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                            ? (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                                : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))));
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        if ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 2U;
            } else {
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state 
                = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                    ? 1U : 0U);
        }
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
    }
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_triggers__stl(Vtb_UART_Tx_Data___024root* vlSelf);

VL_ATTR_COLD bool Vtb_UART_Tx_Data___024root___eval_phase__stl(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_UART_Tx_Data___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_UART_Tx_Data___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__act(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_UART_Tx_Data.i_clk or negedge tb_UART_Tx_Data.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_UART_Tx_Data.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__nba(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_UART_Tx_Data.i_clk or negedge tb_UART_Tx_Data.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_UART_Tx_Data.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___ctor_var_reset(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->i_start = VL_RAND_RESET_I(1);
    vlSelf->i_done = VL_RAND_RESET_I(1);
    vlSelf->o_w_start = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__o_stick = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__i_tx_en = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__i_data = VL_RAND_RESET_I(32);
    vlSelf->tb_UART_Tx_Data__DOT__o_tx_data = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__o_tx_done = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count = VL_RAND_RESET_I(24);
    vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__n_bdr_count = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd = VL_RAND_RESET_I(2);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd_n = VL_RAND_RESET_I(2);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data = VL_RAND_RESET_I(8);
    vlSelf->UART_SS_detect_start__DOT__w_start_save = VL_RAND_RESET_I(1);
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
