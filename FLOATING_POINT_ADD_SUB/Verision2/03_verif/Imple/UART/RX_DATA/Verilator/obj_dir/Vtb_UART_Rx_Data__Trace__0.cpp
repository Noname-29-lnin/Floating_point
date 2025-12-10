// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_UART_Rx_Data__Syms.h"


void Vtb_UART_Rx_Data___024root__trace_chg_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_UART_Rx_Data___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_chg_0\n"); );
    // Init
    Vtb_UART_Rx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Rx_Data___024root*>(voidSelf);
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_UART_Rx_Data___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_UART_Rx_Data___024root__trace_chg_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[3]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+4,(vlSelf->UART_Tx_Data__DOT__mem[0]),8);
        bufp->chgCData(oldp+5,(vlSelf->UART_Tx_Data__DOT__mem[1]),8);
        bufp->chgCData(oldp+6,(vlSelf->UART_Tx_Data__DOT__mem[2]),8);
        bufp->chgCData(oldp+7,(vlSelf->UART_Tx_Data__DOT__mem[3]),8);
        bufp->chgCData(oldp+8,(vlSelf->UART_Tx_Data__DOT__ptr_rd),2);
        bufp->chgCData(oldp+9,((3U & ((IData)(vlSelf->UART_Tx_Data__DOT__ptr_rd) 
                                      + (IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done)))),2);
        bufp->chgBit(oldp+10,(vlSelf->UART_Tx_Data__DOT__w_tx_done));
        bufp->chgCData(oldp+11,(vlSelf->UART_Tx_Data__DOT__mem
                                [vlSelf->UART_Tx_Data__DOT__ptr_rd]),8);
        bufp->chgCData(oldp+12,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state),3);
        bufp->chgCData(oldp+13,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index),4);
        bufp->chgCData(oldp+14,((0xfU & ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                          ? ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                              ? 0U : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                          : ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                                   ? (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                                    : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))))
                                              : 0U)))),4);
        bufp->chgBit(oldp+15,((7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))));
        bufp->chgCData(oldp+16,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count),5);
        bufp->chgBit(oldp+17,((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+18,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[0]),8);
        bufp->chgCData(oldp+19,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[1]),8);
        bufp->chgCData(oldp+20,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[2]),8);
        bufp->chgCData(oldp+21,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[3]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+22,(vlSelf->tb_UART_Rx_Data__DOT__i_stick));
        bufp->chgBit(oldp+23,(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data));
        bufp->chgBit(oldp+24,(vlSelf->tb_UART_Rx_Data__DOT__o_tx_done));
        bufp->chgIData(oldp+25,(vlSelf->tb_UART_Rx_Data__DOT__o_data_a),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_UART_Rx_Data__DOT__o_data_b),32);
        bufp->chgBit(oldp+27,(vlSelf->tb_UART_Rx_Data__DOT__o_done_a));
        bufp->chgBit(oldp+28,(vlSelf->tb_UART_Rx_Data__DOT__o_done_b));
        bufp->chgBit(oldp+29,(vlSelf->tb_UART_Rx_Data__DOT__o_rx_done));
        bufp->chgIData(oldp+30,(vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count),24);
        bufp->chgIData(oldp+31,(((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                  ? 0U : (0xffffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)))),24);
        bufp->chgBit(oldp+32,((1U == vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)));
        bufp->chgBit(oldp+33,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem));
        bufp->chgCData(oldp+34,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem),8);
        bufp->chgBit(oldp+35,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a));
        bufp->chgBit(oldp+36,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
        bufp->chgBit(oldp+37,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
        bufp->chgBit(oldp+38,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save));
        bufp->chgBit(oldp+39,((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                                & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                               | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save))));
        bufp->chgBit(oldp+40,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+41,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal));
        bufp->chgBit(oldp+42,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
        bufp->chgBit(oldp+43,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
        bufp->chgCData(oldp+44,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr),4);
        bufp->chgCData(oldp+45,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr)))),4);
        bufp->chgBit(oldp+46,((3U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr))));
        bufp->chgBit(oldp+47,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr))));
        bufp->chgCData(oldp+48,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[0]),8);
        bufp->chgCData(oldp+49,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[1]),8);
        bufp->chgCData(oldp+50,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[2]),8);
        bufp->chgCData(oldp+51,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[3]),8);
        bufp->chgCData(oldp+52,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[4]),8);
        bufp->chgCData(oldp+53,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[5]),8);
        bufp->chgCData(oldp+54,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[6]),8);
        bufp->chgCData(oldp+55,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[7]),8);
        bufp->chgCData(oldp+56,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[8]),8);
        bufp->chgCData(oldp+57,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[9]),8);
        bufp->chgCData(oldp+58,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[10]),8);
        bufp->chgCData(oldp+59,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[11]),8);
        bufp->chgCData(oldp+60,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[12]),8);
        bufp->chgCData(oldp+61,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[13]),8);
        bufp->chgCData(oldp+62,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[14]),8);
        bufp->chgCData(oldp+63,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[15]),8);
        bufp->chgCData(oldp+64,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state),3);
        bufp->chgCData(oldp+65,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count),5);
        bufp->chgCData(oldp+66,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                           ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))))
                                           : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                                                   : 0U))))),5);
        bufp->chgCData(oldp+67,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index),4);
        bufp->chgCData(oldp+68,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                          ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                                  ? 0U
                                                  : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                              : 0U)
                                          : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                                   ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                                    : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))))
                                              : 0U)))),4);
        bufp->chgBit(oldp+69,((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
        bufp->chgBit(oldp+70,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
        bufp->chgBit(oldp+71,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))));
        bufp->chgBit(oldp+72,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal))));
        bufp->chgCData(oldp+73,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data),8);
        bufp->chgBit(oldp+74,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal));
        bufp->chgBit(oldp+75,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal));
        bufp->chgCData(oldp+76,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data),8);
        bufp->chgBit(oldp+77,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx));
        bufp->chgBit(oldp+78,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable));
        bufp->chgBit(oldp+79,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update));
        bufp->chgCData(oldp+80,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd),2);
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd) 
                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update)))));
        bufp->chgBit(oldp+82,((1U & (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_done)))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
        bufp->chgBit(oldp+84,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
        bufp->chgBit(oldp+85,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save));
        bufp->chgBit(oldp+86,((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                                & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                               | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save))));
        bufp->chgBit(oldp+87,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+88,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal));
        bufp->chgBit(oldp+89,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
        bufp->chgBit(oldp+90,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
        bufp->chgCData(oldp+91,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state),3);
        bufp->chgCData(oldp+92,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index),4);
        bufp->chgCData(oldp+93,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                          ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                              ? 0U : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                          : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                                   ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                                    : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))))
                                              : 0U)))),4);
        bufp->chgBit(oldp+94,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))));
        bufp->chgCData(oldp+95,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count),5);
        bufp->chgCData(oldp+96,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                           ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))))
                                           : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                                                   : 0U))))),5);
        bufp->chgBit(oldp+97,((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+98,(vlSelf->UART_Rx_Test__DOT__w_done_rx));
        bufp->chgCData(oldp+99,(vlSelf->UART_Rx_Test__DOT__w_o_rx_data),8);
        bufp->chgCData(oldp+100,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr),2);
        bufp->chgCData(oldp+101,((3U & ((IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr) 
                                        + (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update)))),2);
        bufp->chgBit(oldp+102,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable));
        bufp->chgBit(oldp+103,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update));
        bufp->chgBit(oldp+104,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                                & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
        bufp->chgBit(oldp+105,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                                & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
        bufp->chgBit(oldp+106,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save));
        bufp->chgBit(oldp+107,((((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                                 & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                                | (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save))));
        bufp->chgBit(oldp+108,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+109,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal));
        bufp->chgBit(oldp+110,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
        bufp->chgBit(oldp+111,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
        bufp->chgCData(oldp+112,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state),3);
        bufp->chgCData(oldp+113,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count),5);
        bufp->chgCData(oldp+114,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index),4);
        bufp->chgCData(oldp+115,((0xfU & ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                           ? ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                                   ? 0U
                                                   : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                                    ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                                     : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))))
                                               : 0U)))),4);
        bufp->chgBit(oldp+116,((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
        bufp->chgBit(oldp+117,((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
        bufp->chgBit(oldp+118,((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))));
        bufp->chgBit(oldp+119,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                                & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal))));
        bufp->chgCData(oldp+120,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data),8);
        bufp->chgBit(oldp+121,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal));
        bufp->chgBit(oldp+122,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal));
    }
    bufp->chgBit(oldp+123,(vlSelf->UART_Rx_Test__02Ei_clk));
    bufp->chgBit(oldp+124,(vlSelf->UART_Rx_Test__02Ei_rst_n));
    bufp->chgBit(oldp+125,(vlSelf->UART_Rx_Test__02Ei_stick));
    bufp->chgBit(oldp+126,(vlSelf->i_rx_en));
    bufp->chgBit(oldp+127,(vlSelf->i_fifo_full));
    bufp->chgBit(oldp+128,(vlSelf->i_rx_data));
    bufp->chgBit(oldp+129,(vlSelf->o_rx_done));
    bufp->chgBit(oldp+130,(vlSelf->UART_Tx_Data__02Ei_clk));
    bufp->chgBit(oldp+131,(vlSelf->UART_Tx_Data__02Ei_rst_n));
    bufp->chgBit(oldp+132,(vlSelf->UART_Tx_Data__02Ei_stick));
    bufp->chgBit(oldp+133,(vlSelf->i_tx_en));
    bufp->chgIData(oldp+134,(vlSelf->i_data),32);
    bufp->chgBit(oldp+135,(vlSelf->o_tx_data));
    bufp->chgBit(oldp+136,(vlSelf->o_tx_done));
    bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSelf->o_rx_done)))));
    bufp->chgCData(oldp+138,(((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                               ? ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                   ? 0U : ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                            ? ((0xfU 
                                                == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                ? 6U
                                                : 5U)
                                            : ((0xfU 
                                                == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                ? 5U
                                                : 4U)))
                               : ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                       ? 0U : (((0xfU 
                                                 == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)) 
                                                & (7U 
                                                   == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))
                                                ? 4U
                                                : 2U))
                                   : ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                       ? ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                           ? ((IData)(vlSelf->i_rx_data)
                                               ? 0U
                                               : 2U)
                                           : 1U) : 
                                      ((((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                                         & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                                        & (IData)(vlSelf->i_rx_en))
                                        ? 1U : 0U))))),3);
    bufp->chgCData(oldp+139,((0x1fU & ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                 ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                                                 : 
                                                ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)))
                                             : ((0xfU 
                                                 == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                 ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                                                 : 
                                                ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)))))
                                        : ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                            ? ((1U 
                                                & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))))
                                            : ((1U 
                                                & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)))
                                                : 0U))))),5);
    bufp->chgBit(oldp+140,(((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                            | (IData)(vlSelf->i_tx_en))));
    bufp->chgCData(oldp+141,(((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                               ? ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                       ? 0U : (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                                                | (IData)(vlSelf->i_tx_en))
                                                ? 1U
                                                : 0U))
                                   : ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                           ? 6U : 5U)
                                       : ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                           ? 5U : 4U)))
                               : ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                       ? 0U : (((0xfU 
                                                 == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)) 
                                                & (7U 
                                                   == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)))
                                                ? 4U
                                                : 2U))
                                   : ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                           ? 2U : 1U)
                                       : (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                                           | (IData)(vlSelf->i_tx_en))
                                           ? 1U : 0U))))),3);
    bufp->chgCData(oldp+142,((0x1fU & ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)))
                                             : ((0xfU 
                                                 == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)))))
                                        : ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                            ? ((1U 
                                                & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))))
                                            : ((1U 
                                                & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                                ? (
                                                   (0xfU 
                                                    == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)))
                                                : 0U))))),5);
    bufp->chgBit(oldp+143,(vlSelf->tb_UART_Rx_Data__DOT__i_clk));
    bufp->chgBit(oldp+144,(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n));
    bufp->chgBit(oldp+145,(vlSelf->tb_UART_Rx_Data__DOT__i_sel_data));
    bufp->chgBit(oldp+146,(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en));
    bufp->chgCData(oldp+147,(((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                               ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                   ? 0U : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                            ? ((0xfU 
                                                == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                ? 6U
                                                : 5U)
                                            : ((0xfU 
                                                == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                ? 5U
                                                : 4U)))
                               : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                       ? 0U : (((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)) 
                                                & (7U 
                                                   == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)))
                                                ? 4U
                                                : 2U))
                                   : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                       ? ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                           ? ((IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data)
                                               ? 0U
                                               : 2U)
                                           : 1U) : 
                                      ((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                                         & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                                        & (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en))
                                        ? 1U : 0U))))),3);
    bufp->chgCData(oldp+148,(((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                               ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                       ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                                                ? 1U
                                                : 0U))
                                   : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                           ? 6U : 5U)
                                       : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                           ? 5U : 4U)))
                               : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                   ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                       ? 0U : (((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)) 
                                                & (7U 
                                                   == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)))
                                                ? 4U
                                                : 2U))
                                   : ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                           ? 2U : 1U)
                                       : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                                           ? 1U : 0U))))),3);
}

void Vtb_UART_Rx_Data___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_cleanup\n"); );
    // Init
    Vtb_UART_Rx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Rx_Data___024root*>(voidSelf);
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
