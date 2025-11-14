// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_UART_Tx_Data__Syms.h"


VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_init_sub__TOP__0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"i_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"o_w_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UART_SS_detect_start", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"i_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"o_w_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"w_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_start_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"w_next_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SS_detect_edge_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SS_detect_edge_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"POS_EDGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"w_n_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tb_UART_Tx_Data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"SIZE_DATA_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"o_stick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"i_tx_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"o_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_tx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"SIZE_DATA_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"SIZE_DATA_O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"o_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+8,0,"ptr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"ptr_rd_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"w_tx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UART_TX_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"OVER_SAMPLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_stick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"i_tx_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"i_fifo_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"i_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"o_tx_serial",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_tx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"SIZE_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"TRANSMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"STOP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"STOP_II",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"n_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"SIZE_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"n_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"w_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"SIZE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"n_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+18,0,"w_update_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"w_update_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"w_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("UART_BAUD_GEN_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"SIZE_BAUD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_baud_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1,0,"o_stick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"bdr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+21,0,"n_bdr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+22,0,"w_stick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_init_top(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_init_top\n"); );
    // Body
    Vtb_UART_Tx_Data___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_UART_Tx_Data___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_UART_Tx_Data___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_register(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_UART_Tx_Data___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_UART_Tx_Data___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_UART_Tx_Data___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_UART_Tx_Data___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_const_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_const_0\n"); );
    // Init
    Vtb_UART_Tx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Tx_Data___024root*>(voidSelf);
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_UART_Tx_Data___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_const_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+42,(1U),32);
    bufp->fullIData(oldp+43,(0U),32);
    bufp->fullIData(oldp+44,(0x20U),32);
    bufp->fullIData(oldp+45,(8U),32);
    bufp->fullIData(oldp+46,(0x10U),32);
    bufp->fullBit(oldp+47,(0U));
    bufp->fullIData(oldp+48,(3U),32);
    bufp->fullCData(oldp+49,(0U),3);
    bufp->fullCData(oldp+50,(1U),3);
    bufp->fullCData(oldp+51,(2U),3);
    bufp->fullCData(oldp+52,(4U),3);
    bufp->fullCData(oldp+53,(5U),3);
    bufp->fullCData(oldp+54,(6U),3);
    bufp->fullIData(oldp+55,(4U),32);
    bufp->fullIData(oldp+56,(0x18U),32);
    bufp->fullIData(oldp+57,(1U),24);
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_full_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_full_0\n"); );
    // Init
    Vtb_UART_Tx_Data___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_UART_Tx_Data___024root*>(voidSelf);
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_UART_Tx_Data___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_UART_Tx_Data___024root__trace_full_0_sub_0(Vtb_UART_Tx_Data___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Tx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Tx_Data___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_UART_Tx_Data__DOT__o_stick));
    bufp->fullBit(oldp+2,(vlSelf->tb_UART_Tx_Data__DOT__o_tx_data));
    bufp->fullBit(oldp+3,(vlSelf->tb_UART_Tx_Data__DOT__o_tx_done));
    bufp->fullCData(oldp+4,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[0]),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[1]),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[2]),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem[3]),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd),2);
    bufp->fullCData(oldp+9,((3U & ((IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd) 
                                   + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done)))),2);
    bufp->fullBit(oldp+10,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done));
    bufp->fullCData(oldp+11,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__mem
                             [vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd]),8);
    bufp->fullCData(oldp+12,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state),3);
    bufp->fullCData(oldp+13,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index),4);
    bufp->fullCData(oldp+14,((0xfU & ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                       ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                           ? 0U : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))
                                       : ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                           ? ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                               ? 0U
                                               : ((7U 
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
    bufp->fullBit(oldp+15,((7U == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index))));
    bufp->fullCData(oldp+16,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count),5);
    bufp->fullCData(oldp+17,((0x1fU & ((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                        ? ((2U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
                                             ? ((0xfU 
                                                 == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                  : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                                             : ((0xfU 
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
                                                : (
                                                   (0xfU 
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
                                                ? (
                                                   (0xfU 
                                                    == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))
                                                     : (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count)))
                                                : 0U))))),5);
    bufp->fullBit(oldp+18,((0xfU == (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count))));
    bufp->fullCData(oldp+19,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data),8);
    bufp->fullIData(oldp+20,(vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count),24);
    bufp->fullIData(oldp+21,(((IData)(vlSelf->tb_UART_Tx_Data__DOT__o_stick)
                               ? 0U : (0xffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)))),24);
    bufp->fullBit(oldp+22,((1U == vlSelf->tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count)));
    bufp->fullBit(oldp+23,(((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                            & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal))));
    bufp->fullBit(oldp+24,(((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
                            & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))));
    bufp->fullBit(oldp+25,(vlSelf->UART_SS_detect_start__DOT__w_start_save));
    bufp->fullBit(oldp+26,((((~ (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
                             & (IData)(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
                            | (IData)(vlSelf->UART_SS_detect_start__DOT__w_start_save))));
    bufp->fullBit(oldp+27,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+28,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal));
    bufp->fullBit(oldp+29,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal));
    bufp->fullBit(oldp+30,(vlSelf->UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal));
    bufp->fullBit(oldp+31,(vlSelf->i_clk));
    bufp->fullBit(oldp+32,(vlSelf->i_rst_n));
    bufp->fullBit(oldp+33,(vlSelf->i_start));
    bufp->fullBit(oldp+34,(vlSelf->i_done));
    bufp->fullBit(oldp+35,(vlSelf->o_w_start));
    bufp->fullBit(oldp+36,(vlSelf->tb_UART_Tx_Data__DOT__i_clk));
    bufp->fullBit(oldp+37,(vlSelf->tb_UART_Tx_Data__DOT__i_rst_n));
    bufp->fullBit(oldp+38,(vlSelf->tb_UART_Tx_Data__DOT__i_tx_en));
    bufp->fullIData(oldp+39,(vlSelf->tb_UART_Tx_Data__DOT__i_data),32);
    bufp->fullBit(oldp+40,(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start));
    bufp->fullCData(oldp+41,(((4U & (IData)(vlSelf->tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state))
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
