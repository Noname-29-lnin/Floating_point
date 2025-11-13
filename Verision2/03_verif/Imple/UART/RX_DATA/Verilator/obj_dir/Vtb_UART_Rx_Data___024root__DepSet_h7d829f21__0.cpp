// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_UART_Rx_Data.h for the primary calling header

#include "Vtb_UART_Rx_Data__pch.h"
#include "Vtb_UART_Rx_Data___024root.h"

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_initial__TOP(Vtb_UART_Rx_Data___024root* vlSelf);
VlCoroutine Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__0(Vtb_UART_Rx_Data___024root* vlSelf);
VlCoroutine Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__1(Vtb_UART_Rx_Data___024root* vlSelf);

void Vtb_UART_Rx_Data___024root___eval_initial(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_initial\n"); );
    // Body
    Vtb_UART_Rx_Data___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_clk__0 
        = vlSelf->tb_UART_Rx_Data__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_rst_n__0 
        = vlSelf->tb_UART_Rx_Data__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_clk__0 
        = vlSelf->UART_Rx_Test__02Ei_clk;
    vlSelf->__Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_rst_n__0 
        = vlSelf->UART_Rx_Test__02Ei_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_clk__0 
        = vlSelf->UART_Tx_Data__02Ei_clk;
    vlSelf->__Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_rst_n__0 
        = vlSelf->UART_Tx_Data__02Ei_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__0(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_UART_Rx_Data__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                           25);
        vlSelf->tb_UART_Rx_Data__DOT__i_clk = (1U & 
                                               (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__1(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_UART_Rx_Data__DOT__i_rst_n = 0U;
    vlSelf->tb_UART_Rx_Data__DOT__i_sel_data = 0U;
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                       75);
    vlSelf->tb_UART_Rx_Data__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                       77);
    vlSelf->tb_UART_Rx_Data__DOT__i_sel_data = 0U;
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = 1U;
    co_await vlSelf->__VtrigSched_h2c5f5118__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_UART_Rx_Data.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                                       80);
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                       82);
    co_await vlSelf->__VtrigSched_h2c5f5118__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_UART_Rx_Data.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                                       84);
    vlSelf->tb_UART_Rx_Data__DOT__i_sel_data = 1U;
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = 1U;
    co_await vlSelf->__VtrigSched_h2c5f5118__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_UART_Rx_Data.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                                       87);
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 
                                       89);
}

void Vtb_UART_Rx_Data___024root___ico_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf);

void Vtb_UART_Rx_Data___024root___eval_ico(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___ico_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                             | (IData)(vlSelf->i_tx_en))
                             ? 1U : 0U));
        } else if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 6U;
            } else {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
            }
        } else if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                             ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                             : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 4U;
        }
    } else if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 2U;
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                             ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                             : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 1U;
        }
    } else {
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
            = (0x1fU & 0U);
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
            = (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                | (IData)(vlSelf->i_tx_en)) ? 1U : 0U);
    }
    if ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 6U;
            } else {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
            }
        } else if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                             ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                             : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 4U;
        }
    } else if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = ((IData)(vlSelf->i_rx_data) ? 0U : 2U);
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                             ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                             : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 1U;
        }
    } else {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
            = (0x1fU & 0U);
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
            = ((((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                 & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                & (IData)(vlSelf->i_rx_en)) ? 1U : 0U);
    }
}

void Vtb_UART_Rx_Data___024root___eval_triggers__ico(Vtb_UART_Rx_Data___024root* vlSelf);

bool Vtb_UART_Rx_Data___024root___eval_phase__ico(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_UART_Rx_Data___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_UART_Rx_Data___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_UART_Rx_Data___024root___act_comb__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf);

void Vtb_UART_Rx_Data___024root___eval_act(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_act\n"); );
    // Body
    if ((0x30ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___act_comb__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state 
        = ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
            ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                             ? 1U : 0U)) : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 6U
                                                 : 5U)
                                             : ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 5U
                                                 : 4U)))
            : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : (((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)) 
                             & (7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)))
                             ? 4U : 2U)) : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 2U
                                                 : 1U)
                                             : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                                                 ? 1U
                                                 : 0U))));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state 
        = ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
            ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                ? 0U : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                         ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                             ? 6U : 5U) : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                            ? 5U : 4U)))
            : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                    ? 0U : (((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)) 
                             & (7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)))
                             ? 4U : 2U)) : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                             ? ((7U 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                 ? 
                                                ((IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data)
                                                  ? 0U
                                                  : 2U)
                                                 : 1U)
                                             : ((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                                                  & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                                                 & (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en))
                                                 ? 1U
                                                 : 0U))));
}

void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf);
void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__1(Vtb_UART_Rx_Data___024root* vlSelf);
void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__2(Vtb_UART_Rx_Data___024root* vlSelf);
void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__3(Vtb_UART_Rx_Data___024root* vlSelf);

void Vtb_UART_Rx_Data___024root___eval_nba(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x31ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__UART_Tx_Data__DOT__mem__v0;
    __Vdlyvval__UART_Tx_Data__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__UART_Tx_Data__DOT__mem__v0;
    __Vdlyvset__UART_Tx_Data__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__UART_Tx_Data__DOT__mem__v1;
    __Vdlyvval__UART_Tx_Data__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__UART_Tx_Data__DOT__mem__v2;
    __Vdlyvval__UART_Tx_Data__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__UART_Tx_Data__DOT__mem__v3;
    __Vdlyvval__UART_Tx_Data__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__UART_Tx_Data__DOT__mem__v4;
    __Vdlyvset__UART_Tx_Data__DOT__mem__v4 = 0;
    // Body
    __Vdlyvset__UART_Tx_Data__DOT__mem__v0 = 0U;
    __Vdlyvset__UART_Tx_Data__DOT__mem__v4 = 0U;
    vlSelf->o_tx_done = ((IData)(vlSelf->UART_Tx_Data__02Ei_rst_n) 
                         & (IData)((3U == (IData)(vlSelf->UART_Tx_Data__DOT__ptr_rd))));
    vlSelf->UART_Tx_Data__DOT__w_tx_done = ((IData)(vlSelf->UART_Tx_Data__02Ei_rst_n) 
                                            && (IData)(
                                                       (6U 
                                                        == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))));
    vlSelf->o_tx_data = ((1U & (~ (IData)(vlSelf->UART_Tx_Data__02Ei_rst_n))) 
                         || ((1U & ((IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state) 
                                    >> 2U)) || (1U 
                                                & ((2U 
                                                    & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state)) 
                                                    || (1U 
                                                        & (vlSelf->UART_Tx_Data__DOT__mem
                                                           [vlSelf->UART_Tx_Data__DOT__ptr_rd] 
                                                           >> 
                                                           (3U 
                                                            & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)))))
                                                    : 
                                                   (~ (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))))));
    if (vlSelf->UART_Tx_Data__02Ei_rst_n) {
        if (vlSelf->i_tx_en) {
            __Vdlyvval__UART_Tx_Data__DOT__mem__v0 
                = (0xffU & vlSelf->i_data);
            __Vdlyvset__UART_Tx_Data__DOT__mem__v0 = 1U;
            __Vdlyvval__UART_Tx_Data__DOT__mem__v1 
                = (0xffU & (vlSelf->i_data >> 8U));
            __Vdlyvval__UART_Tx_Data__DOT__mem__v2 
                = (0xffU & (vlSelf->i_data >> 0x10U));
            __Vdlyvval__UART_Tx_Data__DOT__mem__v3 
                = (vlSelf->i_data >> 0x18U);
        }
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count 
            = vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count;
        vlSelf->UART_Tx_Data__DOT__ptr_rd = vlSelf->UART_Tx_Data__DOT__ptr_rd_n;
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index 
            = vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index;
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state 
            = vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state;
    } else {
        __Vdlyvset__UART_Tx_Data__DOT__mem__v4 = 1U;
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count = 0U;
        vlSelf->UART_Tx_Data__DOT__ptr_rd = 0U;
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index = 0U;
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state = 0U;
    }
    if (__Vdlyvset__UART_Tx_Data__DOT__mem__v0) {
        vlSelf->UART_Tx_Data__DOT__mem[0U] = __Vdlyvval__UART_Tx_Data__DOT__mem__v0;
        vlSelf->UART_Tx_Data__DOT__mem[1U] = __Vdlyvval__UART_Tx_Data__DOT__mem__v1;
        vlSelf->UART_Tx_Data__DOT__mem[2U] = __Vdlyvval__UART_Tx_Data__DOT__mem__v2;
        vlSelf->UART_Tx_Data__DOT__mem[3U] = __Vdlyvval__UART_Tx_Data__DOT__mem__v3;
    }
    if (__Vdlyvset__UART_Tx_Data__DOT__mem__v4) {
        vlSelf->UART_Tx_Data__DOT__mem[0U] = 0U;
        vlSelf->UART_Tx_Data__DOT__mem[1U] = 0U;
        vlSelf->UART_Tx_Data__DOT__mem[2U] = 0U;
        vlSelf->UART_Tx_Data__DOT__mem[3U] = 0U;
    }
    vlSelf->UART_Tx_Data__DOT__ptr_rd_n = (3U & ((IData)(vlSelf->UART_Tx_Data__DOT__ptr_rd) 
                                                 + (IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done)));
    if ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                             | (IData)(vlSelf->i_tx_en))
                             ? 1U : 0U));
        } else {
            if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & 0U);
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                     : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 4U;
            }
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index));
        }
    } else if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                            ? (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 2U;
            } else {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                    | (IData)(vlSelf->i_tx_en)) ? 1U
                    : 0U);
        }
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__1(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0;
    __Vdlyvdim0__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0;
    __Vdlyvval__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0;
    __Vdlyvset__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 = 0U;
    if (vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update) {
        __Vdlyvval__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 
            = vlSelf->UART_Rx_Test__DOT__w_o_rx_data;
        __Vdlyvset__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 = 1U;
        __Vdlyvdim0__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0 
            = vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr;
    }
    if (__Vdlyvset__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0) {
        vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[__Vdlyvdim0__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0] 
            = __Vdlyvval__UART_Rx_Test__DOT__FIFO_RX__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__2(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0;
    __Vdlyvdim0__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0;
    __Vdlyvval__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0;
    __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v1;
    __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v1 = 0;
    // Body
    __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 = 0U;
    __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v1 = 0U;
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           && (IData)((6U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))));
    if (vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
        __Vdlyvval__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem;
        __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 = 1U;
        __Vdlyvdim0__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr;
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count;
        if (vlSelf->tb_UART_Rx_Data__DOT__o_done_b) {
            vlSelf->tb_UART_Rx_Data__DOT__o_data_b 
                = ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                    [7U] << 0x18U) | ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                       [6U] << 0x10U) 
                                      | ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                          [5U] << 8U) 
                                         | vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                         [4U])));
        }
        if (vlSelf->tb_UART_Rx_Data__DOT__o_done_a) {
            vlSelf->tb_UART_Rx_Data__DOT__o_data_a 
                = ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                    [3U] << 0x18U) | ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                       [2U] << 0x10U) 
                                      | ((vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                          [1U] << 8U) 
                                         | vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg
                                         [0U])));
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = 0U;
        __Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v1 = 1U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__o_data_b = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__o_data_a = 0U;
    }
    if (__Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[__Vdlyvdim0__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0] 
            = __Vdlyvval__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v0;
    }
    if (__Vdlyvset__tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg__v1) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[0U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[1U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[2U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[3U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[4U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[5U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[6U] = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[7U] = 0U;
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_done)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_done_a));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_rx_done));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable 
        = ((~ ((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save)));
    vlSelf->tb_UART_Rx_Data__DOT__o_tx_done = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
                                               & (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd))));
    vlSelf->tb_UART_Rx_Data__DOT__o_rx_done = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
                                               & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a) 
                                                  & (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_done_b)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a 
        = ((~ ((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save)));
    if (vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) {
        if (vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem 
                = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data;
        }
        if ((2U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)))) 
                    & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data)) 
                   | (0xffU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data) 
                               << (7U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)))));
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data = 0U;
    }
    vlSelf->tb_UART_Rx_Data__DOT__o_tx_data = ((1U 
                                                & (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n))) 
                                               || ((1U 
                                                    & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state) 
                                                       >> 2U)) 
                                                   || (1U 
                                                       & ((2U 
                                                           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state)) 
                                                           || (1U 
                                                               & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data) 
                                                                  >> 
                                                                  (3U 
                                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)))))
                                                           : 
                                                          (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))))));
    if (vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) {
        if (vlSelf->tb_UART_Rx_Data__DOT__i_stick) {
            vlSelf->tb_UART_Rx_Data__DOT__o_done_a 
                = (3U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr));
            vlSelf->tb_UART_Rx_Data__DOT__o_done_b 
                = (7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr));
        }
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index;
        vlSelf->tb_UART_Rx_Data__DOT__i_stick = (1U 
                                                 == vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count);
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index;
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state;
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__o_done_a = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__o_done_b = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__i_stick = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state = 0U;
    }
    if ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index));
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                             ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                 ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                          : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                             : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                 ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                          : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))));
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                            ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))));
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
            = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                         ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                         : 0U));
    }
    if (vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram
            [vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd];
        if (vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr 
                = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr_n;
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr = 0U;
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr_n 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) 
           && (IData)((6U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))));
    if (vlSelf->tb_UART_Rx_Data__DOT__i_rst_n) {
        if (vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd 
                = vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd_n;
        }
        vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__n_bdr_count;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state 
            = vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state;
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count = 0U;
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state = 0U;
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable));
    vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__n_bdr_count 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
            ? 0U : (0xffffffU & ((IData)(1U) + vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)));
    if ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                            ? 0U : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)));
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                             ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                 ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                 : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                             : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                 ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                 : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))));
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                            ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
            = (0xfU & 0U);
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
            = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                         ? ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                         : 0U));
    }
}

VL_INLINE_OPT void Vtb_UART_Rx_Data___024root___nba_sequent__TOP__3(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable));
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->i_rx_data));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (~ (IData)(vlSelf->o_rx_done)));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__w_done_rx));
    vlSelf->o_rx_done = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
                         & (IData)((3U == (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr))));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable 
        = ((~ ((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save)));
    if (vlSelf->UART_Rx_Test__02Ei_rst_n) {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count 
            = vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count;
        if (vlSelf->UART_Rx_Test__DOT__w_done_rx) {
            vlSelf->UART_Rx_Test__DOT__w_o_rx_data 
                = vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data;
        }
    } else {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count = 0U;
        vlSelf->UART_Rx_Test__DOT__w_o_rx_data = 0U;
    }
    vlSelf->UART_Rx_Test__DOT__w_done_rx = ((IData)(vlSelf->UART_Rx_Test__02Ei_rst_n) 
                                            && (IData)(
                                                       (6U 
                                                        == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))));
    if (vlSelf->UART_Rx_Test__02Ei_rst_n) {
        if ((2U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))) 
                    & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data)) 
                   | (0xffU & ((IData)(vlSelf->i_rx_data) 
                               << (7U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))));
        }
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index 
            = vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index;
        if (vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update) {
            vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr 
                = vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr_n;
        }
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state 
            = vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state;
    } else {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data = 0U;
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index = 0U;
        vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr = 0U;
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state = 0U;
    }
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update 
        = ((IData)(vlSelf->UART_Rx_Test__DOT__w_done_rx) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr_n 
        = (3U & ((IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr) 
                 + (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update)));
    if ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                            ? 0U : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                     : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                            ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
            = (0xfU & 0U);
        if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            if ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                    = ((IData)(vlSelf->i_rx_data) ? 0U
                        : 2U);
            } else {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = ((((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                     & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                    & (IData)(vlSelf->i_rx_en)) ? 1U
                    : 0U);
        }
    }
}

void Vtb_UART_Rx_Data___024root___timing_resume(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___timing_resume\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2c5f5118__0.resume("@(posedge tb_UART_Rx_Data.i_clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_UART_Rx_Data___024root___timing_commit(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___timing_commit\n"); );
    // Body
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2c5f5118__0.commit("@(posedge tb_UART_Rx_Data.i_clk)");
    }
}

void Vtb_UART_Rx_Data___024root___eval_triggers__act(Vtb_UART_Rx_Data___024root* vlSelf);

bool Vtb_UART_Rx_Data___024root___eval_phase__act(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_UART_Rx_Data___024root___eval_triggers__act(vlSelf);
    Vtb_UART_Rx_Data___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_UART_Rx_Data___024root___timing_resume(vlSelf);
        Vtb_UART_Rx_Data___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_UART_Rx_Data___024root___eval_phase__nba(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_UART_Rx_Data___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__ico(Vtb_UART_Rx_Data___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__nba(Vtb_UART_Rx_Data___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__act(Vtb_UART_Rx_Data___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_UART_Rx_Data___024root___eval(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval\n"); );
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
            Vtb_UART_Rx_Data___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_UART_Rx_Data___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_UART_Rx_Data___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_UART_Rx_Data___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_UART_Rx_Data___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_UART_Rx_Data___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_UART_Rx_Data___024root___eval_debug_assertions(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->UART_Rx_Test__02Ei_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Rx_Test.i_clk");}
    if (VL_UNLIKELY((vlSelf->UART_Rx_Test__02Ei_rst_n 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Rx_Test.i_rst_n");}
    if (VL_UNLIKELY((vlSelf->UART_Rx_Test__02Ei_stick 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Rx_Test.i_stick");}
    if (VL_UNLIKELY((vlSelf->i_rx_en & 0xfeU))) {
        Verilated::overWidthError("i_rx_en");}
    if (VL_UNLIKELY((vlSelf->i_fifo_full & 0xfeU))) {
        Verilated::overWidthError("i_fifo_full");}
    if (VL_UNLIKELY((vlSelf->i_rx_data & 0xfeU))) {
        Verilated::overWidthError("i_rx_data");}
    if (VL_UNLIKELY((vlSelf->UART_Tx_Data__02Ei_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Tx_Data.i_clk");}
    if (VL_UNLIKELY((vlSelf->UART_Tx_Data__02Ei_rst_n 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Tx_Data.i_rst_n");}
    if (VL_UNLIKELY((vlSelf->UART_Tx_Data__02Ei_stick 
                     & 0xfeU))) {
        Verilated::overWidthError("UART_Tx_Data.i_stick");}
    if (VL_UNLIKELY((vlSelf->i_tx_en & 0xfeU))) {
        Verilated::overWidthError("i_tx_en");}
}
#endif  // VL_DEBUG
