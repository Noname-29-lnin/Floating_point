// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_UART_Tx_Data.h for the primary calling header

#include "Vtb_UART_Tx_Data__pch.h"
#include "Vtb_UART_Tx_Data___024root.h"

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___eval_initial__TOP(Vtb_UART_Tx_Data___024root* vlSelf);
VlCoroutine Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__0(Vtb_UART_Tx_Data___024root* vlSelf);
VlCoroutine Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__1(Vtb_UART_Tx_Data___024root* vlSelf);

void Vtb_UART_Tx_Data___024root___eval_initial(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_initial\n"); );
    // Body
    Vtb_UART_Tx_Data___024root___eval_initial__TOP(vlSelf);
    Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_clk__0 
        = vlSelf->tb_UART_Tx_Data__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_rst_n__0 
        = vlSelf->tb_UART_Tx_Data__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_rst_n__0 = vlSelf->i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__0(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_UART_Tx_Data__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                           42);
        vlSelf->tb_UART_Tx_Data__DOT__i_clk = (1U & 
                                               (~ (IData)(vlSelf->tb_UART_Tx_Data__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__1(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_UART_Tx_Data__DOT__i_rst_n = 0U;
    vlSelf->tb_UART_Tx_Data__DOT__i_tx_en = 0U;
    vlSelf->tb_UART_Tx_Data__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                       53);
    vlSelf->tb_UART_Tx_Data__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                       55);
    co_await vlSelf->__VtrigSched_ha3f78262__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_UART_Tx_Data.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                                       56);
    vlSelf->tb_UART_Tx_Data__DOT__i_tx_en = 1U;
    vlSelf->tb_UART_Tx_Data__DOT__i_data = 0xaaaabbbbU;
    co_await vlSelf->__VtrigSched_ha3f78262__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_UART_Tx_Data.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                                       59);
    vlSelf->tb_UART_Tx_Data__DOT__i_tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 
                                       61);
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 62, "");
}

void Vtb_UART_Tx_Data___024root___act_comb__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf);

void Vtb_UART_Tx_Data___024root___eval_act(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_act\n"); );
    // Body
    if ((0xcULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_UART_Tx_Data___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_UART_Tx_Data___024root___act_comb__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start 
        = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done) 
           | (IData)(vlSelf->tb_UART_Tx_Data__DOT__i_tx_en));
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state 
        = ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
            ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                ? ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                             ? 1U : 0U)) : ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 6U
                                                 : 5U)
                                             : ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 5U
                                                 : 4U)))
            : ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                ? ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : (((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)) 
                             & (7U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)))
                             ? 4U : 2U)) : ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 2U
                                                 : 1U)
                                             : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                                                 ? 1U
                                                 : 0U))));
}

void Vtb_UART_Tx_Data___024root___nba_sequent__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf);
void Vtb_UART_Tx_Data___024root___nba_sequent__TOP__1(Vtb_UART_Tx_Data___024root* vlSelf);

void Vtb_UART_Tx_Data___024root___eval_nba(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Tx_Data___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Tx_Data___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0xdULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_UART_Tx_Data___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_UART_Tx_Data___024root___nba_sequent__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0;
    __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0;
    __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v1;
    __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v2;
    __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v3;
    __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v4;
    __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v4 = 0;
    // Body
    __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v4 = 0U;
    vlSelf->tb_UART_Tx_Data__DOT__o_tx_done = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n) 
                                               & (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd))));
    vlSelf->tb_UART_Tx_Data__DOT__o_stick = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n) 
                                             & (1U 
                                                == vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count));
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done 
        = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n) 
           && (IData)((6U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))));
    vlSelf->tb_UART_Tx_Data__DOT__o_tx_data = ((1U 
                                                & (~ (IData)(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n))) 
                                               || ((1U 
                                                    & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state) 
                                                       >> 2U)) 
                                                   || (1U 
                                                       & ((2U 
                                                           & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state)) 
                                                           || (1U 
                                                               & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data) 
                                                                  >> 
                                                                  (7U 
                                                                   & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)))))
                                                           : 
                                                          (~ (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))))));
    if (vlSelf->tb_UART_Tx_Data__DOT__i_rst_n) {
        if (vlSelf->tb_UART_Tx_Data__DOT__i_tx_en) {
            __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0 
                = (0xffU & vlSelf->tb_UART_Tx_Data__DOT__i_data);
            __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0 = 1U;
            __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v1 
                = (0xffU & (vlSelf->tb_UART_Tx_Data__DOT__i_data 
                            >> 8U));
            __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v2 
                = (0xffU & (vlSelf->tb_UART_Tx_Data__DOT__i_data 
                            >> 0x10U));
            __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v3 
                = (vlSelf->tb_UART_Tx_Data__DOT__i_data 
                   >> 0x18U);
        }
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count 
            = vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count;
        vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count 
            = vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__n_bdr_count;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index 
            = vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state 
            = vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state;
        if (vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start) {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data 
                = vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem
                [vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd];
        }
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd 
            = vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd_n;
    } else {
        __Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v4 = 1U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd = 0U;
    }
    if (__Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0) {
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[0U] 
            = __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v0;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[1U] 
            = __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v1;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[2U] 
            = __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v2;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[3U] 
            = __Vdlyvval__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v3;
    }
    if (__Vdlyvset__tb_UART_Tx_Data__DOT__DUT__DOT__mem__v4) {
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[0U] = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[1U] = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[2U] = 0U;
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[3U] = 0U;
    }
    vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__n_bdr_count 
        = ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
            ? 0U : (0xffffffU & ((IData)(1U) + vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)));
    if ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
        } else {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                             ? ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                 ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                          : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                             : ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                 ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                          : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))));
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index));
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
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
        }
    } else {
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count 
            = (0x1fU & ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                         ? ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                         : 0U));
        vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
    }
    vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd_n 
        = (3U & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd) 
                 + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done)));
}

VL_INLINE_OPT void Vtb_UART_Tx_Data___024root___nba_sequent__TOP__1(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->UART_SS_detect_start__DOT__w_start_save 
        = ((IData)(vlSelf->i_rst_n) & (IData)(vlSelf->o_w_start));
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal 
        = ((IData)(vlSelf->i_rst_n) & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal 
        = ((IData)(vlSelf->i_rst_n) & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal 
        = ((IData)(vlSelf->i_rst_n) & (IData)(vlSelf->i_done));
    vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->i_rst_n) & (IData)(vlSelf->i_start));
    vlSelf->o_w_start = ((~ ((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                             & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
                         & (((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                            | (IData)(vlSelf->UART_SS_detect_start__DOT__w_start_save)));
}

void Vtb_UART_Tx_Data___024root___timing_resume(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_ha3f78262__0.resume("@(posedge tb_UART_Tx_Data.i_clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_UART_Tx_Data___024root___timing_commit(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_ha3f78262__0.commit("@(posedge tb_UART_Tx_Data.i_clk)");
    }
}

void Vtb_UART_Tx_Data___024root___eval_triggers__act(Vtb_UART_Tx_Data___024root* vlSelf);

bool Vtb_UART_Tx_Data___024root___eval_phase__act(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_UART_Tx_Data___024root___eval_triggers__act(vlSelf);
    Vtb_UART_Tx_Data___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_UART_Tx_Data___024root___timing_resume(vlSelf);
        Vtb_UART_Tx_Data___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_UART_Tx_Data___024root___eval_phase__nba(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_UART_Tx_Data___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__nba(Vtb_UART_Tx_Data___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root___dump_triggers__act(Vtb_UART_Tx_Data___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_UART_Tx_Data___024root___eval(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_UART_Tx_Data___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_UART_Tx_Data___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/TX_DATA/tb_UART_Tx_Data.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_UART_Tx_Data___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_UART_Tx_Data___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_UART_Tx_Data___024root___eval_debug_assertions(Vtb_UART_Tx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_rst_n");}
    if (VL_UNLIKELY((vlSelf->i_start & 0xfeU))) {
        Verilated::overWidthError("i_start");}
    if (VL_UNLIKELY((vlSelf->i_done & 0xfeU))) {
        Verilated::overWidthError("i_done");}
}
#endif  // VL_DEBUG
