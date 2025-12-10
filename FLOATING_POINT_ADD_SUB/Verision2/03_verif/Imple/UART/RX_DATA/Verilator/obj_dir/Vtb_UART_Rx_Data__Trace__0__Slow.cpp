// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_UART_Rx_Data__Syms.h"


VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_init_sub__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,0,"UART_Rx_Test.i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"UART_Rx_Test.i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"UART_Rx_Test.i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"i_rx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"i_fifo_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"i_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"UART_Tx_Data.i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"UART_Tx_Data.i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"UART_Tx_Data.i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"o_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UART_Rx_Test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+152,0,"RX_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 391,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"MID_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"i_rx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"i_fifo_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"i_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"w_done_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"w_o_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FIFO_RX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+152,0,"RX_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 391,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+130,0,"o_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"ptr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+102,0,"ptr_wr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"w_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"w_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ENABLE_FIFO_WORK", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"i_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"o_w_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"w_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_start_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_next_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SS_detect_edge_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SS_detect_edge_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_RX_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"MID_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"i_rx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"i_fifo_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"i_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"o_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"SIZE_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"TRANSMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"STOP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"STOP_II",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"SIZE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"SIZE_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"n_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+114,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+140,0,"n_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"n_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+117,0,"w_update_sampling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"w_update_mid_sampling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"w_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"w_detect_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"w_o_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("UART_DETECT_NEG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_Tx_Data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"SIZE_DATA_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"o_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"ptr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"ptr_rd_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"w_tx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UART_TX_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"i_fifo_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"i_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"o_tx_serial",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"SIZE_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"TRANSMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"STOP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"STOP_II",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"n_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"SIZE_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"n_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"w_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"SIZE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"n_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+18,0,"w_update_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"w_update_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tb_UART_Rx_Data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+178,0,"TX_PATH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declArray(c+203,0,"TX_PATH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"i_sel_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_tx_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"o_tx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"o_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"o_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"o_done_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_done_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_rx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UART_BND", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"SIZE_BAUD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"i_baud_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+23,0,"o_stick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"bdr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+32,0,"n_bdr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+33,0,"w_stick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("UART_RX_DATA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_rx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"i_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"o_data_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"o_done_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"o_data_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"o_done_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"w_wr_fifo_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_data_fifo_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("UART_DETECT_DONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"i_en_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"i_en_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"w_en_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SS_DETECT_START_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"o_w_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"w_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_start_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"w_next_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SS_detect_edge_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SS_detect_edge_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_MEM_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"i_fifo_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"o_done_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"o_data_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"o_done_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"o_data_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ptr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"ptr_wr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"w_update_a_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_update_b_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_RX_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"MID_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_rx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"i_fifo_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"i_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"o_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"SIZE_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"TRANSMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"STOP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"STOP_II",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"SIZE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"SIZE_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"n_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"n_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"n_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+70,0,"w_update_sampling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_update_mid_sampling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"w_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_detect_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"w_o_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("UART_DETECT_NEG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_TX_TEST", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+178,0,"TX_PATH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declArray(c+203,0,"TX_PATH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"i_sel_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"w_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+78,0,"w_done_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FIFO_TEST", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+178,0,"TX_PATH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declArray(c+203,0,"TX_PATH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 791,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"i_sel_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"o_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+79,0,"w_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"w_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"ptr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+230,0,"ptr_rd_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+82,0,"ptr_wr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ENABLE_FIFO_WORK", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"i_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"o_w_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"w_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"w_start_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"w_next_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SS_detect_edge_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SS_detect_edge_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_TX_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"i_fifo_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"i_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"o_tx_serial",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"SIZE_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"TRANSMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"STOP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"STOP_II",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+92,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+149,0,"n_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"SIZE_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"n_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"w_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"SIZE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"n_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+98,0,"w_update_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"w_update_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_init_top(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_init_top\n"); );
    // Body
    Vtb_UART_Rx_Data___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_UART_Rx_Data___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_UART_Rx_Data___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_register(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_UART_Rx_Data___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_UART_Rx_Data___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_UART_Rx_Data___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_UART_Rx_Data___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_const_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_const_0\n"); );
    // Init
    Vtb_UART_Rx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Rx_Data___024root*>(voidSelf);
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_UART_Rx_Data___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<13>/*415:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h85c9f158_0;
extern const VlWide<25>/*799:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h5fa3ccf9_0;
extern const VlWide<25>/*799:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h5241f51a_0;

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_const_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+150,(8U),32);
    bufp->fullIData(oldp+151,(4U),32);
    bufp->fullWData(oldp+152,(Vtb_UART_Rx_Data__ConstPool__CONST_h85c9f158_0),392);
    bufp->fullIData(oldp+165,(0x10U),32);
    bufp->fullIData(oldp+166,(2U),32);
    bufp->fullIData(oldp+167,(1U),32);
    bufp->fullIData(oldp+168,(0U),32);
    bufp->fullBit(oldp+169,(0U));
    bufp->fullIData(oldp+170,(3U),32);
    bufp->fullCData(oldp+171,(0U),3);
    bufp->fullCData(oldp+172,(1U),3);
    bufp->fullCData(oldp+173,(2U),3);
    bufp->fullCData(oldp+174,(4U),3);
    bufp->fullCData(oldp+175,(5U),3);
    bufp->fullCData(oldp+176,(6U),3);
    bufp->fullIData(oldp+177,(0x20U),32);
    bufp->fullWData(oldp+178,(Vtb_UART_Rx_Data__ConstPool__CONST_h5fa3ccf9_0),792);
    bufp->fullWData(oldp+203,(Vtb_UART_Rx_Data__ConstPool__CONST_h5241f51a_0),792);
    bufp->fullIData(oldp+228,(0x18U),32);
    bufp->fullIData(oldp+229,(1U),24);
    bufp->fullCData(oldp+230,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd_n),2);
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_full_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_full_0\n"); );
    // Init
    Vtb_UART_Rx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Rx_Data___024root*>(voidSelf);
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_UART_Rx_Data___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root__trace_full_0_sub_0(Vtb_UART_Rx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->UART_Tx_Data__DOT__mem[0]),8);
    bufp->fullCData(oldp+6,(vlSelf->UART_Tx_Data__DOT__mem[1]),8);
    bufp->fullCData(oldp+7,(vlSelf->UART_Tx_Data__DOT__mem[2]),8);
    bufp->fullCData(oldp+8,(vlSelf->UART_Tx_Data__DOT__mem[3]),8);
    bufp->fullCData(oldp+9,(vlSelf->UART_Tx_Data__DOT__ptr_rd),2);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelf->UART_Tx_Data__DOT__ptr_rd) 
                                    + (IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done)))),2);
    bufp->fullBit(oldp+11,(vlSelf->UART_Tx_Data__DOT__w_tx_done));
    bufp->fullCData(oldp+12,(vlSelf->UART_Tx_Data__DOT__mem
                             [vlSelf->UART_Tx_Data__DOT__ptr_rd]),8);
    bufp->fullCData(oldp+13,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state),3);
    bufp->fullCData(oldp+14,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index),4);
    bufp->fullCData(oldp+15,((0xfU & ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                           ? 0U : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                       : ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                           ? ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                                               ? 0U
                                               : ((7U 
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
    bufp->fullBit(oldp+16,((7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))));
    bufp->fullCData(oldp+17,(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count),5);
    bufp->fullBit(oldp+18,((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))));
    bufp->fullCData(oldp+19,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[0]),8);
    bufp->fullCData(oldp+20,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[1]),8);
    bufp->fullCData(oldp+21,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[2]),8);
    bufp->fullCData(oldp+22,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[3]),8);
    bufp->fullBit(oldp+23,(vlSelf->tb_UART_Rx_Data__DOT__i_stick));
    bufp->fullBit(oldp+24,(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data));
    bufp->fullBit(oldp+25,(vlSelf->tb_UART_Rx_Data__DOT__o_tx_done));
    bufp->fullIData(oldp+26,(vlSelf->tb_UART_Rx_Data__DOT__o_data_a),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_UART_Rx_Data__DOT__o_data_b),32);
    bufp->fullBit(oldp+28,(vlSelf->tb_UART_Rx_Data__DOT__o_done_a));
    bufp->fullBit(oldp+29,(vlSelf->tb_UART_Rx_Data__DOT__o_done_b));
    bufp->fullBit(oldp+30,(vlSelf->tb_UART_Rx_Data__DOT__o_rx_done));
    bufp->fullIData(oldp+31,(vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count),24);
    bufp->fullIData(oldp+32,(((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                               ? 0U : (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)))),24);
    bufp->fullBit(oldp+33,((1U == vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)));
    bufp->fullBit(oldp+34,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem));
    bufp->fullCData(oldp+35,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem),8);
    bufp->fullBit(oldp+36,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a));
    bufp->fullBit(oldp+37,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
    bufp->fullBit(oldp+38,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
    bufp->fullBit(oldp+39,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save));
    bufp->fullBit(oldp+40,((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                            | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save))));
    bufp->fullBit(oldp+41,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+42,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal));
    bufp->fullBit(oldp+43,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    bufp->fullBit(oldp+44,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
    bufp->fullCData(oldp+45,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr),4);
    bufp->fullCData(oldp+46,((0xfU & ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr)))),4);
    bufp->fullBit(oldp+47,((3U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr))));
    bufp->fullBit(oldp+48,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr))));
    bufp->fullCData(oldp+49,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[0]),8);
    bufp->fullCData(oldp+50,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[1]),8);
    bufp->fullCData(oldp+51,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[2]),8);
    bufp->fullCData(oldp+52,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[3]),8);
    bufp->fullCData(oldp+53,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[4]),8);
    bufp->fullCData(oldp+54,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[5]),8);
    bufp->fullCData(oldp+55,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[6]),8);
    bufp->fullCData(oldp+56,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[7]),8);
    bufp->fullCData(oldp+57,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[8]),8);
    bufp->fullCData(oldp+58,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[9]),8);
    bufp->fullCData(oldp+59,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[10]),8);
    bufp->fullCData(oldp+60,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[11]),8);
    bufp->fullCData(oldp+61,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[12]),8);
    bufp->fullCData(oldp+62,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[13]),8);
    bufp->fullCData(oldp+63,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[14]),8);
    bufp->fullCData(oldp+64,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[15]),8);
    bufp->fullCData(oldp+65,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state),3);
    bufp->fullCData(oldp+66,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count),5);
    bufp->fullCData(oldp+67,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                 ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                                 : 
                                                ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                                             : ((0xfU 
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
                                                : (
                                                   (0xfU 
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
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)))
                                                : 0U))))),5);
    bufp->fullCData(oldp+68,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index),4);
    bufp->fullCData(oldp+69,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                       ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                           ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                               ? 0U
                                               : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                           : 0U) : 
                                      ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                        ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                             ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                                             : ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                                 : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))))
                                        : 0U)))),4);
    bufp->fullBit(oldp+70,((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
    bufp->fullBit(oldp+71,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
    bufp->fullBit(oldp+72,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))));
    bufp->fullBit(oldp+73,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal))));
    bufp->fullCData(oldp+74,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data),8);
    bufp->fullBit(oldp+75,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal));
    bufp->fullBit(oldp+76,(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal));
    bufp->fullCData(oldp+77,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data),8);
    bufp->fullBit(oldp+78,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx));
    bufp->fullBit(oldp+79,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable));
    bufp->fullBit(oldp+80,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update));
    bufp->fullCData(oldp+81,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd),2);
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd) 
                                  + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update)))));
    bufp->fullBit(oldp+83,((1U & (~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_done)))));
    bufp->fullBit(oldp+84,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
    bufp->fullBit(oldp+85,(((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                            & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
    bufp->fullBit(oldp+86,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save));
    bufp->fullBit(oldp+87,((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                            | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save))));
    bufp->fullBit(oldp+88,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+89,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal));
    bufp->fullBit(oldp+90,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    bufp->fullBit(oldp+91,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
    bufp->fullCData(oldp+92,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state),3);
    bufp->fullCData(oldp+93,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index),4);
    bufp->fullCData(oldp+94,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                           ? 0U : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                       : ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                           ? ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                               ? 0U
                                               : ((7U 
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
    bufp->fullBit(oldp+95,((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))));
    bufp->fullCData(oldp+96,(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count),5);
    bufp->fullCData(oldp+97,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                                             : ((0xfU 
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
                                                : (
                                                   (0xfU 
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
                                                ? (
                                                   (0xfU 
                                                    == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)))
                                                : 0U))))),5);
    bufp->fullBit(oldp+98,((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))));
    bufp->fullBit(oldp+99,(vlSelf->UART_Rx_Test__DOT__w_done_rx));
    bufp->fullCData(oldp+100,(vlSelf->UART_Rx_Test__DOT__w_o_rx_data),8);
    bufp->fullCData(oldp+101,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr),2);
    bufp->fullCData(oldp+102,((3U & ((IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr) 
                                     + (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update)))),2);
    bufp->fullBit(oldp+103,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable));
    bufp->fullBit(oldp+104,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update));
    bufp->fullBit(oldp+105,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
    bufp->fullBit(oldp+106,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                             & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
    bufp->fullBit(oldp+107,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save));
    bufp->fullBit(oldp+108,((((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                              & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                             | (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save))));
    bufp->fullBit(oldp+109,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+110,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal));
    bufp->fullBit(oldp+111,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    bufp->fullBit(oldp+112,(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
    bufp->fullCData(oldp+113,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state),3);
    bufp->fullCData(oldp+114,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count),5);
    bufp->fullCData(oldp+115,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index),4);
    bufp->fullCData(oldp+116,((0xfU & ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                            ? ((1U 
                                                & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                                ? 0U
                                                : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                            : 0U) : 
                                       ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                         ? ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                                             ? 0U : 
                                            ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                              ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                                              : ((0xfU 
                                                  == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                                  : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))))
                                         : 0U)))),4);
    bufp->fullBit(oldp+117,((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
    bufp->fullBit(oldp+118,((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
    bufp->fullBit(oldp+119,((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))));
    bufp->fullBit(oldp+120,(((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                             & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal))));
    bufp->fullCData(oldp+121,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data),8);
    bufp->fullBit(oldp+122,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal));
    bufp->fullBit(oldp+123,(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal));
    bufp->fullBit(oldp+124,(vlSelf->UART_Rx_Test__02Ei_clk));
    bufp->fullBit(oldp+125,(vlSelf->UART_Rx_Test__02Ei_rst_n));
    bufp->fullBit(oldp+126,(vlSelf->UART_Rx_Test__02Ei_stick));
    bufp->fullBit(oldp+127,(vlSelf->i_rx_en));
    bufp->fullBit(oldp+128,(vlSelf->i_fifo_full));
    bufp->fullBit(oldp+129,(vlSelf->i_rx_data));
    bufp->fullBit(oldp+130,(vlSelf->o_rx_done));
    bufp->fullBit(oldp+131,(vlSelf->UART_Tx_Data__02Ei_clk));
    bufp->fullBit(oldp+132,(vlSelf->UART_Tx_Data__02Ei_rst_n));
    bufp->fullBit(oldp+133,(vlSelf->UART_Tx_Data__02Ei_stick));
    bufp->fullBit(oldp+134,(vlSelf->i_tx_en));
    bufp->fullIData(oldp+135,(vlSelf->i_data),32);
    bufp->fullBit(oldp+136,(vlSelf->o_tx_data));
    bufp->fullBit(oldp+137,(vlSelf->o_tx_done));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->o_rx_done)))));
    bufp->fullCData(oldp+139,(((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
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
    bufp->fullCData(oldp+140,((0x1fU & ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
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
                                                 : 
                                                ((0xfU 
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
                                                 ? 
                                                ((7U 
                                                  == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                                   : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)))
                                                 : 0U))))),5);
    bufp->fullBit(oldp+141,(((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                             | (IData)(vlSelf->i_tx_en))));
    bufp->fullCData(oldp+142,(((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
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
    bufp->fullCData(oldp+143,((0x1fU & ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
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
                                                 : 
                                                ((0xfU 
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
                                                 ? 
                                                ((0xfU 
                                                  == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                                   : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)))
                                                 : 0U))))),5);
    bufp->fullBit(oldp+144,(vlSelf->tb_UART_Rx_Data__DOT__i_clk));
    bufp->fullBit(oldp+145,(vlSelf->tb_UART_Rx_Data__DOT__i_rst_n));
    bufp->fullBit(oldp+146,(vlSelf->tb_UART_Rx_Data__DOT__i_sel_data));
    bufp->fullBit(oldp+147,(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en));
    bufp->fullCData(oldp+148,(((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
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
    bufp->fullCData(oldp+149,(((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
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
