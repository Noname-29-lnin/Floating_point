// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_unit__Syms.h"


VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_init_sub__TOP__0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_LOPD_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"SIZE_LOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"o_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"SIZE_LOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"o_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_one_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"w_i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"w_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"w_o_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"w_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"w_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+25,0,"w_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+25,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_16bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+26,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_16bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+28,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+45,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+45,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_init_top(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_init_top\n"); );
    // Body
    Vtb_LOPD_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_register(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_LOPD_unit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_LOPD_unit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_LOPD_unit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_LOPD_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_const_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_const_0\n"); );
    // Init
    Vtb_LOPD_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_unit___024root*>(voidSelf);
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_unit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_const_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+54,(0x20U),32);
    bufp->fullIData(oldp+55,(5U),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_o_data),32);
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_full_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_full_0\n"); );
    // Init
    Vtb_LOPD_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_unit___024root*>(voidSelf);
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_unit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_unit___024root__trace_full_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_LOPD_unit__DOT__o_addr),32);
    bufp->fullCData(oldp+2,(vlSelf->tb_LOPD_unit__DOT__o_one_position),5);
    bufp->fullBit(oldp+3,(vlSelf->tb_LOPD_unit__DOT__o_zero_flag));
    bufp->fullIData(oldp+4,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data),32);
    bufp->fullIData(oldp+6,((0xffffU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),17);
    bufp->fullCData(oldp+7,((0xffU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),8);
    bufp->fullCData(oldp+8,((0xfU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),4);
    bufp->fullCData(oldp+9,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                     >> 4U))),4);
    bufp->fullCData(oldp+10,((0xffU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                       >> 8U))),8);
    bufp->fullCData(oldp+11,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                      >> 8U))),4);
    bufp->fullCData(oldp+12,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                      >> 0xcU))),4);
    bufp->fullIData(oldp+13,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                              >> 0x10U)),17);
    bufp->fullCData(oldp+14,((0xffU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+15,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+16,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+17,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                              >> 0x18U)),8);
    bufp->fullCData(oldp+18,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+19,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                              >> 0x1cU)),4);
    bufp->fullBit(oldp+20,(vlSelf->tb_LOPD_unit__DOT__i_clk));
    bufp->fullBit(oldp+21,(vlSelf->tb_LOPD_unit__DOT__i_rst_n));
    bufp->fullIData(oldp+22,(vlSelf->tb_LOPD_unit__DOT__i_addr),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_LOPD_unit__DOT__i_data),32);
    bufp->fullCData(oldp+24,(((0x10U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                         ? 
                                                        (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))
                                                         : 
                                                        (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1))) 
                                                       << 3U)) 
                                                   | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                         : 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                               ? 
                                                              ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                                ? 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                                 ? 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                                 >> 1U)
                                                                 : 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                                 >> 1U))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                                 ? 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                                 >> 1U)
                                                                 : 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                                 >> 1U)))
                                                               : 
                                                              ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                                ? 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                                 ? 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                                 >> 1U)
                                                                 : 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                                 >> 1U))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                                 ? 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                                 >> 1U)
                                                                 : 
                                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                                 >> 1U)))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                                ? 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                                 ? 
                                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                                 : 
                                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))
                                                                : 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                                 ? 
                                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                                 : 
                                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))))),5);
    bufp->fullBit(oldp+25,(((((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                   >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                              >> 1U) 
                                             | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                             & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                            & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1))));
    bufp->fullCData(oldp+26,(((8U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                                     << 3U)) | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                          >> 1U))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                          >> 1U))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                           ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                           : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                           ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                           : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))),4);
    bufp->fullBit(oldp+27,((((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                  >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                             >> 1U) 
                                            | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                            & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))));
    bufp->fullCData(oldp+28,(((8U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)) 
                                     << 3U)) | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                          ? 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                          >> 1U))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                          ? 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                          >> 1U))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                           ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                           : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                           ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                           : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))),4);
    bufp->fullBit(oldp+29,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1));
    bufp->fullCData(oldp+30,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
                               << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                  ? 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                  >> 1U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                   ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                   : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+31,((1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                                  >> 1U) 
                                                 | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))))));
    bufp->fullCData(oldp+32,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                               << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                  ? 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                  >> 1U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                   ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                   : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+33,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1));
    bufp->fullBit(oldp+34,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                                 >> 1U) 
                                                | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))));
    bufp->fullCData(oldp+35,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)))));
    bufp->fullCData(oldp+37,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->fullBit(oldp+38,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                      >> 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->fullCData(oldp+39,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
    bufp->fullCData(oldp+41,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->fullCData(oldp+42,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16) 
                               << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                  ? 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                  >> 1U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                   ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                   : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+43,((1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16))))));
    bufp->fullCData(oldp+44,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                               << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                  ? 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                  >> 1U)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                   ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                   : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+45,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1));
    bufp->fullBit(oldp+46,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000U 
                                                         & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->fullCData(oldp+47,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)))));
    bufp->fullCData(oldp+49,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->fullBit(oldp+50,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                      >> 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->fullCData(oldp+51,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)))));
    bufp->fullCData(oldp+53,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
}
