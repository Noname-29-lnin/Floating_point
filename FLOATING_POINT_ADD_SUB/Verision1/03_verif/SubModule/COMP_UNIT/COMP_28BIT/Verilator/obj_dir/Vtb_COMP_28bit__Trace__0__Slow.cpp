// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_COMP_28bit__Syms.h"


VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_COMP_28bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"i_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+48,0,"o_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"w_expect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+48,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_less_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_less_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"w_less_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_less_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_less_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"w_less_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"w_less_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_equal_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_equal_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"w_equal_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"w_equal_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_equal_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"w_equal_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"w_equal_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_i_data_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_3", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_5", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_6", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+12,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+18,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+51,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+24,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+75,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+30,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+36,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+54,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+85,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+42,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_top(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_top\n"); );
    // Body
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_COMP_28bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_COMP_28bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_register(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_COMP_28bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_COMP_28bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_COMP_28bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_COMP_28bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_const_0\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_COMP_28bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+92,(vlSelf->tb_COMP_28bit__DOT__i_rst_n));
    bufp->fullIData(oldp+93,(0x1cU),32);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_full_0\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_COMP_28bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_COMP_28bit__DOT__i_data_a),28);
    bufp->fullIData(oldp+2,(vlSelf->tb_COMP_28bit__DOT__i_data_b),28);
    bufp->fullBit(oldp+3,(vlSelf->tb_COMP_28bit__DOT__w_expect));
    bufp->fullIData(oldp+4,(vlSelf->tb_COMP_28bit__DOT__test_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_COMP_28bit__DOT__test_pass),32);
    bufp->fullCData(oldp+6,((0xfU & vlSelf->tb_COMP_28bit__DOT__i_data_a)),4);
    bufp->fullCData(oldp+7,((0xfU & vlSelf->tb_COMP_28bit__DOT__i_data_b)),4);
    bufp->fullCData(oldp+8,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                   >> 2U))),2);
    bufp->fullCData(oldp+9,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                   >> 2U))),2);
    bufp->fullCData(oldp+10,((3U & vlSelf->tb_COMP_28bit__DOT__i_data_a)),2);
    bufp->fullCData(oldp+11,((3U & vlSelf->tb_COMP_28bit__DOT__i_data_b)),2);
    bufp->fullCData(oldp+12,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 4U))),4);
    bufp->fullCData(oldp+13,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 4U))),4);
    bufp->fullCData(oldp+14,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 6U))),2);
    bufp->fullCData(oldp+15,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 6U))),2);
    bufp->fullCData(oldp+16,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 4U))),2);
    bufp->fullCData(oldp+17,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 4U))),2);
    bufp->fullCData(oldp+18,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 8U))),4);
    bufp->fullCData(oldp+19,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 8U))),4);
    bufp->fullCData(oldp+20,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+21,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+22,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 8U))),2);
    bufp->fullCData(oldp+23,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 8U))),2);
    bufp->fullCData(oldp+24,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+25,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+26,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0xeU))),2);
    bufp->fullCData(oldp+27,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0xeU))),2);
    bufp->fullCData(oldp+28,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0xcU))),2);
    bufp->fullCData(oldp+29,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0xcU))),2);
    bufp->fullCData(oldp+30,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+31,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+32,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x12U))),2);
    bufp->fullCData(oldp+33,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x12U))),2);
    bufp->fullCData(oldp+34,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x10U))),2);
    bufp->fullCData(oldp+35,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x10U))),2);
    bufp->fullCData(oldp+36,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+37,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+38,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+39,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+40,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x14U))),2);
    bufp->fullCData(oldp+41,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x14U))),2);
    bufp->fullCData(oldp+42,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+43,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+44,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x1aU))),2);
    bufp->fullCData(oldp+45,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x1aU))),2);
    bufp->fullCData(oldp+46,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                    >> 0x18U))),2);
    bufp->fullCData(oldp+47,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                    >> 0x18U))),2);
    bufp->fullBit(oldp+48,(vlSelf->tb_COMP_28bit__DOT__o_less));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_less));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_less));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_less));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_less));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_less));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_less));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_less));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_equal));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_equal));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_equal));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_equal));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_equal));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_equal));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_less_low));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_equal_low));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_less_high));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_equal_high));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_less_low));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_equal_low));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_less_high));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_equal_high));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_less_low));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_equal_low));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_less_high));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_equal_high));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_less_low));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_equal_low));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_less_high));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_equal_high));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_less_low));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_equal_low));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_less_high));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_equal_high));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_less_low));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_equal_low));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_less_high));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_equal_high));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_less_low));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_equal_low));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_less_high));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_equal_high));
    bufp->fullBit(oldp+91,(vlSelf->tb_COMP_28bit__DOT__i_clk));
}
