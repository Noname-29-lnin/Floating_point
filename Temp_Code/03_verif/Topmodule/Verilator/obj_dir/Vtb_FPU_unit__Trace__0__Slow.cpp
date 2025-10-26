// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_FPU_unit__Syms.h"


VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_init_sub__TOP__0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_FPU_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+319,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_fpu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"i_floating_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_floating_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"o_floating_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_fpu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"i_floating_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_floating_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"o_floating_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"w_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"w_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"w_exponent_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"w_exponent_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"w_mantissa_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+10,0,"w_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+158,0,"w_sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"w_exponent_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"w_mantissa_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+32,0,"w_EXPSWAP_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"w_EXPSWAP_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"w_EXPSWAP_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"w_EXPSUB_diff_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+36,0,"w_MAN_SWAP1_sign_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"w_MAN_SWAP1_sign_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"w_MAN_SWAP1_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+39,0,"w_MAN_SWAP1_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+88,0,"w_MAN_SHF_RIGHT_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+40,0,"w_MAN_SHF_RIGHT_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+159,0,"w_MAN_COMP_28BIT_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"w_MAN_PRE_SWAP_BY_MAN_compara",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_MAN_PRE_SWAP_BY_MAN_sign_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"w_MAN_PRE_SWAP_BY_MAN_sign_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"w_MAN_PRE_SWAP_BY_MAN_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+162,0,"w_MAN_PRE_SWAP_BY_MAN_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+214,0,"w_MAN_ALU_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+215,0,"w_MAN_ALU_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"w_LOPD_24BIT_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+217,0,"w_LOPD_24BIT_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"w_EXP_ADJUST_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"w_NORMALIZATION_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+310,0,"w_ROUNDING_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("EXP_ADJUST_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SIZE_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"i_underflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_lopd_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"i_exp_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"o_exp_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"w_exp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+221,0,"w_i_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"w_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+223,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+225,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+226,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+221,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+229,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+226,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+236,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXP_SUB_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SIZE_EXP_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"o_sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"w_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+44,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+47,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+328,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+57,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXP_SWAP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"o_compare",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"o_less_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"o_greater_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("COMP_LESS_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+322,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+26,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_24BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+216,0,"o_one_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+217,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"LOPD16_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"LOPD16_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+244,0,"LOPD16_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"LOPD8_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"LOPD8_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+247,0,"LOPD8_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"w_o_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+249,0,"w_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("LOPD_16bit_UNIT_LSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+242,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+244,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+251,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+253,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+251,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+257,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+255,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+257,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+253,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+264,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+266,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+263,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+262,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+264,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_UNIT_MSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+247,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+270,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+268,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+270,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_SUB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+275,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+278,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+332,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+328,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+281,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+333,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+288,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_ALU_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_fpu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+158,0,"i_sign_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"i_sign_min",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"i_man_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+162,0,"i_man_min",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+214,0,"o_man_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+215,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"w_i_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"w_n_man_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+165,0,"w_i_man_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+293,0,"w_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU_SUB_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+165,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+214,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+293,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+167,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+295,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+170,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+298,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+176,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+299,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+300,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+182,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+301,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+188,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+303,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+304,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+306,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+200,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+307,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+205,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+308,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_COMP_28BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+40,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+159,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+335,0,"NUM_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"w_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+150,0,"w_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+210,0,"less_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"equal_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("GEN_COMP_4BIT[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+336,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+337,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+337,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+337,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+96,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+100,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+108,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+114,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+120,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+124,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+133,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+132,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+130,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GEN_COMP_4BIT[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_comp4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+138,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_PRE_SWAP_BY_EXPONENT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"i_sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"i_man_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+10,0,"i_man_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+32,0,"i_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"o_sign_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_sign_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_man_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+39,0,"o_man_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+81,0,"w_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+82,0,"w_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+83,0,"w_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+84,0,"w_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("MAN_PRE_SWAP_BY_MAN_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"i_sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"i_man_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+88,0,"i_man_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+321,0,"i_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"o_sign_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"o_sign_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"o_man_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+162,0,"o_man_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+85,0,"w_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+157,0,"w_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+211,0,"w_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+212,0,"w_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->popPrefix();
    tracep->pushPrefix("NORMALIZATION_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"i_one_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+214,0,"i_mantissa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+311,0,"o_mantissa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+312,0,"w_shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("SHF_left_28bit_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+214,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+312,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("stage", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+313+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROUNDING_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"SIZE_MAN_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"i_man",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+310,0,"o_man_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+310,0,"w_man_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->pushPrefix("SHF_RIGHT_28BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+88,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("stage", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_init_top(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_init_top\n"); );
    // Body
    Vtb_FPU_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_FPU_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_FPU_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_register(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_FPU_unit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_FPU_unit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_FPU_unit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_FPU_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_const_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_const_0\n"); );
    // Init
    Vtb_FPU_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_FPU_unit___024root*>(voidSelf);
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_FPU_unit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_const_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+326,(1U),32);
    bufp->fullIData(oldp+327,(8U),32);
    bufp->fullBit(oldp+328,(1U));
    bufp->fullIData(oldp+329,(0x18U),32);
    bufp->fullIData(oldp+330,(5U),32);
    bufp->fullCData(oldp+331,(0x17U),8);
    bufp->fullCData(oldp+332,(7U),4);
    bufp->fullCData(oldp+333,(1U),4);
    bufp->fullIData(oldp+334,(0x1cU),32);
    bufp->fullIData(oldp+335,(7U),32);
    bufp->fullCData(oldp+336,(0U),4);
    bufp->fullBit(oldp+337,(0U));
    bufp->fullCData(oldp+338,(0U),2);
    bufp->fullIData(oldp+339,(2U),32);
    bufp->fullIData(oldp+340,(4U),32);
    bufp->fullIData(oldp+341,(0x10U),32);
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_full_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_full_0\n"); );
    // Init
    Vtb_FPU_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_FPU_unit___024root*>(voidSelf);
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_FPU_unit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_full_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_FPU_unit__DOT__i_rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_FPU_unit__DOT__i_fpu_op));
    bufp->fullIData(oldp+3,(vlSelf->tb_FPU_unit__DOT__i_floating_a),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_FPU_unit__DOT__i_floating_b),32);
    bufp->fullBit(oldp+5,((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                           >> 0x1fU)));
    bufp->fullBit(oldp+6,((vlSelf->tb_FPU_unit__DOT__i_floating_b 
                           >> 0x1fU)));
    bufp->fullCData(oldp+7,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                      >> 0x17U))),8);
    bufp->fullCData(oldp+8,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x17U))),8);
    bufp->fullIData(oldp+9,((0x800000U | (0x7fffffU 
                                          & vlSelf->tb_FPU_unit__DOT__i_floating_a))),24);
    bufp->fullIData(oldp+10,((0x800000U | (0x7fffffU 
                                           & vlSelf->tb_FPU_unit__DOT__i_floating_b))),24);
    bufp->fullBit(oldp+11,((1U & ((((~ (IData)((0U 
                                                != 
                                                (0x6000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x19U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x19U)) 
                                     & (IData)((0x6000000U 
                                                == 
                                                (0x6000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                           >> 0x1aU)) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                          >> 0x1aU)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                     >> 0x19U))))) 
                                     & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x1800000U 
                                                      & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                         & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                            >> 0x17U)) 
                                        | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x17U)) 
                                            & (IData)(
                                                      (0x1800000U 
                                                       == 
                                                       (0x1800000U 
                                                        & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                           | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                  >> 0x18U)) 
                                              & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                                 >> 0x18U)))))))));
    bufp->fullBit(oldp+12,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                 ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                >> 0x19U))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                    >> 0x17U)))))))));
    bufp->fullCData(oldp+13,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                      >> 0x1bU))),4);
    bufp->fullCData(oldp+14,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x1bU))),4);
    bufp->fullBit(oldp+15,((1U & (((~ (IData)((0U != 
                                               (0x18000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x1bU)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                        >> 0x1bU)) 
                                    & (IData)((0x18000000U 
                                               == (0x18000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1cU)))))));
    bufp->fullBit(oldp+16,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                               >> 0x1bU))))))));
    bufp->fullBit(oldp+17,((1U & (((~ (IData)((0U != 
                                               (0x60000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x1dU)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                        >> 0x1dU)) 
                                    & (IData)((0x60000000U 
                                               == (0x60000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1eU)))))));
    bufp->fullCData(oldp+18,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                    >> 0x1dU))),2);
    bufp->fullCData(oldp+19,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                    >> 0x1dU))),2);
    bufp->fullCData(oldp+20,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                    >> 0x1bU))),2);
    bufp->fullCData(oldp+21,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                    >> 0x1bU))),2);
    bufp->fullCData(oldp+22,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                      >> 0x17U))),4);
    bufp->fullCData(oldp+23,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x17U))),4);
    bufp->fullBit(oldp+24,((1U & (((~ (IData)((0U != 
                                               (0x1800000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x17U)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                        >> 0x17U)) 
                                    & (IData)((0x1800000U 
                                               == (0x1800000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                          >> 0x18U)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x18U)))))));
    bufp->fullBit(oldp+25,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                               >> 0x17U))))))));
    bufp->fullBit(oldp+26,((1U & (((~ (IData)((0U != 
                                               (0x6000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                      >> 0x19U)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                        >> 0x19U)) 
                                    & (IData)((0x6000000U 
                                               == (0x6000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1aU)))))));
    bufp->fullBit(oldp+27,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                               >> 0x19U))))))));
    bufp->fullCData(oldp+28,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                    >> 0x19U))),2);
    bufp->fullCData(oldp+29,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                    >> 0x19U))),2);
    bufp->fullCData(oldp+30,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                    >> 0x17U))),2);
    bufp->fullCData(oldp+31,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                    >> 0x17U))),2);
    bufp->fullBit(oldp+32,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare));
    bufp->fullCData(oldp+33,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max),8);
    bufp->fullCData(oldp+34,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min),8);
    bufp->fullCData(oldp+35,(((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullBit(oldp+36,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                  >> 0x18U))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                  >> 0x18U))));
    bufp->fullIData(oldp+38,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
    bufp->fullIData(oldp+39,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
    bufp->fullIData(oldp+40,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            << 4U))),28);
    bufp->fullCData(oldp+41,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max))),4);
    bufp->fullCData(oldp+42,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+43,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),8);
    bufp->fullBit(oldp+44,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+45,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                               << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+46,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullBit(oldp+47,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullCData(oldp+48,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),4);
    bufp->fullCData(oldp+49,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullBit(oldp+50,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+51,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+52,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+53,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+54,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+55,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                         >> 4U)))),4);
    bufp->fullCData(oldp+56,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullBit(oldp+57,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+58,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+59,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+60,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+61,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+62,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+63,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
    bufp->fullCData(oldp+64,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 2U))),2);
    bufp->fullCData(oldp+65,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
    bufp->fullCData(oldp+66,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 4U))),4);
    bufp->fullCData(oldp+67,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 6U))),2);
    bufp->fullCData(oldp+68,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 4U))),2);
    bufp->fullCData(oldp+69,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 8U))),4);
    bufp->fullCData(oldp+70,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+71,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 8U))),2);
    bufp->fullCData(oldp+72,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+73,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xeU))),2);
    bufp->fullCData(oldp+74,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xcU))),2);
    bufp->fullCData(oldp+75,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+76,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0x12U))),2);
    bufp->fullCData(oldp+77,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0x10U))),2);
    bufp->fullCData(oldp+78,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+79,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0x16U))),2);
    bufp->fullCData(oldp+80,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0x14U))),2);
    bufp->fullIData(oldp+81,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
    bufp->fullIData(oldp+82,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
    bufp->fullIData(oldp+83,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
    bufp->fullIData(oldp+84,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
    bufp->fullIData(oldp+85,((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                              << 4U)),29);
    bufp->fullCData(oldp+86,(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
    bufp->fullIData(oldp+87,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                            << 4U))),28);
    bufp->fullIData(oldp+88,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [5U]),28);
    bufp->fullCData(oldp+89,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                              [5U])),4);
    bufp->fullBit(oldp+90,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 2U))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U]))))))));
    bufp->fullBit(oldp+91,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U])))))));
    bufp->fullBit(oldp+92,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 2U))))))));
    bufp->fullCData(oldp+93,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 2U))),2);
    bufp->fullCData(oldp+94,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                              [5U])),2);
    bufp->fullCData(oldp+95,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                      [5U] >> 4U))),4);
    bufp->fullBit(oldp+96,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 7U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 6U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U)) | ((
                                                   (~ 
                                                    (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                  | ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 7U)) 
                                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 3U)))) 
                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__DOT__w_equal_high) 
                                     & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 5U) 
                                             | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U))) 
                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                        | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)) 
                                            & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 1U) 
                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                           | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 5U)) 
                                              & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 4U) 
                                                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))))));
    bufp->fullBit(oldp+98,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 5U) 
                                       | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 4U))) 
                                   & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                  | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 4U)) 
                                      & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 1U) & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                     | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 5U)) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 1U)))))));
    bufp->fullBit(oldp+99,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U) 
                                               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))))));
    bufp->fullBit(oldp+100,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 7U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 6U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U)) | ((
                                                   (~ 
                                                    (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                  | ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 7U)) 
                                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 3U)))))));
    bufp->fullCData(oldp+101,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 6U))),2);
    bufp->fullCData(oldp+102,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 4U))),2);
    bufp->fullCData(oldp+103,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 8U))),4);
    bufp->fullBit(oldp+104,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xbU) 
                                         | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xaU))) 
                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 6U)) | (
                                                   ((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xaU)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                   | ((~ 
                                                       (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0xbU)) 
                                                      & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 7U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 9U) 
                                              | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 8U))) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 4U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 8U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                            | ((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 9U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 4U)))))))));
    bufp->fullBit(oldp+106,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 9U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 8U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 4U)) | ((
                                                   (~ 
                                                    (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 8U)) 
                                                   & (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                  | ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 9U)) 
                                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 5U)))))));
    bufp->fullBit(oldp+107,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 8U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 4U)))))))));
    bufp->fullBit(oldp+108,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0xbU) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xaU))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 6U)) | ((
                                                   (~ 
                                                    (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0xaU)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                  | ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 0xbU)) 
                                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 7U)))))));
    bufp->fullCData(oldp+109,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xaU))),2);
    bufp->fullCData(oldp+110,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 8U))),2);
    bufp->fullCData(oldp+111,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0xcU))),4);
    bufp->fullBit(oldp+112,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xfU) 
                                         | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xeU))) 
                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0xaU)) | 
                                    (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xeU)) 
                                      & (IData)((0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU)) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xbU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xdU) 
                                              | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU))) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 8U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU)) 
                                             & (IData)(
                                                       (0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                            | ((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xdU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 9U)))))))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 8U)))))))));
    bufp->fullBit(oldp+114,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0xdU) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xcU))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 8U)) | ((
                                                   (~ 
                                                    (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0xcU)) 
                                                   & (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                  | ((~ 
                                                      (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 0xdU)) 
                                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                        >> 9U)))))));
    bufp->fullBit(oldp+115,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 8U)))))))));
    bufp->fullBit(oldp+116,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0xfU) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xeU))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xaU)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0xeU)) 
                                     & (IData)((0xc00U 
                                                == 
                                                (0xc00U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xfU)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xbU)))))));
    bufp->fullCData(oldp+117,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xeU))),2);
    bufp->fullCData(oldp+118,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xcU))),2);
    bufp->fullCData(oldp+119,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x10U))),4);
    bufp->fullBit(oldp+120,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x13U) 
                                         | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x12U))) 
                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0xeU)) | 
                                    (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x12U)) 
                                      & (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U)) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xfU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x11U) 
                                              | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x10U))) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0xcU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x10U)) 
                                             & (IData)(
                                                       (0x3000U 
                                                        == 
                                                        (0x3000U 
                                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                            | ((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x11U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0xdU)))))))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xcU)))))))));
    bufp->fullBit(oldp+122,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x11U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x10U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xcU)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x10U)) 
                                     & (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x11U)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xdU)))))));
    bufp->fullBit(oldp+123,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x10U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+124,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x13U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x12U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xeU)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x12U)) 
                                     & (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x13U)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xfU)))))));
    bufp->fullCData(oldp+125,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x12U))),2);
    bufp->fullCData(oldp+126,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x10U))),2);
    bufp->fullCData(oldp+127,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U))),4);
    bufp->fullBit(oldp+128,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x17U) 
                                         | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x16U))) 
                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0x12U)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x16U)) 
                                        & (IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x17U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x13U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x15U) 
                                              | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x14U))) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x10U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x14U)) 
                                             & (IData)(
                                                       (0x30000U 
                                                        == 
                                                        (0x30000U 
                                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                            | ((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x15U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0x11U)))))))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U)))))))));
    bufp->fullBit(oldp+130,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x15U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x14U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x10U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x14U)) 
                                     & (IData)((0x30000U 
                                                == 
                                                (0x30000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x15U)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x11U)))))));
    bufp->fullBit(oldp+131,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x14U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x10U)))))))));
    bufp->fullBit(oldp+132,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x17U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x16U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x12U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x16U)) 
                                     & (IData)((0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x17U)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x13U)))))));
    bufp->fullCData(oldp+133,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x16U))),2);
    bufp->fullCData(oldp+134,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x14U))),2);
    bufp->fullCData(oldp+135,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U))),4);
    bufp->fullBit(oldp+136,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x1bU) 
                                         | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1aU))) 
                                     & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0x16U)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1aU)) 
                                        & (IData)((0xc00000U 
                                                   == 
                                                   (0xc00000U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1bU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x17U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x19U) 
                                              | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x18U))) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x14U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x18U)) 
                                             & (IData)(
                                                       (0x300000U 
                                                        == 
                                                        (0x300000U 
                                                         & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                            | ((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x19U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0x15U)))))))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x18U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x14U)))))))));
    bufp->fullBit(oldp+138,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x19U) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x18U))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x14U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x18U)) 
                                     & (IData)((0x300000U 
                                                == 
                                                (0x300000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x19U)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x15U)))))));
    bufp->fullBit(oldp+139,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x18U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x14U)))))))));
    bufp->fullBit(oldp+140,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x1bU) 
                                        | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x1aU))) 
                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x16U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x1aU)) 
                                     & (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x1bU)) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x17U)))))));
    bufp->fullCData(oldp+141,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x1aU))),2);
    bufp->fullCData(oldp+142,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x18U))),2);
    bufp->fullIData(oldp+143,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
    bufp->fullIData(oldp+144,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
    bufp->fullIData(oldp+145,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
    bufp->fullIData(oldp+146,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
    bufp->fullIData(oldp+147,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
    bufp->fullIData(oldp+148,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
    bufp->fullCData(oldp+149,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less),7);
    bufp->fullCData(oldp+150,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal),7);
    bufp->fullBit(oldp+151,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullBit(oldp+152,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullBit(oldp+153,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullBit(oldp+154,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullBit(oldp+155,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullBit(oldp+156,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__DOT__w_equal_high));
    bufp->fullIData(oldp+157,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
    bufp->fullBit(oldp+158,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+159,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+161,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
    bufp->fullIData(oldp+162,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
    bufp->fullBit(oldp+163,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
    bufp->fullIData(oldp+164,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
    bufp->fullIData(oldp+165,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
    bufp->fullCData(oldp+166,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
    bufp->fullCData(oldp+167,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
    bufp->fullCData(oldp+168,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
    bufp->fullCData(oldp+169,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
    bufp->fullBit(oldp+170,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+171,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)))))))));
    bufp->fullCData(oldp+172,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+173,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+174,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 4U))),4);
    bufp->fullCData(oldp+175,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 4U))),4);
    bufp->fullBit(oldp+176,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+177,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+178,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+179,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+180,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 8U))),4);
    bufp->fullCData(oldp+181,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 8U))),4);
    bufp->fullBit(oldp+182,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+183,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+184,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+185,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+186,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+187,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+188,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+189,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+190,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+191,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+192,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+193,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+194,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+195,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+196,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+197,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+198,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+199,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+200,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+201,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+202,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+203,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+204,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+205,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+206,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+207,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                  >> 2U)) 
                                              | ((IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+208,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+209,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+210,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain),8);
    bufp->fullIData(oldp+211,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
    bufp->fullIData(oldp+212,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
    bufp->fullCData(oldp+213,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                          ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                         << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
    bufp->fullIData(oldp+214,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man),28);
    bufp->fullBit(oldp+215,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow));
    bufp->fullCData(oldp+216,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),5);
    bufp->fullBit(oldp+217,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag));
    bufp->fullBit(oldp+218,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   >> 3U))));
    bufp->fullCData(oldp+219,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),8);
    bufp->fullCData(oldp+220,(((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                          ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullBit(oldp+221,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
    bufp->fullCData(oldp+222,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow)
                                ? 1U : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                         ? 0U : (0xffU 
                                                 & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)))))),8);
    bufp->fullBit(oldp+223,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                             | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+224,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+225,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullBit(oldp+226,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullCData(oldp+227,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
    bufp->fullCData(oldp+228,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullBit(oldp+229,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+230,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+231,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+232,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+233,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+234,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
    bufp->fullCData(oldp+235,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullBit(oldp+236,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+237,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+238,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+239,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+240,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullIData(oldp+241,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))),24);
    bufp->fullSData(oldp+242,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 0xcU) | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             << 8U) 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 4U) 
                                               | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))),16);
    bufp->fullCData(oldp+243,(((8U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                      << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                        ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                        ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                        : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                            ? 
                                                           (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                >> 1U)) 
                                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                               >> 3U))
                                                            : 
                                                           (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                >> 1U)) 
                                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                               >> 3U)))
                                                           : 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                            ? 
                                                           (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                >> 1U)) 
                                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                               >> 3U))
                                                            : 
                                                           (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                >> 1U)) 
                                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                               >> 3U))))))))),4);
    bufp->fullBit(oldp+244,((((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                      >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1))));
    bufp->fullCData(oldp+245,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullCData(oldp+246,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
                                << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                             ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                             : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)
                                                  ? 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))
                                                  : 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))))))),3);
    bufp->fullBit(oldp+247,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    bufp->fullCData(oldp+248,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position),5);
    bufp->fullCData(oldp+249,(((0xf0U & (0x10U ^ ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                     >> 4U)) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U))) 
                               | (0xfU & (7U ^ ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
                                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))))),8);
    bufp->fullCData(oldp+250,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
                                << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                             ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                             : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                  ? 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))
                                                  : 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))))))),3);
    bufp->fullBit(oldp+251,((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                       | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                           >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))))));
    bufp->fullCData(oldp+252,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                                << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                             ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                             : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                  ? 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))
                                                  : 
                                                 (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U))))))),3);
    bufp->fullBit(oldp+253,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1));
    bufp->fullCData(oldp+254,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullBit(oldp+255,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                          >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+256,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)))));
    bufp->fullCData(oldp+258,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullCData(oldp+259,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullCData(oldp+260,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullCData(oldp+261,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullBit(oldp+262,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                          >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+263,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
    bufp->fullCData(oldp+265,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullCData(oldp+266,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullCData(oldp+267,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+268,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                          >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+269,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
    bufp->fullCData(oldp+271,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                << 1U) | (1U & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   >> 3U))))),2);
    bufp->fullCData(oldp+272,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullCData(oldp+273,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullCData(oldp+274,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),8);
    bufp->fullBit(oldp+275,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                             | ((0xfU == (0xfU & (1U 
                                                  ^ 
                                                  (~ 
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                    >> 4U))))) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C)))));
    bufp->fullCData(oldp+276,((((IData)((0xfU == (0xfU 
                                                  & (1U 
                                                     ^ 
                                                     (~ 
                                                      ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                       >> 4U)))))) 
                                << 1U) | (0xfU == (0xfU 
                                                   & (7U 
                                                      ^ 
                                                      (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))))),2);
    bufp->fullCData(oldp+277,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullBit(oldp+278,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C));
    bufp->fullCData(oldp+279,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),4);
    bufp->fullCData(oldp+280,((0xfU & (7U ^ ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
                                             ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),4);
    bufp->fullBit(oldp+281,((0xfU == (0xfU & (7U ^ 
                                              (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))))));
    bufp->fullBit(oldp+282,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+283,((7U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),4);
    bufp->fullCData(oldp+284,((0xfU & (7U ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))),4);
    bufp->fullCData(oldp+285,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+286,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                          >> 4U)))),4);
    bufp->fullCData(oldp+287,((0xfU & (1U ^ ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                 >> 4U)) 
                                             ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))),4);
    bufp->fullBit(oldp+288,((0xfU == (0xfU & (1U ^ 
                                              (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+289,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+290,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                        >> 4U)))),4);
    bufp->fullCData(oldp+291,((0xfU & (1U ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                >> 4U))))),4);
    bufp->fullCData(oldp+292,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+293,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 7U))));
    bufp->fullCData(oldp+294,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
    bufp->fullBit(oldp+295,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
    bufp->fullCData(oldp+296,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum),4);
    bufp->fullCData(oldp+297,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullBit(oldp+298,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 1U))));
    bufp->fullCData(oldp+299,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 2U))));
    bufp->fullCData(oldp+301,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 3U))));
    bufp->fullCData(oldp+303,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+304,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 4U))));
    bufp->fullCData(oldp+305,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+306,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 5U))));
    bufp->fullCData(oldp+307,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+308,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 6U))));
    bufp->fullCData(oldp+309,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullIData(oldp+310,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                ? 0U : (0xffffffU & 
                                        (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow)
                                           ? (0x8000000U 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                 << 3U) 
                                                                | (7U 
                                                                   & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum) 
                                                                      >> 1U)))))))))
                                           : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                               ? vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man
                                               : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                              [5U])) 
                                         >> 4U)))),24);
    bufp->fullIData(oldp+311,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                ? 0U : ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow)
                                         ? (0x8000000U 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                               << 3U) 
                                                              | (7U 
                                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum) 
                                                                    >> 1U)))))))))
                                         : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                             ? vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man
                                             : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                            [5U])))),28);
    bufp->fullIData(oldp+312,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                              [5U]),28);
    bufp->fullIData(oldp+313,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
    bufp->fullIData(oldp+314,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
    bufp->fullIData(oldp+315,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
    bufp->fullIData(oldp+316,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
    bufp->fullIData(oldp+317,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
    bufp->fullIData(oldp+318,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    bufp->fullBit(oldp+319,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->fullIData(oldp+320,(((0x80000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                               << 3U)) 
                               | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                     ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                              << 4U) 
                                             | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                   << 0x17U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                                 ? 0U
                                                 : 
                                                (0x7fffffU 
                                                 & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow)
                                                      ? 
                                                     (0x8000000U 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                << 0xfU) 
                                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum) 
                                                                              >> 1U)))))))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                                       ? vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man
                                                       : 
                                                      vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                                      [5U])) 
                                                    >> 4U)))))),32);
    bufp->fullBit(oldp+321,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara));
    bufp->fullBit(oldp+322,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0x60000000U 
                                                  & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                        >> 0x1dU)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                            >> 0x1dU)) 
                                        & (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                              >> 0x1eU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                             >> 0x1eU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                             >> 0x1bU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                 >> 0x1bU)) 
                                             & (IData)(
                                                       (0x18000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                   >> 0x1cU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                                  >> 0x1cU)))))))));
    bufp->fullBit(oldp+323,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                     >> 0x1bU))))))));
    bufp->fullBit(oldp+324,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain))));
    bufp->fullCData(oldp+325,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain),8);
}
