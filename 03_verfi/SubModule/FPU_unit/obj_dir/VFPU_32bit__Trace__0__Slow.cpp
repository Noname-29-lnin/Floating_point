// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPU_32bit__Syms.h"


VL_ATTR_COLD void VFPU_32bit___024root__trace_init_sub__TOP__0(VFPU_32bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+147,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+148,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FPU_32bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+148,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"w_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"w_exponent_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"w_exponent_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"w_mantissa_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+156,0,"w_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1,0,"w_sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"w_exponent_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_mantissa_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"EXP_o_exp_diff_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"EXP_o_exp_diff_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"MAN_o_mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+99,0,"MAN_o_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"NOR_o_lopd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"NOR_o_mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+160,0,"NOR_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"ROU_o_mantissa_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+137,0,"EXP_LOPD_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("EXP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SIZE_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"i_exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"i_exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"i_underflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_lopd_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"o_exp_diff_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"o_exp_diff_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"o_exp_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"w_exp_greater",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("EXP_ADJUST_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SIZE_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"i_underflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_lopd_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"i_exp_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"o_exp_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"w_exp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"w_underflow_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"w_overflow_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"SIZE_PADDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"w_lopd_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+165,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+138,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+99,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+141,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXP_DIFF_EXPONENT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SIZE_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"i_exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"i_exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"o_exp_greater",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"o_diff_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"o_diff_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"w_less_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"w_greater_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("EXP_SUB_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SIZE_EXP_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"o_sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"w_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+207,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EX_SWAP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"o_compare",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"o_less_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"o_greater_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FPU_NOR_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+208,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"i_mantissa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+136,0,"o_lopd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"o_mantissa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+160,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"w_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"w_o_data_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("LOPD_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+160,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+171,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_16bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+170,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+171,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+174,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+176,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+174,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+179,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+177,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+180,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+179,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+176,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+183,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+181,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+183,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_16bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+172,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+186,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+188,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+186,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+189,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+188,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+188,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+210,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SHF_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+194+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FPU_ROUDING_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"SIZE_MANTISSA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"i_mantissa_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+200,0,"o_mantissa_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->pushPrefix("MANTISSA_UNTI", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"SIZE_MANTISSA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"i_sign_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"i_mantissa_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+152,0,"i_sign_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"i_mantissa_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+147,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2,0,"i_diff_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_diff_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"o_sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"o_mantissa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+99,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"w_mantiss_less_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+28,0,"w_mantiss_less_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+29,0,"w_mantiss_greater_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+30,0,"w_mantiss_less_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+31,0,"w_mantiss_greater_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+32,0,"w_i_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"w_o_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"SIZE_MANTISSA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"i_op_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1,0,"i_sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"i_mantissa_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+35,0,"i_mantissa_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+99,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"o_sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"o_mantissa_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+36,0,"w_carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"w_n_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+38,0,"w_i_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("ALU_COMM_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"SIZE_SUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+38,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+98,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+99,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SUM_UNIT_CLA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+38,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+98,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+99,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+43,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+120,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+122,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+124,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MANTISSA_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+208,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"SIZE_MANTISSA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"i_diff_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"i_data_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+91,0,"o_data_shift",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("SHF_shift_right_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"LEFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+91,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("GEN_SHIFT_RIGHT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("SHF_SHIFT_RIGHT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+91,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("stage_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MANTISSA_swap_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"SIZE_MANTISSA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"i_sign_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"i_mantissa_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+87,0,"i_sign_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"i_mantissa_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+1,0,"o_sign_greater",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"o_mantissa_greater",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+33,0,"o_sign_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"o_mantissa_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+89,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"w_mantissa_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+28,0,"w_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+31,0,"w_mantissa_greate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+30,0,"w_mantissa_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_init_top(VFPU_32bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_init_top\n"); );
    // Body
    VFPU_32bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VFPU_32bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFPU_32bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFPU_32bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFPU_32bit___024root__trace_register(VFPU_32bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VFPU_32bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFPU_32bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFPU_32bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFPU_32bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_const_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFPU_32bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_const_0\n"); );
    // Init
    VFPU_32bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFPU_32bit___024root*>(voidSelf);
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFPU_32bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_const_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+203,(1U),32);
    bufp->fullIData(oldp+204,(vlSelf->FPU_32bit__DOT__ROU_o_mantissa_result),23);
    bufp->fullIData(oldp+205,(8U),32);
    bufp->fullIData(oldp+206,(0U),32);
    bufp->fullBit(oldp+207,(1U));
    bufp->fullIData(oldp+208,(5U),32);
    bufp->fullIData(oldp+209,(0x1cU),32);
    bufp->fullCData(oldp+210,(0U),2);
    bufp->fullCData(oldp+211,(0U),4);
    bufp->fullIData(oldp+212,(0x20U),32);
    bufp->fullIData(oldp+213,(2U),32);
    bufp->fullIData(oldp+214,(4U),32);
    bufp->fullIData(oldp+215,(0x10U),32);
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_full_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFPU_32bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_full_0\n"); );
    // Init
    VFPU_32bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFPU_32bit___024root*>(voidSelf);
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFPU_32bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_full_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                 >> 0x1cU))));
    bufp->fullBit(oldp+2,(vlSelf->FPU_32bit__DOT__EXP_o_exp_diff_signal));
    bufp->fullCData(oldp+3,(((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                              << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                        ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullCData(oldp+4,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp),8);
    bufp->fullCData(oldp+5,((0xfU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp))),4);
    bufp->fullCData(oldp+6,((0xfU & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+7,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp),8);
    bufp->fullCData(oldp+8,((0xffU & (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp)))),8);
    bufp->fullBit(oldp+9,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                           | ((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                              & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+10,((((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                               << 1U) | (0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+11,((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullBit(oldp+12,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullCData(oldp+13,((0xfU & (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp)))),4);
    bufp->fullCData(oldp+14,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullBit(oldp+15,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+16,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+17,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+18,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+19,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+20,((0xfU & (~ ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp) 
                                         >> 4U)))),4);
    bufp->fullCData(oldp+21,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullBit(oldp+22,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+23,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+24,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+25,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+26,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullIData(oldp+27,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0),29);
    bufp->fullIData(oldp+28,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1),29);
    bufp->fullIData(oldp+29,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a),29);
    bufp->fullIData(oldp+30,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0),29);
    bufp->fullIData(oldp+31,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0),29);
    bufp->fullIData(oldp+32,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0)),32);
    bufp->fullBit(oldp+33,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0 
                                  >> 0x1cU))));
    bufp->fullIData(oldp+34,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0)),28);
    bufp->fullIData(oldp+35,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0)),28);
    bufp->fullBit(oldp+36,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in));
    bufp->fullIData(oldp+37,((0xfffffffU & (~ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0))),28);
    bufp->fullIData(oldp+38,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b),28);
    bufp->fullCData(oldp+39,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p),7);
    bufp->fullCData(oldp+40,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g),7);
    bufp->fullCData(oldp+41,((0xfU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0)),4);
    bufp->fullCData(oldp+42,((0xfU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b)),4);
    bufp->fullBit(oldp+43,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+44,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g)))))))));
    bufp->fullCData(oldp+45,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+46,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+47,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 4U))),4);
    bufp->fullCData(oldp+48,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 4U))),4);
    bufp->fullBit(oldp+49,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+50,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+51,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+52,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+53,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 8U))),4);
    bufp->fullCData(oldp+54,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 8U))),4);
    bufp->fullBit(oldp+55,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+56,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+57,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+58,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+59,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+60,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 0xcU))),4);
    bufp->fullBit(oldp+61,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+62,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+63,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+64,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+65,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+66,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+67,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+68,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+69,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+70,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+71,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 0x14U))),4);
    bufp->fullCData(oldp+72,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 0x14U))),4);
    bufp->fullBit(oldp+73,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+74,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+75,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+76,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+77,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                      >> 0x18U))),4);
    bufp->fullCData(oldp+78,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                      >> 0x18U))),4);
    bufp->fullBit(oldp+79,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+80,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                   >> 3U) | ((((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               >> 3U) 
                                              & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 >> 2U)) 
                                             | ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                                & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))))))));
    bufp->fullCData(oldp+81,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+82,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+83,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value),5);
    bufp->fullIData(oldp+84,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0)),28);
    bufp->fullBit(oldp+85,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a 
                                  >> 0x1cU))));
    bufp->fullIData(oldp+86,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a)),28);
    bufp->fullBit(oldp+87,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1 
                                  >> 0x1cU))));
    bufp->fullIData(oldp+88,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1)),28);
    bufp->fullBit(oldp+89,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_compare));
    bufp->fullIData(oldp+90,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                             [5U]),32);
    bufp->fullIData(oldp+91,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                             [5U]),28);
    bufp->fullIData(oldp+92,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[0]),28);
    bufp->fullIData(oldp+93,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[1]),28);
    bufp->fullIData(oldp+94,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[2]),28);
    bufp->fullIData(oldp+95,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[3]),28);
    bufp->fullIData(oldp+96,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[4]),28);
    bufp->fullIData(oldp+97,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[5]),28);
    bufp->fullIData(oldp+98,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                               << 0x18U) | vlSelf->__VdfgRegularize_hd87f99a1_0_23)),28);
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                  >> 7U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                   >> 3U))));
    bufp->fullIData(oldp+101,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                << 0x18U) | vlSelf->__VdfgRegularize_hd87f99a1_0_23)),32);
    bufp->fullIData(oldp+102,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                << 0xcU) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                             << 8U) 
                                            | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                                << 4U) 
                                               | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))))),17);
    bufp->fullCData(oldp+103,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
    bufp->fullCData(oldp+104,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
    bufp->fullCData(oldp+105,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
    bufp->fullCData(oldp+106,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
    bufp->fullCData(oldp+107,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
    bufp->fullCData(oldp+108,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
    bufp->fullIData(oldp+109,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                << 8U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                           << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))),17);
    bufp->fullCData(oldp+110,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
    bufp->fullCData(oldp+111,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
    bufp->fullCData(oldp+112,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
    bufp->fullCData(oldp+113,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),8);
    bufp->fullCData(oldp+114,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
    bufp->fullCData(oldp+115,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c),8);
    bufp->fullBit(oldp+116,((1U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))));
    bufp->fullCData(oldp+117,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 1U))));
    bufp->fullCData(oldp+119,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 2U))));
    bufp->fullCData(oldp+121,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 3U))));
    bufp->fullCData(oldp+123,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 4U))));
    bufp->fullCData(oldp+125,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 5U))));
    bufp->fullCData(oldp+127,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                   >> 6U))));
    bufp->fullCData(oldp+129,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+130,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
    bufp->fullBit(oldp+131,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullBit(oldp+132,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+133,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+134,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullBit(oldp+135,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1));
    bufp->fullCData(oldp+136,(vlSelf->FPU_32bit__DOT__NOR_o_lopd),5);
    bufp->fullCData(oldp+137,(vlSelf->FPU_32bit__DOT__NOR_o_lopd),8);
    bufp->fullBit(oldp+138,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullCData(oldp+139,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
    bufp->fullCData(oldp+140,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullBit(oldp+141,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullBit(oldp+142,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+143,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+144,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+145,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+146,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+147,(vlSelf->i_alu_op));
    bufp->fullIData(oldp+148,(vlSelf->i_data_a),32);
    bufp->fullIData(oldp+149,(vlSelf->i_data_b),32);
    bufp->fullIData(oldp+150,(vlSelf->o_result),32);
    bufp->fullBit(oldp+151,((vlSelf->i_data_a >> 0x1fU)));
    bufp->fullBit(oldp+152,((vlSelf->i_data_b >> 0x1fU)));
    bufp->fullCData(oldp+153,((0xffU & (vlSelf->i_data_a 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+154,((0xffU & (vlSelf->i_data_b 
                                        >> 0x17U))),8);
    bufp->fullIData(oldp+155,((0x800000U | (0x7fffffU 
                                            & vlSelf->i_data_a))),25);
    bufp->fullIData(oldp+156,((0x800000U | (0x7fffffU 
                                            & vlSelf->i_data_b))),25);
    bufp->fullBit(oldp+157,((1U & ((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
                                   & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                      ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))));
    bufp->fullBit(oldp+158,((1U & ((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
                                   & (((1U & ((~ ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                                  >> 7U)) 
                                              & (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                 [5U] 
                                                 >> 0x1cU)))
                                        ? vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                       [5U] : ((0x80U 
                                                & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                                                ? (0x8000000U 
                                                   | ((0x7000000U 
                                                       & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                          << 0x18U)) 
                                                      | vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                : vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                               [5U])) 
                                      >> 5U)))));
    bufp->fullIData(oldp+159,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
                                ? 0U : (0xfffffffU 
                                        & ((1U & ((~ 
                                                   ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                                    >> 7U)) 
                                                  & (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                     [5U] 
                                                     >> 0x1cU)))
                                            ? vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                           [5U] : (
                                                   (0x80U 
                                                    & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                                                    ? 
                                                   (0x8000000U 
                                                    | ((0x7000000U 
                                                        & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                           << 0x18U)) 
                                                       | vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                    : 
                                                   vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                   [5U]))))),28);
    bufp->fullBit(oldp+160,(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag));
    bufp->fullCData(oldp+161,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
                                ? 0U : ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                          ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                         << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
    bufp->fullCData(oldp+162,(((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                          ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullCData(oldp+163,(((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                                ? 0U : (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))),8);
    bufp->fullCData(oldp+164,(((0x80U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                                ? 0xfeU : ((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                                            ? 0U : (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd)))),8);
    bufp->fullBit(oldp+165,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                             | ((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+166,((((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                << 1U) | (0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+167,((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                << 1U) | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullCData(oldp+168,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullIData(oldp+169,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                              [5U]),32);
    bufp->fullCData(oldp+170,(((8U & ((~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                                      << 3U)) | ((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                           ? 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                           >> 1U)
                                                           : 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                           >> 1U))
                                                          : 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                           ? 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                           >> 1U)
                                                           : 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                           >> 1U))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                            ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                            : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                           : 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                            ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                            : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))),4);
    bufp->fullBit(oldp+171,((((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                   >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                              >> 1U) 
                                             | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                              & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))) 
                             & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))));
    bufp->fullCData(oldp+172,(((8U & ((~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)) 
                                      << 3U)) | ((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
                                                   && (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)
                                                          ? 
                                                         ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                           ? 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                           >> 1U)
                                                           : 
                                                          ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                           >> 1U))
                                                          : 
                                                         ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                            ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                            : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                           : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0))))))),4);
    bufp->fullCData(oldp+173,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8) 
                                << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                   ? 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                    : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+174,((1U & ((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                        >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))))));
    bufp->fullCData(oldp+175,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11) 
                                << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                   ? 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)
                                                    ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                    : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+176,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1));
    bufp->fullBit(oldp+177,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->fullCData(oldp+178,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)))));
    bufp->fullCData(oldp+180,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->fullBit(oldp+181,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                       >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->fullCData(oldp+182,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)))));
    bufp->fullCData(oldp+184,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->fullCData(oldp+185,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                                << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                   ? 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)
                                                    ? (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                    : (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->fullBit(oldp+186,((1U & ((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                        >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18))))));
    bufp->fullCData(oldp+187,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),3);
    bufp->fullBit(oldp+188,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->fullBit(oldp+189,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->fullCData(oldp+190,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))));
    bufp->fullCData(oldp+192,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->fullCData(oldp+193,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->fullIData(oldp+194,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[0]),32);
    bufp->fullIData(oldp+195,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[1]),32);
    bufp->fullIData(oldp+196,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[2]),32);
    bufp->fullIData(oldp+197,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[3]),32);
    bufp->fullIData(oldp+198,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[4]),32);
    bufp->fullIData(oldp+199,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[5]),32);
    bufp->fullIData(oldp+200,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
                                ? 0U : (0x7fffffU & 
                                        (((1U & ((~ 
                                                  ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                                   >> 7U)) 
                                                 & (vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                    [5U] 
                                                    >> 0x1cU)))
                                           ? vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                          [5U] : ((0x80U 
                                                   & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                                                   ? 
                                                  (0x8000000U 
                                                   | ((0x7000000U 
                                                       & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                          << 0x18U)) 
                                                      | vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                   : 
                                                  vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                                                  [5U])) 
                                         >> 5U)))),23);
    bufp->fullIData(oldp+201,((0x800000U | (0x7fffffU 
                                            & vlSelf->i_data_a))),28);
    bufp->fullIData(oldp+202,((0x800000U | (0x7fffffU 
                                            & vlSelf->i_data_b))),28);
}
