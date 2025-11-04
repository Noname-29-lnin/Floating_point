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
        bufp->chgBit(oldp+0,(vlSelf->tb_FPU_unit__DOT__i_add_sub));
        bufp->chgIData(oldp+1,(vlSelf->tb_FPU_unit__DOT__i_32_a),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_FPU_unit__DOT__i_32_b),32);
        bufp->chgBit(oldp+3,((vlSelf->tb_FPU_unit__DOT__i_32_a 
                              >> 0x1fU)));
        bufp->chgBit(oldp+4,((vlSelf->tb_FPU_unit__DOT__i_32_b 
                              >> 0x1fU)));
        bufp->chgCData(oldp+5,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x17U))),8);
        bufp->chgCData(oldp+6,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x17U))),8);
        bufp->chgIData(oldp+7,((0x800000U | (0x7fffffU 
                                             & vlSelf->tb_FPU_unit__DOT__i_32_a))),24);
        bufp->chgIData(oldp+8,((0x800000U | (0x7fffffU 
                                             & vlSelf->tb_FPU_unit__DOT__i_32_b))),24);
        bufp->chgBit(oldp+9,((1U & ((((~ (IData)((0U 
                                                  != 
                                                  (0x6000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x19U)) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                             >> 0x19U)) 
                                         & (IData)(
                                                   (0x6000000U 
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
                                             | ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x18U)) 
                                                & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                   >> 0x18U)))))))));
        bufp->chgBit(oldp+10,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                      ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                     >> 0x19U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                        ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                       >> 0x17U)))))))));
        bufp->chgCData(oldp+11,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x1bU))),4);
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1bU))),4);
        bufp->chgBit(oldp+13,((1U & (((~ (IData)((0U 
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
                                              >> 0x1cU)))))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x1bU))))))));
        bufp->chgBit(oldp+15,((1U & (((~ (IData)((0U 
                                                  != 
                                                  (0x60000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1dU)) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                             >> 0x1dU)) 
                                         & (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                               >> 0x1eU)) 
                                           & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                              >> 0x1eU)))))));
        bufp->chgCData(oldp+16,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+17,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+18,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+19,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+20,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x17U))),4);
        bufp->chgCData(oldp+21,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x17U))),4);
        bufp->chgBit(oldp+22,((1U & (((~ (IData)((0U 
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
                                              >> 0x18U)))))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x17U))))))));
        bufp->chgBit(oldp+24,((1U & (((~ (IData)((0U 
                                                  != 
                                                  (0x6000000U 
                                                   & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                      & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x19U)) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                             >> 0x19U)) 
                                         & (IData)(
                                                   (0x6000000U 
                                                    == 
                                                    (0x6000000U 
                                                     & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                               >> 0x1aU)) 
                                           & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                              >> 0x1aU)))))));
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x19U))))))));
        bufp->chgCData(oldp+26,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+27,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+28,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x17U))),2);
        bufp->chgCData(oldp+29,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x17U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+30,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare));
        bufp->chgCData(oldp+31,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max),8);
        bufp->chgCData(oldp+32,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min),8);
        bufp->chgBit(oldp+33,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x18U))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                     >> 0x18U))));
        bufp->chgIData(oldp+35,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
        bufp->chgIData(oldp+36,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
        bufp->chgIData(oldp+37,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               << 4U))),28);
        bufp->chgCData(oldp+38,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max))),4);
        bufp->chgCData(oldp+39,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+40,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),8);
        bufp->chgCData(oldp+41,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                  << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+42,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),4);
        bufp->chgBit(oldp+43,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+44,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+45,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+46,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                            >> 4U)))),4);
        bufp->chgBit(oldp+47,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+48,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+49,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgBit(oldp+50,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+51,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+52,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U))),2);
        bufp->chgCData(oldp+53,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
        bufp->chgCData(oldp+54,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 4U))),4);
        bufp->chgCData(oldp+55,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 6U))),2);
        bufp->chgCData(oldp+56,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 4U))),2);
        bufp->chgCData(oldp+57,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 8U))),4);
        bufp->chgCData(oldp+58,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+59,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 8U))),2);
        bufp->chgCData(oldp+60,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+61,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+62,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+63,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+64,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+65,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+66,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+67,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+68,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x14U))),2);
        bufp->chgIData(oldp+69,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
        bufp->chgIData(oldp+70,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
        bufp->chgIData(oldp+71,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
        bufp->chgIData(oldp+72,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
        bufp->chgIData(oldp+73,((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                 << 4U)),29);
        bufp->chgIData(oldp+74,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                               << 4U))),28);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+75,((1U & (((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x1bU) 
                                            | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x16U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1aU)) 
                                           & (IData)(
                                                     (0xc00000U 
                                                      == 
                                                      (0xc00000U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x1bU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x17U)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
                                         & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x19U) 
                                                 | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x18U))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x14U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x18U)) 
                                                & (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x19U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 0x15U)))))) 
                                     | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6) 
                                         & ((((~ ((
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x17U) 
                                                  | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x16U))) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x12U)) 
                                             | (((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x16U)) 
                                                 & (IData)(
                                                           (0xc0000U 
                                                            == 
                                                            (0xc0000U 
                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                | ((~ 
                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x17U)) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x13U)))) 
                                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                                               & (((~ 
                                                    ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x15U) 
                                                     | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x14U))) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U)) 
                                                  | (((~ 
                                                       (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x14U)) 
                                                      & (IData)(
                                                                (0x30000U 
                                                                 == 
                                                                 (0x30000U 
                                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                     | ((~ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                          [5U] 
                                                          >> 0x15U)) 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                           >> 0x11U))))))) 
                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
                                            & ((((~ 
                                                  ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x13U) 
                                                   | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x12U))) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0xeU)) 
                                                | (((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x12U)) 
                                                    & (IData)(
                                                              (0xc000U 
                                                               == 
                                                               (0xc000U 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                   | ((~ 
                                                       (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x13U)) 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0xfU)))) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                                  & (((~ 
                                                       ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0x11U) 
                                                        | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                           [5U] 
                                                           >> 0x10U))) 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0xcU)) 
                                                     | (((~ 
                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                           [5U] 
                                                           >> 0x10U)) 
                                                         & (IData)(
                                                                   (0x3000U 
                                                                    == 
                                                                    (0x3000U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                        | ((~ 
                                                            (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                             [5U] 
                                                             >> 0x11U)) 
                                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                              >> 0xdU))))))) 
                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
                                               & ((((~ 
                                                     ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                       [5U] 
                                                       >> 0xfU) 
                                                      | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0xeU))) 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                       >> 0xaU)) 
                                                   | (((~ 
                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 0xeU)) 
                                                       & (IData)(
                                                                 (0xc00U 
                                                                  == 
                                                                  (0xc00U 
                                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                      | ((~ 
                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                           [5U] 
                                                           >> 0xfU)) 
                                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                            >> 0xbU)))) 
                                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                                     & (((~ 
                                                          ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U] 
                                                            >> 0xdU) 
                                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                              [5U] 
                                                              >> 0xcU))) 
                                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                            >> 8U)) 
                                                        | (((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                              [5U] 
                                                              >> 0xcU)) 
                                                            & (IData)(
                                                                      (0x300U 
                                                                       == 
                                                                       (0x300U 
                                                                        & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                           | ((~ 
                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 0xdU)) 
                                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                 >> 9U))))))) 
                                              | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                                  & ((((~ 
                                                        ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                          [5U] 
                                                          >> 0xbU) 
                                                         | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U] 
                                                            >> 0xaU))) 
                                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                          >> 6U)) 
                                                      | (((~ 
                                                           (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U] 
                                                            >> 0xaU)) 
                                                          & (IData)(
                                                                    (0xc0U 
                                                                     == 
                                                                     (0xc0U 
                                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                         | ((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                              [5U] 
                                                              >> 0xbU)) 
                                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                               >> 7U)))) 
                                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                                        & (((~ 
                                                             ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                               [5U] 
                                                               >> 9U) 
                                                              | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                 [5U] 
                                                                 >> 8U))) 
                                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                               >> 4U)) 
                                                           | (((~ 
                                                                (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                 [5U] 
                                                                 >> 8U)) 
                                                               & (IData)(
                                                                         (0x30U 
                                                                          == 
                                                                          (0x30U 
                                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                              | ((~ 
                                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                   [5U] 
                                                                   >> 9U)) 
                                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                    >> 5U))))))) 
                                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                                     & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                           [5U] 
                                                                           >> 8U) 
                                                                          ^ 
                                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                           >> 4U)))))))) 
                                                    & ((((~ 
                                                          ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U] 
                                                            >> 7U) 
                                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                              [5U] 
                                                              >> 6U))) 
                                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                            >> 2U)) 
                                                        | (((~ 
                                                             (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                              [5U] 
                                                              >> 6U)) 
                                                            & (IData)(
                                                                      (0xcU 
                                                                       == 
                                                                       (0xcU 
                                                                        & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                           | ((~ 
                                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 7U)) 
                                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                 >> 3U)))) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                           [5U] 
                                                                           >> 6U) 
                                                                          ^ 
                                                                          (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                           >> 2U)))))) 
                                                          & (((~ 
                                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                 [5U] 
                                                                 >> 5U) 
                                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                   [5U] 
                                                                   >> 4U))) 
                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                                             | (((~ 
                                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                   [5U] 
                                                                   >> 4U)) 
                                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                     >> 1U) 
                                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                                                | ((~ 
                                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                     [5U] 
                                                                     >> 5U)) 
                                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                                      >> 1U)))))))))))))));
        bufp->chgBit(oldp+76,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xbU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xaU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 6U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xaU)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xbU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 7U)))) 
                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 9U) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 8U))) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 4U)) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 8U)) 
                                               & (IData)(
                                                         (0x30U 
                                                          == 
                                                          (0x30U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 9U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 5U)))))))));
        bufp->chgBit(oldp+77,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU)) 
                                          & (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xc00U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xfU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xbU)))) 
                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xdU) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xcU))) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 8U)) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xcU)) 
                                               & (IData)(
                                                         (0x300U 
                                                          == 
                                                          (0x300U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xdU)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 9U)))))))));
        bufp->chgBit(oldp+78,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xeU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U)) 
                                          & (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x13U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xfU)))) 
                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x11U) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U))) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xcU)) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U)) 
                                               & (IData)(
                                                         (0x3000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x11U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0xdU)))))))));
        bufp->chgBit(oldp+79,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x17U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x12U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U)) 
                                          & (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xc0000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x17U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x13U)))) 
                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x15U) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x14U))) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x10U)) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x14U)) 
                                               & (IData)(
                                                         (0x30000U 
                                                          == 
                                                          (0x30000U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x15U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0x11U)))))))));
        bufp->chgBit(oldp+80,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1bU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x16U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU)) 
                                          & (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xc00000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1bU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x17U)))) 
                                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x19U) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x18U))) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x14U)) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x18U)) 
                                               & (IData)(
                                                         (0x300000U 
                                                          == 
                                                          (0x300000U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x19U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0x15U)))))))));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U) 
                                               ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 4U)))))))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU) 
                                               ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 8U)))))))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U) 
                                               ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0xcU)))))))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                               & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U) 
                                               ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0x10U)))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgIData(oldp+85,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                [5U]),28);
        bufp->chgBit(oldp+86,((1U & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 7U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 6U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 2U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 6U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 7U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 3U)))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 6U) 
                                                        ^ 
                                                        (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 2U)))))) 
                                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 5U) 
                                                | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U))) 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                           | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U)) 
                                               & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 1U) 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 5U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+87,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 2U))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U]))))))));
        bufp->chgBit(oldp+88,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 6U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 2U)))))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 4U) 
                                                       ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))))))));
        bufp->chgCData(oldp+89,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),4);
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U])))))));
        bufp->chgBit(oldp+91,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 2U))))))));
        bufp->chgCData(oldp+92,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 2U))),2);
        bufp->chgCData(oldp+93,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U])),2);
        bufp->chgCData(oldp+94,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 4U))),4);
        bufp->chgBit(oldp+95,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 5U) 
                                          | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U))) 
                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                     | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 4U)) 
                                         & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 1U) 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 5U)) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 1U)))))));
        bufp->chgBit(oldp+96,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 4U) 
                                                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max))))))));
        bufp->chgBit(oldp+97,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 7U) 
                                          | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 6U))) 
                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 2U)) | 
                                     (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 6U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 7U)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 3U)))))));
        bufp->chgBit(oldp+98,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 2U)))))))));
        bufp->chgCData(oldp+99,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 6U))),2);
        bufp->chgCData(oldp+100,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 4U))),2);
        bufp->chgCData(oldp+101,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 8U))),4);
        bufp->chgBit(oldp+102,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 9U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 8U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 4U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 8U)) 
                                        & (IData)((0x30U 
                                                   == 
                                                   (0x30U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 9U)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 5U)))))));
        bufp->chgBit(oldp+103,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 4U)))))))));
        bufp->chgBit(oldp+104,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xbU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xaU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 6U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xaU)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xbU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 7U)))))));
        bufp->chgCData(oldp+105,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xaU))),2);
        bufp->chgCData(oldp+106,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 8U))),2);
        bufp->chgCData(oldp+107,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xcU))),4);
        bufp->chgBit(oldp+108,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xdU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xcU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 8U)) | 
                                      (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xcU)) 
                                        & (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xdU)) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                             >> 9U)))))));
        bufp->chgBit(oldp+109,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 8U)))))))));
        bufp->chgBit(oldp+110,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0xfU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xeU)) 
                                          & (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xc00U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xfU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xbU)))))));
        bufp->chgCData(oldp+111,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xeU))),2);
        bufp->chgCData(oldp+112,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xcU))),2);
        bufp->chgCData(oldp+113,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U))),4);
        bufp->chgBit(oldp+114,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x11U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x10U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xcU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x10U)) 
                                          & (IData)(
                                                    (0x3000U 
                                                     == 
                                                     (0x3000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x11U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+115,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+116,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x13U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0xeU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x12U)) 
                                          & (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x13U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+117,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x12U))),2);
        bufp->chgCData(oldp+118,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x10U))),2);
        bufp->chgCData(oldp+119,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x14U))),4);
        bufp->chgBit(oldp+120,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x15U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x14U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x10U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x14U)) 
                                          & (IData)(
                                                    (0x30000U 
                                                     == 
                                                     (0x30000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x15U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+121,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U)))))))));
        bufp->chgBit(oldp+122,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x17U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x12U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x16U)) 
                                          & (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xc0000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x17U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x13U)))))));
        bufp->chgCData(oldp+123,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x16U))),2);
        bufp->chgCData(oldp+124,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x14U))),2);
        bufp->chgCData(oldp+125,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x18U))),4);
        bufp->chgBit(oldp+126,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x19U) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x18U))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x14U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x18U)) 
                                          & (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x19U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+127,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x18U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x14U)))))))));
        bufp->chgBit(oldp+128,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x1bU) 
                                           | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x16U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU)) 
                                          & (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xc00000U 
                                                      & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1bU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+129,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x1aU))),2);
        bufp->chgCData(oldp+130,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x18U))),2);
        bufp->chgIData(oldp+131,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
        bufp->chgIData(oldp+132,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
        bufp->chgIData(oldp+133,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
        bufp->chgIData(oldp+134,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
        bufp->chgIData(oldp+135,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
        bufp->chgIData(oldp+136,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+137,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+138,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_compara));
        bufp->chgBit(oldp+139,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+140,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
        bufp->chgIData(oldp+141,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
        bufp->chgBit(oldp+142,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
        bufp->chgIData(oldp+143,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
        bufp->chgIData(oldp+144,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
        bufp->chgCData(oldp+145,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
        bufp->chgCData(oldp+146,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+147,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
        bufp->chgBit(oldp+148,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+149,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+150,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+151,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 4U))),4);
        bufp->chgCData(oldp+152,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+153,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+154,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+155,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+156,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 8U))),4);
        bufp->chgCData(oldp+157,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+158,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+159,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+160,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+161,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+162,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+163,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+164,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+165,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+166,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+167,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+168,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+169,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+170,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+171,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+172,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+173,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+174,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+175,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+176,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+177,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+178,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+179,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+180,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgBit(oldp+181,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
        bufp->chgBit(oldp+182,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high));
        bufp->chgBit(oldp+183,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high));
        bufp->chgBit(oldp+184,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high));
        bufp->chgBit(oldp+185,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high));
        bufp->chgBit(oldp+186,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high));
        bufp->chgIData(oldp+187,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
        bufp->chgIData(oldp+188,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
        bufp->chgIData(oldp+189,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+190,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgBit(oldp+191,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+192,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+193,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+194,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+195,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+196,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))));
        bufp->chgCData(oldp+197,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+198,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+199,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+200,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+201,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+202,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+203,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+204,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+205,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)))));
        bufp->chgCData(oldp+206,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+207,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                      >> 3U))));
        bufp->chgBit(oldp+209,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)))));
        bufp->chgCData(oldp+210,((((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))) 
                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                  >> 1U)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))))))))),2);
        bufp->chgCData(oldp+211,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgIData(oldp+212,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                 [5U]),28);
        bufp->chgIData(oldp+213,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
        bufp->chgIData(oldp+214,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
        bufp->chgIData(oldp+215,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
        bufp->chgIData(oldp+216,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
        bufp->chgIData(oldp+217,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
        bufp->chgIData(oldp+218,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+220,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
        bufp->chgBit(oldp+221,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 1U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 2U))));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 3U))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 4U))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 5U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgCData(oldp+228,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),5);
        bufp->chgBit(oldp+229,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag));
        bufp->chgCData(oldp+230,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgIData(oldp+231,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man),28);
        bufp->chgBit(oldp+232,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit));
        bufp->chgIData(oldp+233,((0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U))),28);
        bufp->chgCData(oldp+234,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p),7);
        bufp->chgCData(oldp+235,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 4U))),4);
        bufp->chgBit(oldp+236,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 4U)))));
        bufp->chgCData(oldp+237,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 8U))),4);
        bufp->chgBit(oldp+238,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 8U)))));
        bufp->chgCData(oldp+239,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+240,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0xcU)))));
        bufp->chgCData(oldp+241,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+242,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x10U)))));
        bufp->chgCData(oldp+243,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+244,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x14U)))));
        bufp->chgCData(oldp+245,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+246,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x18U)))));
        bufp->chgCData(oldp+247,((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+248,((0xfU == (0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                 >> 0x18U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgCData(oldp+249,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+250,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
        bufp->chgBit(oldp+251,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+252,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+253,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+254,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
        bufp->chgBit(oldp+255,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+256,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+257,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgBit(oldp+258,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgBit(oldp+259,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+260,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+261,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+262,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c),8);
        bufp->chgBit(oldp+263,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))));
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 1U))));
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 2U))));
        bufp->chgBit(oldp+266,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 3U))));
        bufp->chgBit(oldp+267,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 4U))));
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 5U))));
        bufp->chgBit(oldp+269,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 6U))));
    }
    bufp->chgBit(oldp+270,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->chgIData(oldp+271,(((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                              << 3U)) 
                              | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                    ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
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
    bufp->chgBit(oldp+272,(vlSelf->tb_FPU_unit__DOT__o_ov_flag));
    bufp->chgCData(oldp+273,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                               ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                        << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
    bufp->chgIData(oldp+274,(((0xf00000U & ((0xff00000U 
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
                                                ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 0xcU))) 
                                    | ((0xf00U & ((0xfffff00U 
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
                                          | (0xfU & 
                                             ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                               >> 4U) 
                                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))),24);
    bufp->chgCData(oldp+275,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->chgIData(oldp+276,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man),28);
    bufp->chgCData(oldp+277,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->chgBit(oldp+278,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
    bufp->chgCData(oldp+279,(((IData)(vlSelf->tb_FPU_unit__DOT__o_ov_flag)
                               ? 1U : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                        ? 0U : (0xffU 
                                                & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)))))),8);
    bufp->chgBit(oldp+280,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->chgCData(oldp+281,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->chgCData(oldp+282,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->chgCData(oldp+283,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->chgBit(oldp+284,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->chgCData(oldp+285,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+286,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->chgCData(oldp+287,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->chgCData(oldp+288,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->chgCData(oldp+289,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->chgBit(oldp+290,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->chgCData(oldp+291,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+292,((1U & ((((~ (IData)((0U 
                                                != 
                                                (0x60000000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1dU)) | 
                                   (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
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
    bufp->chgBit(oldp+293,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x1bU))))))));
    bufp->chgIData(oldp+294,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))),24);
    bufp->chgSData(oldp+295,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 0xcU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            << 8U) 
                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               << 4U) 
                                              | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))),16);
    bufp->chgCData(oldp+296,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                               ? 0U : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                                        << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)))))),4);
    bufp->chgBit(oldp+297,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
    bufp->chgCData(oldp+298,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+299,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                               ? 0U : ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                              << 2U)) 
                                       | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                           << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))))),3);
    bufp->chgBit(oldp+300,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    bufp->chgCData(oldp+301,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
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
                                                ? (
                                                   (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24))
                                                : (
                                                   (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                 : 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)))))))),5);
    bufp->chgCData(oldp+302,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)
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
                                          | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
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
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))))))),3);
    bufp->chgBit(oldp+303,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+304,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)
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
                                          | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
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
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))))))),3);
    bufp->chgBit(oldp+305,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1));
    bufp->chgCData(oldp+306,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                               << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                           << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3))))),4);
    bufp->chgCData(oldp+307,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+308,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)) 
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
    bufp->chgCData(oldp+309,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+310,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
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
    bufp->chgCData(oldp+311,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                     << 2U)) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23)))),3);
    bufp->chgCData(oldp+312,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
    bufp->chgCData(oldp+313,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum),4);
    bufp->chgBit(oldp+314,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
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
    bufp->chgCData(oldp+315,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->chgBit(oldp+316,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+317,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+318,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+319,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+320,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+321,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+322,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+323,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+324,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+325,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+326,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+327,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgIData(oldp+328,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                               ? 0U : (0xffffffU & 
                                       (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                        >> 4U)))),24);
    bufp->chgBit(oldp+329,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                     >> 3U)))));
    bufp->chgBit(oldp+330,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                      >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20)))));
    bufp->chgBit(oldp+331,(((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                              & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                 >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                               & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                      >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20))))));
    bufp->chgIData(oldp+332,(((0xf000000U & ((0xf000000U 
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
                                    | ((0xf000U & (
                                                   (0xffff000U 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                       >> 4U)) 
                                                   ^ 
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                    << 0xcU))) 
                                       | ((0xf00U & 
                                           ((0xfffff00U 
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
    bufp->chgCData(oldp+333,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g),7);
    bufp->chgCData(oldp+334,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),4);
    bufp->chgBit(oldp+335,((1U & (IData)(((0xf0U == 
                                           (0xf0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))));
    bufp->chgCData(oldp+336,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->chgCData(oldp+337,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 8U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+338,((1U & (IData)(((0xf00U == 
                                           (0xf00U 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+339,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+340,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0xcU) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+341,((1U & (IData)(((0xf000U 
                                           == (0xf000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+342,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+343,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x10U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+344,((1U & (IData)(((0xf0000U 
                                           == (0xf0000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+345,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+346,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x14U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+347,((1U & (IData)(((0xf00000U 
                                           == (0xf00000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+348,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+349,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x18U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+350,((1U & (IData)(((0xf000000U 
                                           == (0xf000000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+351,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+352,((0xfU & ((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                               >> 0x18U)) 
                                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+353,((1U & ((((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                     >> 0x1bU) & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                  >> 0x1aU)) 
                                   & (7U & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                            >> 0x19U))) 
                                  & (0xfU & ((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                              >> 0x18U) 
                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))));
    bufp->chgCData(oldp+354,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+355,(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
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
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
}
