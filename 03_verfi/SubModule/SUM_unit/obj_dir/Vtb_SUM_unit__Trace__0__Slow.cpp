// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_SUM_unit__Syms.h"


VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_SUM_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"NUM_TEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+3,0,"i_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+73,0,"o_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+53,0,"o_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"expected_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+5,0,"expected_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+3,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+73,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+53,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_28BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+3,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+73,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+53,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+24,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+25,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+58,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_sub__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+70,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_init_top(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_init_top\n"); );
    // Body
    Vtb_SUM_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_SUM_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_SUM_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_register(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_SUM_unit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_SUM_unit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_SUM_unit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_SUM_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_const_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_const_0\n"); );
    // Init
    Vtb_SUM_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SUM_unit___024root*>(voidSelf);
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_SUM_unit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_const_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+76,(0x1cU),32);
    bufp->fullIData(oldp+77,(0x1f4U),32);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_full_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_full_0\n"); );
    // Init
    Vtb_SUM_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SUM_unit___024root*>(voidSelf);
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_SUM_unit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root__trace_full_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_SUM_unit__DOT__i_carry));
    bufp->fullIData(oldp+2,(vlSelf->tb_SUM_unit__DOT__i_data_a),28);
    bufp->fullIData(oldp+3,(vlSelf->tb_SUM_unit__DOT__i_data_b),28);
    bufp->fullIData(oldp+4,(vlSelf->tb_SUM_unit__DOT__expected_sum),28);
    bufp->fullBit(oldp+5,(vlSelf->tb_SUM_unit__DOT__expected_carry));
    bufp->fullIData(oldp+6,(vlSelf->tb_SUM_unit__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_SUM_unit__DOT__pass_count),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_SUM_unit__DOT__fail_count),32);
    bufp->fullCData(oldp+9,((0xfU & vlSelf->tb_SUM_unit__DOT__i_data_a)),4);
    bufp->fullCData(oldp+10,((0xfU & vlSelf->tb_SUM_unit__DOT__i_data_b)),4);
    bufp->fullCData(oldp+11,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 4U))),4);
    bufp->fullCData(oldp+12,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 4U))),4);
    bufp->fullCData(oldp+13,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 8U))),4);
    bufp->fullCData(oldp+14,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 8U))),4);
    bufp->fullCData(oldp+15,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+16,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+17,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+18,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+19,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+20,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+21,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+22,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+23,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p),7);
    bufp->fullCData(oldp+24,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g),7);
    bufp->fullBit(oldp+25,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
    bufp->fullCData(oldp+27,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_g),4);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p),4);
    bufp->fullBit(oldp+29,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+31,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+33,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+35,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+37,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+39,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+41,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+45,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+47,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+49,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.o_g));
    bufp->fullCData(oldp+51,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 7U))));
    bufp->fullCData(oldp+54,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c),8);
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 1U))));
    bufp->fullCData(oldp+56,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 2U))));
    bufp->fullCData(oldp+59,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 3U))));
    bufp->fullCData(oldp+62,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 4U))));
    bufp->fullCData(oldp+65,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 5U))));
    bufp->fullCData(oldp+68,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullBit(oldp+70,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 6U))));
    bufp->fullCData(oldp+71,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    bufp->fullIData(oldp+73,(vlSelf->tb_SUM_unit__DOT__o_sum),28);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum),4);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
}
