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
    tracep->declBus(c+395,0,"ALU_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"SIZE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"i_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"i_32_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"i_32_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"o_32_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+397,0,"o_ov_flow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"o_un_flow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"w_i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"w_o_data_rom_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"w_o_data_rom_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+398,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+398,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+311,0,"o_ov_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"i_add_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+35,0,"i_32_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"i_32_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"o_32_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"o_ov_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"o_un_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"w_exponent_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"w_exponent_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"w_mantissa_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+43,0,"w_mantissa_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+173,0,"w_sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"w_exponent_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"w_mantissa_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+65,0,"w_EXPSWAP_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"w_EXPSWAP_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"w_EXPSWAP_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"w_EXPSUB_diff_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+68,0,"w_MAN_SWAP1_sign_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"w_MAN_SWAP1_sign_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"w_MAN_SWAP1_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+71,0,"w_MAN_SWAP1_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+121,0,"w_MAN_SHF_RIGHT_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+72,0,"w_MAN_SHF_RIGHT_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+174,0,"w_MAN_COMP_28BIT_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"w_MAN_PRE_SWAP_BY_MAN_compara",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"w_MAN_PRE_SWAP_BY_MAN_sign_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"w_MAN_PRE_SWAP_BY_MAN_sign_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"w_MAN_PRE_SWAP_BY_MAN_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+177,0,"w_MAN_PRE_SWAP_BY_MAN_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+315,0,"w_MAN_ALU_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+311,0,"w_MAN_ALU_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"w_LOPD_24BIT_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+266,0,"w_LOPD_24BIT_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"w_EXP_ADJUST_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"w_NORMALIZATION_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+313,0,"w_ROUNDING_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("EXP_ADJUST_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SIZE_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+399,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"i_underflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"i_lopd_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"i_exp_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"o_exp_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"w_exp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+317,0,"w_i_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"w_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+317,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+319,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+295,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+317,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+288,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+290,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+295,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+292,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+324,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXP_SUB_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SIZE_EXP_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"o_sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"w_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CLA_8BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+400,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+325,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"w_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"w_G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+227,0,"w_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+400,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+227,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+330,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXP_SWAP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"o_compare",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"o_less_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"o_greater_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("COMP_LESS_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+331,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+59,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_24BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+265,0,"o_one_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+266,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"LOPD16_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"LOPD16_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+336,0,"LOPD16_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"LOPD8_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+338,0,"LOPD8_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+339,0,"LOPD8_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"w_o_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("LOPD_16bit_UNIT_MSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+336,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+342,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+344,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+346,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+342,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+347,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+236,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+344,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+246,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+239,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+246,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_UNIT_LSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+337,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+338,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+339,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+233,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+350,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+230,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+233,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_ALU_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"NUM_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"i_fpu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+173,0,"i_sign_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"i_sign_min",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"i_man_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+177,0,"i_man_min",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+315,0,"o_man_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+311,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"w_i_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"w_n_man_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+180,0,"w_i_man_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+256,0,"w_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU_SUB_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+180,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+315,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+256,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+351,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+258,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+184,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+259,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+260,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+199,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+360,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+262,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+204,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+206,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+207,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+263,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+209,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+364,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+264,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+366,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_COMP_28BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+121,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+174,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"w_less_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"w_less_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"w_less_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"w_less_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"w_less_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"w_less_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"w_less_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"w_equal_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w_equal_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"w_equal_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"w_equal_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"w_equal_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"w_equal_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"w_equal_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_i_data_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+404,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+122,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+405,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+127,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+405,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+125,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+110,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+132,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+111,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+138,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+146,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+113,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+152,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+150,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+114,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+158,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+156,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_i_data_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+115,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+164,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+166,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MAN_PRE_SWAP_BY_EXPONENT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"i_sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"i_sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"i_man_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+43,0,"i_man_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+65,0,"i_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_sign_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"o_sign_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"o_man_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+71,0,"o_man_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+104,0,"w_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+105,0,"w_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+106,0,"w_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+107,0,"w_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("MAN_PRE_SWAP_BY_MAN_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"i_sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"i_sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"i_man_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+121,0,"i_man_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+174,0,"i_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"o_sign_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"o_sign_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"o_man_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+177,0,"o_man_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+108,0,"w_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+224,0,"w_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+225,0,"w_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+226,0,"w_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->popPrefix();
    tracep->pushPrefix("NORMALIZATION_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+402,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"i_overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"i_zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"i_one_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+315,0,"i_mantissa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+268,0,"o_mantissa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+249,0,"w_shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("SHF_left_28bit_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+315,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+249,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("stage", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+250+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+406,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+396,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+407,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROUNDING_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"SIZE_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"SIZE_MAN_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"i_man",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+313,0,"o_man_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+367,0,"w_man_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+368,0,"w_guard_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"w_round_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"w_sticky_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"w_rounding_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("INCREASE_ROUNDING", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+370,0,"i_carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+408,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+371,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+298,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+372,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CLA_4BIT_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+300,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+273,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+375,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+301,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+275,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+378,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+277,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+381,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+278,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+303,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+384,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+304,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+281,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+387,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+282,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+305,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+283,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+390,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CLA_BLOCK_GEN[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CLA_4BIT_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+306,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+391,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+285,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+393,0,"w_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SHF_RIGHT_28BIT_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+121,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("stage", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+167+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+406,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+396,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+399,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+407,0,"SHIFT_AMT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROM_UNIT_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+307,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROM_UNIT_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+307,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
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
    bufp->fullIData(oldp+395,(1U),32);
    bufp->fullIData(oldp+396,(4U),32);
    bufp->fullBit(oldp+397,(vlSelf->tb_FPU_unit__DOT__o_ov_flow));
    bufp->fullIData(oldp+398,(0U),32);
    bufp->fullIData(oldp+399,(8U),32);
    bufp->fullBit(oldp+400,(1U));
    bufp->fullIData(oldp+401,(0x18U),32);
    bufp->fullIData(oldp+402,(5U),32);
    bufp->fullIData(oldp+403,(0x1cU),32);
    bufp->fullCData(oldp+404,(0U),4);
    bufp->fullCData(oldp+405,(0U),2);
    bufp->fullIData(oldp+406,(2U),32);
    bufp->fullIData(oldp+407,(0x10U),32);
    bufp->fullIData(oldp+408,(0U),28);
    bufp->fullIData(oldp+409,(0x20U),32);
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
    bufp->fullIData(oldp+1,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[15]),32);
    bufp->fullBit(oldp+33,(vlSelf->tb_FPU_unit__DOT__i_rst_n));
    bufp->fullBit(oldp+34,(vlSelf->tb_FPU_unit__DOT__i_add_sub));
    bufp->fullIData(oldp+35,(vlSelf->tb_FPU_unit__DOT__i_32_a),32);
    bufp->fullIData(oldp+36,(vlSelf->tb_FPU_unit__DOT__i_32_b),32);
    bufp->fullCData(oldp+37,(vlSelf->tb_FPU_unit__DOT__w_i_addr),4);
    bufp->fullBit(oldp+38,((vlSelf->tb_FPU_unit__DOT__i_32_a 
                            >> 0x1fU)));
    bufp->fullBit(oldp+39,((vlSelf->tb_FPU_unit__DOT__i_32_b 
                            >> 0x1fU)));
    bufp->fullCData(oldp+40,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+41,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x17U))),8);
    bufp->fullIData(oldp+42,((0x800000U | (0x7fffffU 
                                           & vlSelf->tb_FPU_unit__DOT__i_32_a))),24);
    bufp->fullIData(oldp+43,((0x800000U | (0x7fffffU 
                                           & vlSelf->tb_FPU_unit__DOT__i_32_b))),24);
    bufp->fullBit(oldp+44,((1U & ((((~ (IData)((0U 
                                                != 
                                                (0x6000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x19U)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x19U)) 
                                     & (IData)((0x6000000U 
                                                == 
                                                (0x6000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                           >> 0x1aU)) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x1aU)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                     >> 0x19U))))) 
                                     & (((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x1800000U 
                                                      & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                         & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                            >> 0x17U)) 
                                        | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                >> 0x17U)) 
                                            & (IData)(
                                                      (0x1800000U 
                                                       == 
                                                       (0x1800000U 
                                                        & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                           | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x18U)) 
                                              & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                 >> 0x18U)))))))));
    bufp->fullBit(oldp+45,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                >> 0x19U))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x17U)))))))));
    bufp->fullCData(oldp+46,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                      >> 0x1bU))),4);
    bufp->fullCData(oldp+47,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x1bU))),4);
    bufp->fullBit(oldp+48,((1U & (((~ (IData)((0U != 
                                               (0x18000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x1bU)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                        >> 0x1bU)) 
                                    & (IData)((0x18000000U 
                                               == (0x18000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1cU)))))));
    bufp->fullBit(oldp+49,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                               >> 0x1bU))))))));
    bufp->fullBit(oldp+50,((1U & (((~ (IData)((0U != 
                                               (0x60000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x1dU)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                        >> 0x1dU)) 
                                    & (IData)((0x60000000U 
                                               == (0x60000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1eU)))))));
    bufp->fullCData(oldp+51,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                    >> 0x1dU))),2);
    bufp->fullCData(oldp+52,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                    >> 0x1dU))),2);
    bufp->fullCData(oldp+53,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                    >> 0x1bU))),2);
    bufp->fullCData(oldp+54,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                    >> 0x1bU))),2);
    bufp->fullCData(oldp+55,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                      >> 0x17U))),4);
    bufp->fullCData(oldp+56,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x17U))),4);
    bufp->fullBit(oldp+57,((1U & (((~ (IData)((0U != 
                                               (0x1800000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x17U)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                        >> 0x17U)) 
                                    & (IData)((0x1800000U 
                                               == (0x1800000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x18U)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x18U)))))));
    bufp->fullBit(oldp+58,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                               >> 0x17U))))))));
    bufp->fullBit(oldp+59,((1U & (((~ (IData)((0U != 
                                               (0x6000000U 
                                                & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                   & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                      >> 0x19U)) | 
                                  (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                        >> 0x19U)) 
                                    & (IData)((0x6000000U 
                                               == (0x6000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                   | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1aU)))))));
    bufp->fullBit(oldp+60,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                               >> 0x19U))))))));
    bufp->fullCData(oldp+61,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                    >> 0x19U))),2);
    bufp->fullCData(oldp+62,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                    >> 0x19U))),2);
    bufp->fullCData(oldp+63,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                    >> 0x17U))),2);
    bufp->fullCData(oldp+64,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                    >> 0x17U))),2);
    bufp->fullBit(oldp+65,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare));
    bufp->fullCData(oldp+66,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max),8);
    bufp->fullCData(oldp+67,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min),8);
    bufp->fullBit(oldp+68,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                  >> 0x18U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                  >> 0x18U))));
    bufp->fullIData(oldp+70,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
    bufp->fullIData(oldp+71,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
    bufp->fullIData(oldp+72,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            << 4U))),28);
    bufp->fullCData(oldp+73,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max))),4);
    bufp->fullCData(oldp+74,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+75,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),8);
    bufp->fullCData(oldp+76,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                               << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+77,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),4);
    bufp->fullBit(oldp+78,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullCData(oldp+79,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+80,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+81,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                         >> 4U)))),4);
    bufp->fullBit(oldp+82,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+83,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+84,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullBit(oldp+85,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+86,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
    bufp->fullCData(oldp+87,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 2U))),2);
    bufp->fullCData(oldp+88,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
    bufp->fullCData(oldp+89,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 4U))),4);
    bufp->fullCData(oldp+90,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 6U))),2);
    bufp->fullCData(oldp+91,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 4U))),2);
    bufp->fullCData(oldp+92,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 8U))),4);
    bufp->fullCData(oldp+93,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+94,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 8U))),2);
    bufp->fullCData(oldp+95,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+96,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xeU))),2);
    bufp->fullCData(oldp+97,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0xcU))),2);
    bufp->fullCData(oldp+98,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+99,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                    >> 0x12U))),2);
    bufp->fullCData(oldp+100,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+101,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+102,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x16U))),2);
    bufp->fullCData(oldp+103,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x14U))),2);
    bufp->fullIData(oldp+104,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
    bufp->fullIData(oldp+105,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
    bufp->fullIData(oldp+106,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
    bufp->fullIData(oldp+107,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
    bufp->fullIData(oldp+108,((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                               << 4U)),29);
    bufp->fullIData(oldp+109,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                             << 4U))),28);
    bufp->fullBit(oldp+110,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 6U)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 2U)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 7U) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 6U))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 3U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 7U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high) 
                                      & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 1U) 
                                              | vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U)) 
                                         | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 1U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+111,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xaU)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 6U)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xbU) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xaU))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 7U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xbU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x30U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 8U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 4U)) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 9U) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 8U))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 5U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 9U)))))))));
    bufp->fullBit(oldp+112,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc00U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xeU)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xaU)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0xbU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xfU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xcU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 8U)) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xdU) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xcU))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 9U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0xdU)))))))));
    bufp->fullBit(oldp+113,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc000U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x12U)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xeU)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0xfU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x13U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x10U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xcU)) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x11U) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0xdU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x11U)))))))));
    bufp->fullBit(oldp+114,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0000U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x16U)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x12U)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x17U) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0x13U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x17U)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x30000U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x14U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x10U)) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x15U) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x14U))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x11U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x15U)))))))));
    bufp->fullBit(oldp+115,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc00000U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x1aU)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x16U)) 
                                        & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1bU) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0x17U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x1bU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300000U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x18U)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x14U)) 
                                             & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x19U) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x18U))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x15U)) 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x19U)))))))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 4U)))))))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 4U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U)))))))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 8U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU)))))))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xcU) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U)))))))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U)))))))));
    bufp->fullIData(oldp+121,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                              [5U]),28);
    bufp->fullBit(oldp+122,((1U & (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 2U) | 
                                    (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 3U) 
                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 2U)) 
                                     | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 3U))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 2U))))) 
                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] | (((
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 1U) 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U]) 
                                                 | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 1U))))))));
    bufp->fullBit(oldp+123,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U]))))))));
    bufp->fullCData(oldp+124,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                               [5U])),4);
    bufp->fullBit(oldp+125,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                   [5U] | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 1U) 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U]) | 
                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 1U))))));
    bufp->fullBit(oldp+126,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U])))))));
    bufp->fullBit(oldp+127,((1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                    [5U] >> 2U) | (
                                                   ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 3U) 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 2U)) 
                                                   | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 3U))))));
    bufp->fullBit(oldp+128,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 2U))))))));
    bufp->fullCData(oldp+129,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 2U))),2);
    bufp->fullCData(oldp+130,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                               [5U])),2);
    bufp->fullCData(oldp+131,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 4U))),4);
    bufp->fullBit(oldp+132,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 1U) | vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 4U)) 
                                   | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 5U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 1U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 5U)))))));
    bufp->fullBit(oldp+133,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U)))))))));
    bufp->fullBit(oldp+134,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 6U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 2U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 7U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 6U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 3U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 7U)))))));
    bufp->fullCData(oldp+135,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 6U))),2);
    bufp->fullCData(oldp+136,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 4U))),2);
    bufp->fullCData(oldp+137,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 8U))),4);
    bufp->fullBit(oldp+138,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 8U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 4U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 9U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 8U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 5U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 9U)))))));
    bufp->fullBit(oldp+139,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 4U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 8U)))))))));
    bufp->fullBit(oldp+140,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0xaU)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 6U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xbU) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xaU))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 7U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xbU)))))));
    bufp->fullCData(oldp+141,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xaU))),2);
    bufp->fullCData(oldp+142,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 8U))),2);
    bufp->fullCData(oldp+143,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0xcU))),4);
    bufp->fullBit(oldp+144,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x300U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0xcU)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 8U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xdU) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xcU))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 9U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xdU)))))));
    bufp->fullBit(oldp+145,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 8U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+146,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc00U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0xeU)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xaU)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xfU) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xeU))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0xbU)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU)))))));
    bufp->fullCData(oldp+147,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xeU))),2);
    bufp->fullCData(oldp+148,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0xcU))),2);
    bufp->fullCData(oldp+149,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x10U))),4);
    bufp->fullBit(oldp+150,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x10U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xcU)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x11U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x10U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0xdU)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x11U)))))));
    bufp->fullBit(oldp+151,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xcU) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U)))))))));
    bufp->fullBit(oldp+152,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x12U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xeU)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x13U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x12U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0xfU)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U)))))));
    bufp->fullCData(oldp+153,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x12U))),2);
    bufp->fullCData(oldp+154,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x10U))),2);
    bufp->fullCData(oldp+155,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U))),4);
    bufp->fullBit(oldp+156,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x14U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x10U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x15U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x14U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x11U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x15U)))))));
    bufp->fullBit(oldp+157,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x10U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x14U)))))))));
    bufp->fullBit(oldp+158,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x16U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x12U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x17U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x16U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x13U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x17U)))))));
    bufp->fullCData(oldp+159,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x16U))),2);
    bufp->fullCData(oldp+160,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x14U))),2);
    bufp->fullCData(oldp+161,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U))),4);
    bufp->fullBit(oldp+162,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x300000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x14U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x19U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x18U))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x15U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x19U)))))));
    bufp->fullBit(oldp+163,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x14U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x18U)))))))));
    bufp->fullBit(oldp+164,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x1aU)) 
                                   | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x16U)) 
                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x1bU) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x1aU))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 0x17U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1bU)))))));
    bufp->fullCData(oldp+165,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x1aU))),2);
    bufp->fullCData(oldp+166,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x18U))),2);
    bufp->fullIData(oldp+167,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
    bufp->fullIData(oldp+168,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
    bufp->fullIData(oldp+169,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
    bufp->fullIData(oldp+170,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
    bufp->fullIData(oldp+171,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
    bufp->fullIData(oldp+172,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
    bufp->fullBit(oldp+173,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+174,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less));
    bufp->fullBit(oldp+175,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+176,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
    bufp->fullIData(oldp+177,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
    bufp->fullBit(oldp+178,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
    bufp->fullIData(oldp+179,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
    bufp->fullIData(oldp+180,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
    bufp->fullCData(oldp+181,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
    bufp->fullCData(oldp+182,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
    bufp->fullCData(oldp+183,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
    bufp->fullBit(oldp+184,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullCData(oldp+185,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+186,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+187,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 4U))),4);
    bufp->fullCData(oldp+188,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 4U))),4);
    bufp->fullBit(oldp+189,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+190,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+191,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+192,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 8U))),4);
    bufp->fullCData(oldp+193,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 8U))),4);
    bufp->fullBit(oldp+194,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+195,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+196,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+197,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+198,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+199,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+200,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+201,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+202,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+203,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+204,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+205,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+206,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+207,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+208,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+209,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+210,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+211,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullCData(oldp+212,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+213,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+214,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+215,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+216,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullBit(oldp+217,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
    bufp->fullBit(oldp+218,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high));
    bufp->fullBit(oldp+219,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high));
    bufp->fullBit(oldp+220,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high));
    bufp->fullBit(oldp+221,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high));
    bufp->fullBit(oldp+222,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high));
    bufp->fullBit(oldp+223,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high));
    bufp->fullIData(oldp+224,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
    bufp->fullIData(oldp+225,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
    bufp->fullIData(oldp+226,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
    bufp->fullBit(oldp+227,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullBit(oldp+228,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+229,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullBit(oldp+230,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+231,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+232,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))));
    bufp->fullCData(oldp+234,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+235,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+236,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+237,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+238,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+239,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
    bufp->fullCData(oldp+240,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+241,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)))));
    bufp->fullCData(oldp+243,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+244,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   >> 3U))));
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)))));
    bufp->fullCData(oldp+247,((((IData)(((0U == (0xcU 
                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               >> 1U)))) 
                                << 1U) | (1U & ((~ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
    bufp->fullCData(oldp+248,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    bufp->fullIData(oldp+249,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                              [5U]),28);
    bufp->fullIData(oldp+250,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
    bufp->fullIData(oldp+251,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
    bufp->fullIData(oldp+252,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
    bufp->fullIData(oldp+253,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
    bufp->fullIData(oldp+254,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
    bufp->fullIData(oldp+255,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    bufp->fullBit(oldp+256,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 7U))));
    bufp->fullCData(oldp+257,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
    bufp->fullBit(oldp+258,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
    bufp->fullBit(oldp+259,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 1U))));
    bufp->fullBit(oldp+260,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 2U))));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 3U))));
    bufp->fullBit(oldp+262,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 4U))));
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 5U))));
    bufp->fullBit(oldp+264,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                   >> 6U))));
    bufp->fullCData(oldp+265,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),5);
    bufp->fullBit(oldp+266,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag));
    bufp->fullCData(oldp+267,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),8);
    bufp->fullIData(oldp+268,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man),28);
    bufp->fullBit(oldp+269,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit));
    bufp->fullIData(oldp+270,((0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U))),28);
    bufp->fullCData(oldp+271,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p),7);
    bufp->fullCData(oldp+272,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 4U))),4);
    bufp->fullBit(oldp+273,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 4U)))));
    bufp->fullCData(oldp+274,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 8U))),4);
    bufp->fullBit(oldp+275,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 8U)))));
    bufp->fullCData(oldp+276,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+277,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 0xcU)))));
    bufp->fullCData(oldp+278,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+279,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 0x10U)))));
    bufp->fullCData(oldp+280,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+281,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 0x14U)))));
    bufp->fullCData(oldp+282,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+283,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 0x18U)))));
    bufp->fullCData(oldp+284,((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+285,((0xfU == (0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                              >> 0x18U)))));
    bufp->fullCData(oldp+286,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->fullCData(oldp+287,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
    bufp->fullBit(oldp+288,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    bufp->fullCData(oldp+289,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
    bufp->fullCData(oldp+290,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
    bufp->fullCData(oldp+291,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
    bufp->fullBit(oldp+292,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    bufp->fullCData(oldp+293,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
    bufp->fullCData(oldp+294,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    bufp->fullBit(oldp+295,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
    bufp->fullBit(oldp+296,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
    bufp->fullCData(oldp+297,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullBit(oldp+298,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 7U))));
    bufp->fullCData(oldp+299,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c),8);
    bufp->fullBit(oldp+300,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 1U))));
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 2U))));
    bufp->fullBit(oldp+303,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 3U))));
    bufp->fullBit(oldp+304,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 4U))));
    bufp->fullBit(oldp+305,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 5U))));
    bufp->fullBit(oldp+306,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                   >> 6U))));
    bufp->fullBit(oldp+307,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->fullIData(oldp+308,(((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                               << 3U)) 
                               | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                     ? 0xffU : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                   << 0x17U) | ((0x700000U 
                                                 & ((0xff00000U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 0x14U))) 
                                                | ((0xf0000U 
                                                    & ((0xfff0000U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 0x10U))) 
                                                   | ((0xf000U 
                                                       & ((0xffff000U 
                                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                              >> 4U)) 
                                                          ^ 
                                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                           << 0xcU))) 
                                                      | ((0xf00U 
                                                          & ((0xfffff00U 
                                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                                 >> 4U)) 
                                                             ^ 
                                                             ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                              << 8U))) 
                                                         | ((0xf0U 
                                                             & ((0xffffff0U 
                                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                                    >> 4U)) 
                                                                ^ 
                                                                ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                                 << 4U))) 
                                                            | (0xfU 
                                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                                   >> 4U) 
                                                                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))))),32);
    bufp->fullIData(oldp+309,(vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a),32);
    bufp->fullIData(oldp+310,(vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b),32);
    bufp->fullBit(oldp+311,(vlSelf->tb_FPU_unit__DOT__o_ov_flag));
    bufp->fullCData(oldp+312,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                ? 0xffU : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                             ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                            << 4U) 
                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
    bufp->fullIData(oldp+313,(((0xf00000U & ((0xff00000U 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 4U)) 
                                             ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                << 0x14U))) 
                               | ((0xf0000U & ((0xfff0000U 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0x10U))) 
                                  | ((0xf000U & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                     | ((0xf00U & (
                                                   (0xfffff00U 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                       >> 4U)) 
                                                   ^ 
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                    << 8U))) 
                                        | ((0xf0U & 
                                            ((0xffffff0U 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 4U)) 
                                             ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                << 4U))) 
                                           | (0xfU 
                                              & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U) 
                                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))),24);
    bufp->fullCData(oldp+314,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                          ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullIData(oldp+315,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man),28);
    bufp->fullCData(oldp+316,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                          ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->fullBit(oldp+317,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
    bufp->fullCData(oldp+318,(((IData)(vlSelf->tb_FPU_unit__DOT__o_ov_flag)
                                ? 1U : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                         ? 0U : (0xffU 
                                                 & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)))))),8);
    bufp->fullBit(oldp+319,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                             | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+320,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullCData(oldp+321,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullCData(oldp+322,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullBit(oldp+323,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+324,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+325,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                             | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->fullCData(oldp+326,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->fullCData(oldp+327,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->fullCData(oldp+328,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->fullBit(oldp+329,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->fullCData(oldp+330,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+331,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0x60000000U 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                     & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                        >> 0x1dU)) 
                                    | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                            >> 0x1dU)) 
                                        & (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                              >> 0x1eU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1eU)))) 
                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                          & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                             >> 0x1bU)) 
                                         | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 >> 0x1bU)) 
                                             & (IData)(
                                                       (0x18000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                            | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                   >> 0x1cU)) 
                                               & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                  >> 0x1cU)))))))));
    bufp->fullBit(oldp+332,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                     >> 0x1bU))))))));
    bufp->fullIData(oldp+333,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))),24);
    bufp->fullSData(oldp+334,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 0xcU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             << 8U) 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 4U) 
                                               | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))),16);
    bufp->fullCData(oldp+335,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                ? 0U : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)))))),4);
    bufp->fullBit(oldp+336,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
    bufp->fullCData(oldp+337,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullCData(oldp+338,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                                ? 0U : ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                               << 2U)) 
                                        | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                            << 1U) 
                                           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))))),3);
    bufp->fullBit(oldp+339,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    bufp->fullCData(oldp+340,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
                                << 4U) | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                           << 3U) | 
                                          ((4U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                    ? 
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))
                                                    : 
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                    & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1))) 
                                                  << 2U)) 
                                           | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24))
                                                 : 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                  ? 
                                                 ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                  & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                  : 
                                                 ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                  & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)))))))),5);
    bufp->fullCData(oldp+341,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)
                                ? 0U : ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)) 
                                               << 2U)) 
                                        | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                    ? 
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 1U)) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                    : 
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 1U)) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                ? (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                : (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))))))),3);
    bufp->fullBit(oldp+342,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0));
    bufp->fullCData(oldp+343,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)
                                ? 0U : ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
                                               << 2U)) 
                                        | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                    ? 
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 1U)) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                    : 
                                                   (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 1U)) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                ? (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                : (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))))))),3);
    bufp->fullBit(oldp+344,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1));
    bufp->fullCData(oldp+345,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                                << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                            << 1U) 
                                           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3))))),4);
    bufp->fullCData(oldp+346,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullCData(oldp+347,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)) 
                                      << 2U)) | ((2U 
                                                  & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                       ? 
                                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 1U)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                       : 
                                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 1U)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                        ? 
                                                       ((~ 
                                                         ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 3U)) 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                            >> 2U) 
                                                           | (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                        : 
                                                       ((~ 
                                                         ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 3U)) 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                            >> 2U) 
                                                           | (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))))),3);
    bufp->fullCData(oldp+348,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->fullCData(oldp+349,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
                                      << 2U)) | ((2U 
                                                  & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                       ? 
                                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 1U)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                       : 
                                                      (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 1U)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                        ? 
                                                       ((~ 
                                                         ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 3U)) 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                            >> 2U) 
                                                           | (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                        : 
                                                       ((~ 
                                                         ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 3U)) 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                            >> 2U) 
                                                           | (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))))),3);
    bufp->fullCData(oldp+350,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                      << 2U)) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23)))),3);
    bufp->fullCData(oldp+351,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
    bufp->fullCData(oldp+352,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum),4);
    bufp->fullBit(oldp+353,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))))))));
    bufp->fullCData(oldp+354,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullBit(oldp+355,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+356,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+357,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+358,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+359,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+360,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+361,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+362,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+363,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+364,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullBit(oldp+365,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                    >> 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                     >> 1U))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))))));
    bufp->fullCData(oldp+366,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullIData(oldp+367,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                ? 0U : (0xffffffU & 
                                        (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                         >> 4U)))),24);
    bufp->fullBit(oldp+368,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                   & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                      >> 3U)))));
    bufp->fullBit(oldp+369,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                   & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                       >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20)))));
    bufp->fullBit(oldp+370,(((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                               & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                  >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                             | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                                & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                   & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                       >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20))))));
    bufp->fullIData(oldp+371,(((0xf000000U & ((0xf000000U 
                                               & VL_SHIFTR_III(32,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x18U))) 
                               | ((0xf00000U & ((0xff00000U 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                    >> 4U)) 
                                                ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 0x14U))) 
                                  | ((0xf0000U & ((0xfff0000U 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                      >> 4U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 0x10U))) 
                                     | ((0xf000U & 
                                         ((0xffff000U 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                              >> 4U)) 
                                          ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                             << 0xcU))) 
                                        | ((0xf00U 
                                            & ((0xfffff00U 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 8U))) 
                                           | ((0xf0U 
                                               & ((0xffffff0U 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                      >> 4U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 4U))) 
                                              | (0xfU 
                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))))))))),28);
    bufp->fullCData(oldp+372,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g),7);
    bufp->fullCData(oldp+373,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),4);
    bufp->fullBit(oldp+374,((1U & (IData)(((0xf0U == 
                                            (0xf0U 
                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))));
    bufp->fullCData(oldp+375,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->fullCData(oldp+376,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 8U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+377,((1U & (IData)(((0xf00U 
                                            == (0xf00U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->fullCData(oldp+378,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+379,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 0xcU) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+380,((1U & (IData)(((0xf000U 
                                            == (0xf000U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->fullCData(oldp+381,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+382,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 0x10U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+383,((1U & (IData)(((0xf0000U 
                                            == (0xf0000U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->fullCData(oldp+384,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+385,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 0x14U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+386,((1U & (IData)(((0xf00000U 
                                            == (0xf00000U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->fullCData(oldp+387,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+388,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                        >> 0x18U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+389,((1U & (IData)(((0xf000000U 
                                            == (0xf000000U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->fullCData(oldp+390,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+391,((0xfU & ((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                >> 0x18U)) 
                                       ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->fullBit(oldp+392,((1U & ((((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                      >> 0x1bU) & (
                                                   VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                   >> 0x1aU)) 
                                    & (7U & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                             >> 0x19U))) 
                                   & (0xfU & ((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                               >> 0x18U) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))));
    bufp->fullCData(oldp+393,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->fullCData(oldp+394,(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
}
