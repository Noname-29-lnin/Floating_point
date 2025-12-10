// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_UART_Tx_Data__Syms.h"


void Vtb_UART_Tx_Data___024root__trace_chg_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_UART_Tx_Data___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_chg_0\n"); );
    // Init
    Vtb_UART_Tx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Tx_Data___024root*>(voidSelf);
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_UART_Tx_Data___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_UART_Tx_Data___024root__trace_chg_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_UART_Tx_Data__DOT__o_stick));
        bufp->chgBit(oldp+1,(vlSelf->tb_UART_Tx_Data__DOT__o_tx_data));
        bufp->chgBit(oldp+2,(vlSelf->tb_UART_Tx_Data__DOT__o_tx_done));
        bufp->chgCData(oldp+3,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[0]),8);
        bufp->chgCData(oldp+4,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[1]),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[2]),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[3]),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd),2);
        bufp->chgCData(oldp+8,((3U & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd) 
                                      + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done)))),2);
        bufp->chgBit(oldp+9,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done));
        bufp->chgCData(oldp+10,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem
                                [vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd]),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state),3);
        bufp->chgCData(oldp+12,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index),4);
        bufp->chgCData(oldp+13,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                          ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                              ? 0U : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                                          : ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                                                   ? (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                                                    : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))))
                                              : 0U)))),4);
        bufp->chgBit(oldp+14,((7U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))));
        bufp->chgCData(oldp+15,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count),5);
        bufp->chgCData(oldp+16,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                           ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))))
                                           : ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                                                   : 0U))))),5);
        bufp->chgBit(oldp+17,((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))));
        bufp->chgCData(oldp+18,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data),8);
        bufp->chgIData(oldp+19,(vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count),24);
        bufp->chgIData(oldp+20,(((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                  ? 0U : (0xffffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)))),24);
        bufp->chgBit(oldp+21,((1U == vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+22,(((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                               & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
        bufp->chgBit(oldp+23,(((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                               & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
        bufp->chgBit(oldp+24,(vlSelf->UART_SS_detect_start__DOT__w_start_save));
        bufp->chgBit(oldp+25,((((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                                & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                               | (IData)(vlSelf->UART_SS_detect_start__DOT__w_start_save))));
        bufp->chgBit(oldp+26,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+27,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal));
        bufp->chgBit(oldp+28,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
        bufp->chgBit(oldp+29,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
    }
    bufp->chgBit(oldp+30,(vlSelf->i_clk));
    bufp->chgBit(oldp+31,(vlSelf->i_rst_n));
    bufp->chgBit(oldp+32,(vlSelf->i_start));
    bufp->chgBit(oldp+33,(vlSelf->i_done));
    bufp->chgBit(oldp+34,(vlSelf->o_w_start));
    bufp->chgBit(oldp+35,(vlSelf->tb_UART_Tx_Data__DOT__i_clk));
    bufp->chgBit(oldp+36,(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n));
    bufp->chgBit(oldp+37,(vlSelf->tb_UART_Tx_Data__DOT__i_tx_en));
    bufp->chgIData(oldp+38,(vlSelf->tb_UART_Tx_Data__DOT__i_data),32);
    bufp->chgBit(oldp+39,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start));
    bufp->chgCData(oldp+40,(((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                              ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                  ? ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                      ? 0U : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                                               ? 1U
                                               : 0U))
                                  : ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                      ? ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                          ? 6U : 5U)
                                      : ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                          ? 5U : 4U)))
                              : ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                  ? ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                      ? 0U : (((0xfU 
                                                == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)) 
                                               & (7U 
                                                  == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index)))
                                               ? 4U
                                               : 2U))
                                  : ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                      ? ((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                          ? 2U : 1U)
                                      : ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start)
                                          ? 1U : 0U))))),3);
}

void Vtb_UART_Tx_Data___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_cleanup\n"); );
    // Init
    Vtb_UART_Tx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Tx_Data___024root*>(voidSelf);
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
