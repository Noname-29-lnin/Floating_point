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
        bufp->chgBit(oldp+10,((1U & ((((~ (IData)((0U 
                                                   != 
                                                   (0x6000000U 
                                                    & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                          >> 0x19U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                              >> 0x19U)) 
                                          & (IData)(
                                                    (0x6000000U 
                                                     == 
                                                     (0x6000000U 
                                                      & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                >> 0x1aU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                               >> 0x1aU)))) 
                                     | ((~ (IData)(
                                                   (0U 
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
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                   >> 0x18U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                                    >> 0x18U)))))))));
        bufp->chgBit(oldp+11,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                     >> 0x19U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                        ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                       >> 0x17U)))))))));
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x1bU))),4);
        bufp->chgCData(oldp+13,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1bU))),4);
        bufp->chgBit(oldp+14,((1U & (((~ (IData)((0U 
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
                                              >> 0x1cU)))))));
        bufp->chgBit(oldp+15,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                    >> 0x1bU))))))));
        bufp->chgBit(oldp+16,((1U & (((~ (IData)((0U 
                                                  != 
                                                  (0x60000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x1dU)) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                             >> 0x1dU)) 
                                         & (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                               >> 0x1eU)) 
                                           & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                              >> 0x1eU)))))));
        bufp->chgCData(oldp+17,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+18,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+19,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+20,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+21,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                         >> 0x17U))),4);
        bufp->chgCData(oldp+22,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x17U))),4);
        bufp->chgBit(oldp+23,((1U & (((~ (IData)((0U 
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
                                              >> 0x18U)))))));
        bufp->chgBit(oldp+24,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                    >> 0x17U))))))));
        bufp->chgBit(oldp+25,((1U & (((~ (IData)((0U 
                                                  != 
                                                  (0x6000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                         >> 0x19U)) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                             >> 0x19U)) 
                                         & (IData)(
                                                   (0x6000000U 
                                                    == 
                                                    (0x6000000U 
                                                     & vlSelf->tb_FPU_unit__DOT__i_floating_b)))) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                               >> 0x1aU)) 
                                           & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                              >> 0x1aU)))))));
        bufp->chgBit(oldp+26,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                    >> 0x19U))))))));
        bufp->chgCData(oldp+27,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+28,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+29,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 0x17U))),2);
        bufp->chgCData(oldp+30,((3U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x17U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+31,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare));
        bufp->chgCData(oldp+32,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max),8);
        bufp->chgCData(oldp+33,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min),8);
        bufp->chgCData(oldp+34,(((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                  << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                            ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
        bufp->chgBit(oldp+35,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x18U))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                     >> 0x18U))));
        bufp->chgIData(oldp+37,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
        bufp->chgIData(oldp+38,((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
        bufp->chgIData(oldp+39,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               << 4U))),28);
        bufp->chgCData(oldp+40,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max))),4);
        bufp->chgCData(oldp+41,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+42,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),8);
        bufp->chgBit(oldp+43,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                  & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
        bufp->chgCData(oldp+44,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                  << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+45,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                  << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
        bufp->chgBit(oldp+46,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgCData(oldp+47,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)))),4);
        bufp->chgCData(oldp+48,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
        bufp->chgBit(oldp+49,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+50,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+51,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+52,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+53,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgCData(oldp+54,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                                            >> 4U)))),4);
        bufp->chgCData(oldp+55,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
        bufp->chgBit(oldp+56,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+57,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
        bufp->chgCData(oldp+58,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+59,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+60,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+61,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+62,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+63,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U))),2);
        bufp->chgCData(oldp+64,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
        bufp->chgCData(oldp+65,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 4U))),4);
        bufp->chgCData(oldp+66,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 6U))),2);
        bufp->chgCData(oldp+67,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 4U))),2);
        bufp->chgCData(oldp+68,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 8U))),4);
        bufp->chgCData(oldp+69,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+70,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 8U))),2);
        bufp->chgCData(oldp+71,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+72,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+73,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+74,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+75,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+76,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+77,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+78,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+79,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x14U))),2);
        bufp->chgIData(oldp+80,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
        bufp->chgIData(oldp+81,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
        bufp->chgIData(oldp+82,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
        bufp->chgIData(oldp+83,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
        bufp->chgIData(oldp+84,((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                 << 4U)),29);
        bufp->chgCData(oldp+85,(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
        bufp->chgIData(oldp+86,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                               << 4U))),28);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+87,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                [5U]),28);
        bufp->chgCData(oldp+88,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),4);
        bufp->chgBit(oldp+89,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U]))))))));
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U])))))));
        bufp->chgBit(oldp+91,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+92,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 2U))),2);
        bufp->chgCData(oldp+93,((3U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),2);
        bufp->chgCData(oldp+94,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 4U))),4);
        bufp->chgBit(oldp+95,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 7U) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 6U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 2U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 6U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
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
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U)) 
                                               & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 1U) 
                                                  & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 5U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+96,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U) 
                                               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))))));
        bufp->chgBit(oldp+97,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 5U) 
                                          | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U))) 
                                      & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U)) 
                                         & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 1U) 
                                            & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 1U)))))));
        bufp->chgBit(oldp+98,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 4U) 
                                                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))))));
        bufp->chgBit(oldp+99,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 7U) 
                                          | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 6U))) 
                                      & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 2U)) | 
                                     (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 6U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 7U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 3U)))))));
        bufp->chgCData(oldp+100,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 6U))),2);
        bufp->chgCData(oldp+101,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 4U))),2);
        bufp->chgCData(oldp+102,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 8U))),4);
        bufp->chgBit(oldp+103,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xbU) 
                                            | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xaU))) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 6U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xaU)) 
                                           & (IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
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
                                            | (((~ 
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
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+104,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 8U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 4U)))))))));
        bufp->chgBit(oldp+105,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 9U) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 8U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 4U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 8U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 9U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 5U)))))));
        bufp->chgBit(oldp+106,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 4U)))))))));
        bufp->chgBit(oldp+107,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xbU) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xaU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 6U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xaU)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xbU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 7U)))))));
        bufp->chgCData(oldp+108,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xaU))),2);
        bufp->chgCData(oldp+109,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 8U))),2);
        bufp->chgCData(oldp+110,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xcU))),4);
        bufp->chgBit(oldp+111,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xfU) 
                                            | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xeU))) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xaU)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xeU)) 
                                           & (IData)(
                                                     (0xc00U 
                                                      == 
                                                      (0xc00U 
                                                       & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xfU)) 
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
                                            | (((~ 
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
                                                     >> 9U)))))))));
        bufp->chgBit(oldp+112,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xcU) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 8U)))))))));
        bufp->chgBit(oldp+113,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xdU) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xcU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 8U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xcU)) 
                                        & (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xdU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 9U)))))));
        bufp->chgBit(oldp+114,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 8U)))))))));
        bufp->chgBit(oldp+115,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU)) 
                                          & (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xc00U 
                                                      & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xfU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xbU)))))));
        bufp->chgCData(oldp+116,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xeU))),2);
        bufp->chgCData(oldp+117,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xcU))),2);
        bufp->chgCData(oldp+118,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U))),4);
        bufp->chgBit(oldp+119,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x13U) 
                                            | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x12U))) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xeU)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x12U)) 
                                           & (IData)(
                                                     (0xc000U 
                                                      == 
                                                      (0xc000U 
                                                       & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x13U)) 
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
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x10U)) 
                                                & (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x11U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 0xdU)))))))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x10U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0xcU)))))))));
        bufp->chgBit(oldp+121,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x11U) 
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
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x11U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+122,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+123,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xeU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U)) 
                                          & (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x13U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+124,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x12U))),2);
        bufp->chgCData(oldp+125,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x10U))),2);
        bufp->chgCData(oldp+126,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x14U))),4);
        bufp->chgBit(oldp+127,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x17U) 
                                            | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x16U))) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x12U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x16U)) 
                                           & (IData)(
                                                     (0xc0000U 
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
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x14U)) 
                                                & (IData)(
                                                          (0x30000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x15U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 0x11U)))))))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x14U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x10U)))))))));
        bufp->chgBit(oldp+129,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x15U) 
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
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x15U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+130,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U)))))))));
        bufp->chgBit(oldp+131,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x17U) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x12U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U)) 
                                          & (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xc0000U 
                                                      & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x17U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x13U)))))));
        bufp->chgCData(oldp+132,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x16U))),2);
        bufp->chgCData(oldp+133,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x14U))),2);
        bufp->chgCData(oldp+134,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x18U))),4);
        bufp->chgBit(oldp+135,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x1bU) 
                                            | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU))) 
                                        & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x16U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU)) 
                                           & (IData)(
                                                     (0xc00000U 
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
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x18U)) 
                                                & (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x19U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 0x15U)))))))));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x18U) 
                                                ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x14U)))))))));
        bufp->chgBit(oldp+137,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x19U) 
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
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x19U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+138,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x18U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x14U)))))))));
        bufp->chgBit(oldp+139,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1bU) 
                                           | (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x16U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU)) 
                                          & (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xc00000U 
                                                      & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1bU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+140,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x1aU))),2);
        bufp->chgCData(oldp+141,((3U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x18U))),2);
        bufp->chgIData(oldp+142,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
        bufp->chgIData(oldp+143,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
        bufp->chgIData(oldp+144,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
        bufp->chgIData(oldp+145,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
        bufp->chgIData(oldp+146,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
        bufp->chgIData(oldp+147,(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+148,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less),7);
        bufp->chgCData(oldp+149,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal),7);
        bufp->chgBit(oldp+150,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgBit(oldp+151,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgBit(oldp+152,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgBit(oldp+153,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgBit(oldp+154,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgBit(oldp+155,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__DOT__w_equal_high));
        bufp->chgIData(oldp+156,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+157,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+158,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+160,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
        bufp->chgIData(oldp+161,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
        bufp->chgBit(oldp+162,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
        bufp->chgIData(oldp+163,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
        bufp->chgIData(oldp+164,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
        bufp->chgCData(oldp+165,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
        bufp->chgCData(oldp+166,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
        bufp->chgCData(oldp+167,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+168,((0xfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
        bufp->chgBit(oldp+169,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+170,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
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
        bufp->chgCData(oldp+171,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+172,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+173,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 4U))),4);
        bufp->chgCData(oldp+174,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+175,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+176,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+177,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+178,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+179,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 8U))),4);
        bufp->chgCData(oldp+180,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+181,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+182,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+183,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+184,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+185,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+186,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+187,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+188,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+189,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+190,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+191,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+192,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+193,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+194,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+195,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+196,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+197,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+198,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+199,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+200,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+201,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+202,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+203,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+204,((0xfU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+205,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+206,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+207,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+208,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+209,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain),8);
        bufp->chgIData(oldp+210,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
        bufp->chgIData(oldp+211,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+212,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                   ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                             ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                            << 4U) 
                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
        bufp->chgIData(oldp+213,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man),28);
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+215,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),5);
        bufp->chgBit(oldp+216,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                      >> 3U))));
        bufp->chgCData(oldp+218,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position),8);
        bufp->chgCData(oldp+219,(((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                             ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
        bufp->chgCData(oldp+220,(((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                   ? 0U : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))),8);
        bufp->chgCData(oldp+221,(((0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))
                                   ? 0xfeU : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                               ? 0U
                                               : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)))),8);
        bufp->chgBit(oldp+222,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
        bufp->chgCData(oldp+223,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+224,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                   << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
        bufp->chgBit(oldp+225,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgCData(oldp+226,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
        bufp->chgCData(oldp+227,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
        bufp->chgBit(oldp+228,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+229,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+230,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+231,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+232,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgCData(oldp+233,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
        bufp->chgCData(oldp+234,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
        bufp->chgBit(oldp+235,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+236,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
        bufp->chgCData(oldp+237,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+238,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+239,(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgIData(oldp+240,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          << 4U) 
                                                         | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))),24);
        bufp->chgSData(oldp+241,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   << 0xcU) | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 8U) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))),16);
        bufp->chgCData(oldp+242,(((8U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                         << 3U)) | 
                                  ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)
                                      : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)) 
                                    << 2U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)
                                                  ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))
                                                 : 
                                                ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)
                                                  ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                  : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)
                                                     ? 
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)
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
                                                    ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)
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
        bufp->chgBit(oldp+243,((((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                         >> 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7))) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1))));
        bufp->chgCData(oldp+244,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
        bufp->chgCData(oldp+245,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_13) 
                                   << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_13)
                                                ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_13)
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
        bufp->chgBit(oldp+246,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
        bufp->chgCData(oldp+247,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7) 
                                   << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)
                                                ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)
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
        bufp->chgBit(oldp+248,((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                          | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                              >> 1U) 
                                             | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7))))));
        bufp->chgCData(oldp+249,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10) 
                                   << 2U) | ((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)
                                                ? (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)
                                                : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)
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
        bufp->chgBit(oldp+250,(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1));
        bufp->chgCData(oldp+251,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
        bufp->chgBit(oldp+252,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             >> 1U) 
                                            | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+253,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_7)))));
        bufp->chgCData(oldp+255,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgCData(oldp+256,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgCData(oldp+257,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgCData(oldp+258,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                   << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
        bufp->chgBit(oldp+259,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             >> 1U) 
                                            | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+260,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgBit(oldp+261,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_10)))));
        bufp->chgCData(oldp+262,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgCData(oldp+263,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgCData(oldp+264,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgBit(oldp+265,((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             >> 1U) 
                                            | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+266,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_13)))));
        bufp->chgCData(oldp+268,((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                   << 1U) | (1U & (
                                                   ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 1U)) 
                                                   | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      >> 3U))))),2);
        bufp->chgCData(oldp+269,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgCData(oldp+270,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
        bufp->chgCData(oldp+271,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
        bufp->chgBit(oldp+272,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
        bufp->chgCData(oldp+273,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum),4);
        bufp->chgCData(oldp+274,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgBit(oldp+275,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 1U))));
        bufp->chgCData(oldp+276,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+277,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 2U))));
        bufp->chgCData(oldp+278,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 3U))));
        bufp->chgCData(oldp+280,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 4U))));
        bufp->chgCData(oldp+282,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 5U))));
        bufp->chgCData(oldp+284,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+285,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 6U))));
        bufp->chgCData(oldp+286,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+287,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                   ? 0U : (0xffffffU 
                                           & (((0x80U 
                                                & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))
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
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)))
                                                    ? 
                                                   vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                                   [5U]
                                                    : vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)) 
                                              >> 4U)))),24);
        bufp->chgIData(oldp+288,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                   ? 0U : ((0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))
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
                                            : ((0U 
                                                != 
                                                (0xfffffffU 
                                                 & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)))
                                                ? vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                               [5U]
                                                : vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)))),28);
        bufp->chgIData(oldp+289,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                 [5U]),28);
        bufp->chgIData(oldp+290,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
        bufp->chgIData(oldp+291,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
        bufp->chgIData(oldp+292,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
        bufp->chgIData(oldp+293,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
        bufp->chgIData(oldp+294,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
        bufp->chgIData(oldp+295,(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    }
    bufp->chgCData(oldp+296,(vlSelf->SHF_left__02Ei_shift_number),3);
    bufp->chgCData(oldp+297,(vlSelf->SHF_left__02Ei_data),8);
    bufp->chgCData(oldp+298,(vlSelf->SHF_left__02Eo_data),8);
    bufp->chgCData(oldp+299,(vlSelf->SHF_right__02Ei_shift_number),3);
    bufp->chgCData(oldp+300,(vlSelf->SHF_right__02Ei_data),8);
    bufp->chgCData(oldp+301,(vlSelf->SHF_right__02Eo_data),8);
    bufp->chgCData(oldp+302,(vlSelf->SHF_left__DOT__stage_data[0]),8);
    bufp->chgCData(oldp+303,(vlSelf->SHF_left__DOT__stage_data[1]),8);
    bufp->chgCData(oldp+304,(vlSelf->SHF_left__DOT__stage_data[2]),8);
    bufp->chgCData(oldp+305,(vlSelf->SHF_left__DOT__stage_data[3]),8);
    bufp->chgCData(oldp+306,(vlSelf->SHF_right__DOT__stage_data[0]),8);
    bufp->chgCData(oldp+307,(vlSelf->SHF_right__DOT__stage_data[1]),8);
    bufp->chgCData(oldp+308,(vlSelf->SHF_right__DOT__stage_data[2]),8);
    bufp->chgCData(oldp+309,(vlSelf->SHF_right__DOT__stage_data[3]),8);
    bufp->chgBit(oldp+310,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->chgIData(oldp+311,(((0x80000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                              << 3U)) 
                              | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                    ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                             << 4U) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                  << 0x17U) | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                                ? 0U
                                                : (0x7fffffU 
                                                   & (((0x80U 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))
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
                                                       ((0U 
                                                         != 
                                                         (0xfffffffU 
                                                          & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)))
                                                         ? 
                                                        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                                        [5U]
                                                         : vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man)) 
                                                      >> 4U)))))),32);
    bufp->chgBit(oldp+312,(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara));
    bufp->chgBit(oldp+313,((1U & ((((~ (IData)((0U 
                                                != 
                                                (0x60000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_floating_a)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 0x1dU)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__i_floating_a 
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
    bufp->chgBit(oldp+314,(((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_floating_b) 
                                                    >> 0x1bU))))))));
    bufp->chgBit(oldp+315,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain))));
    bufp->chgCData(oldp+316,(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain),8);
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
