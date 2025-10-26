// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_FPU_unit__Syms.h"


void Vtb_FPU_unit___024root__trace_chg_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_FPU_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_chg_0\n"); );
    // Init
    Vtb_FPU_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_FPU_unit___024root*>(voidSelf);
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_FPU_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_FPU_unit___024root__trace_chg_0_sub_0(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_FPU_unit__DOT__i_rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_FPU_unit__DOT__i_fpu_op));
        bufp->chgIData(oldp+2,(vlSelf->tb_FPU_unit__DOT__i_floating_a),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_FPU_unit__DOT__i_floating_b),32);
        bufp->chgBit(oldp+4,((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                              >> 0x1fU)));
        bufp->chgBit(oldp+5,((vlSelf->tb_FPU_unit__DOT__i_floating_b 
                              >> 0x1fU)));
        bufp->chgCData(oldp+6,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x17U))),8);
        bufp->chgCData(oldp+7,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+8,((0x800000U | (0x7fffffU 
                                             & vlSelf->tb_FPU_unit__DOT__i_floating_a))),24);
        bufp->chgIData(oldp+9,((0x800000U | (0x7fffffU 
                                             & vlSelf->tb_FPU_unit__DOT__i_floating_b))),24);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x17U))),4);
        bufp->chgCData(oldp+11,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x17U))),4);
        bufp->chgCData(oldp+12,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+13,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+14,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x17U))),2);
        bufp->chgCData(oldp+15,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x17U))),2);
        bufp->chgCData(oldp+16,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x1bU))),4);
        bufp->chgCData(oldp+17,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1bU))),4);
        bufp->chgCData(oldp+18,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+19,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+20,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+21,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x1bU))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+22,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare));
        bufp->chgCData(oldp+23,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max),8);
        bufp->chgCData(oldp+24,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min),8);
        bufp->chgCData(oldp+25,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value),8);
        bufp->chgBit(oldp+26,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x18U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                     >> 0x18U))));
        bufp->chgIData(oldp+28,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
        bufp->chgIData(oldp+29,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
        bufp->chgIData(oldp+30,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               << 4U))),28);
        bufp->chgCData(oldp+31,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),8);
        bufp->chgBit(oldp+32,(((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
                               | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
                                  & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                                     | (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p)))))));
        bufp->chgCData(oldp+33,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P),2);
        bufp->chgCData(oldp+34,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G),2);
        bufp->chgBit(oldp+35,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_less));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_less));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_equal));
        bufp->chgIData(oldp+39,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
        bufp->chgIData(oldp+40,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
        bufp->chgIData(oldp+41,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
        bufp->chgIData(oldp+42,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
        bufp->chgIData(oldp+43,((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                 << 4U)),29);
        bufp->chgCData(oldp+44,(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
        bufp->chgIData(oldp+45,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                               << 4U))),28);
        bufp->chgCData(oldp+46,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max))),4);
        bufp->chgCData(oldp+47,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),4);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum),4);
        bufp->chgBit(oldp+49,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_g),4);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p),4);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
        bufp->chgCData(oldp+54,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+55,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                            >> 4U)))),4);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgBit(oldp+57,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+59,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.__PVT__w_less_low));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.__PVT__w_less_high));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.__PVT__w_equal_high));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.__PVT__w_less_low));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.__PVT__w_equal_low));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.__PVT__w_less_high));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.__PVT__w_equal_high));
        bufp->chgCData(oldp+69,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+70,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U))),2);
        bufp->chgCData(oldp+71,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
        bufp->chgCData(oldp+72,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 4U))),4);
        bufp->chgCData(oldp+73,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 6U))),2);
        bufp->chgCData(oldp+74,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 4U))),2);
        bufp->chgCData(oldp+75,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 8U))),4);
        bufp->chgCData(oldp+76,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+77,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 8U))),2);
        bufp->chgCData(oldp+78,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+79,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+80,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+81,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+82,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+83,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+84,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+85,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+86,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x14U))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+87,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                [5U]),28);
        bufp->chgIData(oldp+88,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
        bufp->chgIData(oldp+89,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
        bufp->chgIData(oldp+90,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
        bufp->chgIData(oldp+91,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
        bufp->chgIData(oldp+92,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
        bufp->chgIData(oldp+93,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
        bufp->chgCData(oldp+94,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),4);
        bufp->chgBit(oldp+95,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U])))))));
        bufp->chgBit(oldp+96,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+97,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 2U))),2);
        bufp->chgCData(oldp+98,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),2);
        bufp->chgCData(oldp+99,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 4U))),4);
        bufp->chgCData(oldp+100,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 6U))),2);
        bufp->chgCData(oldp+101,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 4U))),2);
        bufp->chgCData(oldp+102,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 8U))),4);
        bufp->chgCData(oldp+103,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xaU))),2);
        bufp->chgCData(oldp+104,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 8U))),2);
        bufp->chgCData(oldp+105,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xcU))),4);
        bufp->chgCData(oldp+106,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xeU))),2);
        bufp->chgCData(oldp+107,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xcU))),2);
        bufp->chgCData(oldp+108,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U))),4);
        bufp->chgCData(oldp+109,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x12U))),2);
        bufp->chgCData(oldp+110,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x10U))),2);
        bufp->chgCData(oldp+111,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x14U))),4);
        bufp->chgCData(oldp+112,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x16U))),2);
        bufp->chgCData(oldp+113,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x14U))),2);
        bufp->chgCData(oldp+114,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x18U))),4);
        bufp->chgCData(oldp+115,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x1aU))),2);
        bufp->chgCData(oldp+116,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x18U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+117,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less),7);
        bufp->chgCData(oldp+118,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal),7);
        bufp->chgIData(oldp+119,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.__PVT__w_equal_high));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.__PVT__w_equal_high));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.__PVT__w_equal_high));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.__PVT__w_equal_high));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.__PVT__w_equal_high));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.o_less));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.o_equal));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.__PVT__w_less_low));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.__PVT__w_equal_low));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.__PVT__w_less_high));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.__PVT__w_equal_high));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+156,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+157,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+159,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
        bufp->chgIData(oldp+160,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
        bufp->chgBit(oldp+161,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
        bufp->chgIData(oldp+162,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
        bufp->chgIData(oldp+163,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
        bufp->chgCData(oldp+164,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
        bufp->chgCData(oldp+165,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
        bufp->chgCData(oldp+166,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain),8);
        bufp->chgIData(oldp+167,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
        bufp->chgIData(oldp+168,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
        bufp->chgCData(oldp+169,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+170,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
        bufp->chgBit(oldp+171,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
        bufp->chgCData(oldp+173,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_g),4);
        bufp->chgCData(oldp+174,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p),4);
        bufp->chgCData(oldp+175,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 4U))),4);
        bufp->chgCData(oldp+176,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+177,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+179,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+180,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+181,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 8U))),4);
        bufp->chgCData(oldp+182,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+183,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+185,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+187,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+188,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+189,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+191,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+192,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+193,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+194,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+195,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+197,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+199,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+200,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+201,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+203,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+205,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+206,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+207,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+209,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+211,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result),8);
        bufp->chgIData(oldp+212,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man),28);
        bufp->chgBit(oldp+213,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow));
        bufp->chgCData(oldp+214,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),5);
        bufp->chgBit(oldp+215,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                      >> 3U))));
        bufp->chgCData(oldp+217,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),8);
        bufp->chgCData(oldp+218,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result),8);
        bufp->chgBit(oldp+219,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
        bufp->chgCData(oldp+220,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b),8);
        bufp->chgBit(oldp+221,(((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
                                | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
                                   & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
                                         & (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))))))));
        bufp->chgCData(oldp+222,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P),2);
        bufp->chgCData(oldp+223,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G),2);
        bufp->chgBit(oldp+224,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgIData(oldp+225,(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data),24);
        bufp->chgSData(oldp+226,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data),16);
        bufp->chgCData(oldp+227,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one),4);
        bufp->chgBit(oldp+228,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
        bufp->chgCData(oldp+229,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data),8);
        bufp->chgCData(oldp+230,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one),3);
        bufp->chgBit(oldp+231,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
        bufp->chgCData(oldp+232,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position),5);
        bufp->chgCData(oldp+233,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub),8);
        bufp->chgCData(oldp+234,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0),3);
        bufp->chgBit(oldp+235,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+236,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1),3);
        bufp->chgBit(oldp+237,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1));
        bufp->chgCData(oldp+238,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data),8);
        bufp->chgBit(oldp+239,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+240,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+241,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)))));
        bufp->chgCData(oldp+242,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+244,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+245,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data),8);
        bufp->chgBit(oldp+246,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+247,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+248,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
        bufp->chgCData(oldp+249,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgBit(oldp+252,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+253,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)))));
        bufp->chgCData(oldp+255,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1),2);
        bufp->chgCData(oldp+256,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+258,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),8);
        bufp->chgBit(oldp+259,(((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.o_g) 
                                | ((0xfU == (0xfU & 
                                             (1U ^ 
                                              (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                  >> 4U))))) 
                                   & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.o_g) 
                                      | (0xfU == (0xfU 
                                                  & (7U 
                                                     ^ 
                                                     (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))))))));
        bufp->chgCData(oldp+260,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P),2);
        bufp->chgCData(oldp+261,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G),2);
        bufp->chgBit(oldp+262,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C));
        bufp->chgBit(oldp+263,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+264,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
        bufp->chgBit(oldp+265,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
        bufp->chgCData(oldp+266,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.sum),4);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 1U))));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+270,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 2U))));
        bufp->chgCData(oldp+271,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+272,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 3U))));
        bufp->chgCData(oldp+273,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+274,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 4U))));
        bufp->chgCData(oldp+275,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+276,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 5U))));
        bufp->chgCData(oldp+277,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 6U))));
        bufp->chgCData(oldp+279,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgCData(oldp+280,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),4);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.sum),4);
        bufp->chgBit(oldp+282,((0xfU == (0xfU & (7U 
                                                 ^ 
                                                 (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))))));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.o_g));
        bufp->chgCData(oldp+284,((7U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))),4);
        bufp->chgCData(oldp+285,((0xfU & (7U ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))),4);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
        bufp->chgCData(oldp+287,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 4U)))),4);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgBit(oldp+289,((0xfU == (0xfU & (1U 
                                                 ^ 
                                                 (~ 
                                                  ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+291,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                           >> 4U)))),4);
        bufp->chgCData(oldp+292,((0xfU & (1U ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                                   >> 4U))))),4);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgCData(oldp+294,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum),4);
        bufp->chgBit(oldp+296,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
        bufp->chgCData(oldp+298,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_g),4);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p),4);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
        bufp->chgCData(oldp+301,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
        bufp->chgCData(oldp+302,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgBit(oldp+303,((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+305,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+306,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgCData(oldp+307,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+308,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                 [5U]),28);
        bufp->chgIData(oldp+309,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
        bufp->chgIData(oldp+310,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
        bufp->chgIData(oldp+311,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
        bufp->chgIData(oldp+312,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
        bufp->chgIData(oldp+313,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
        bufp->chgIData(oldp+314,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+315,(vlSelf->tb_FPU_unit__DOT__o_floating_result),32);
        bufp->chgIData(oldp+316,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result),24);
        bufp->chgIData(oldp+317,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man),28);
    }
    bufp->chgBit(oldp+318,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->chgBit(oldp+319,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara));
    bufp->chgBit(oldp+320,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_equal));
    bufp->chgBit(oldp+321,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain))));
    bufp->chgCData(oldp+322,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain),8);
    bufp->chgBit(oldp+323,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.__PVT__w_equal_low));
    bufp->chgBit(oldp+324,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4.o_less));
    bufp->chgBit(oldp+325,(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4.o_equal));
}

void Vtb_FPU_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_FPU_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_FPU_unit___024root*>(voidSelf);
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
