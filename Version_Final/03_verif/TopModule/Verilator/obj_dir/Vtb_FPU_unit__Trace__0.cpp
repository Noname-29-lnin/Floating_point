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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_A__DOT__rom[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_FPU_unit__DOT__ROM_UNIT_B__DOT__rom[15]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+32,(vlSelf->tb_FPU_unit__DOT__i_add_sub));
        bufp->chgIData(oldp+33,(vlSelf->tb_FPU_unit__DOT__i_32_a),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_FPU_unit__DOT__i_32_b),32);
        bufp->chgCData(oldp+35,(vlSelf->tb_FPU_unit__DOT__w_i_addr),4);
        bufp->chgBit(oldp+36,((vlSelf->tb_FPU_unit__DOT__i_32_a 
                               >> 0x1fU)));
        bufp->chgBit(oldp+37,((vlSelf->tb_FPU_unit__DOT__i_32_b 
                               >> 0x1fU)));
        bufp->chgCData(oldp+38,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+39,((0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+40,((0x800000U | (0x7fffffU 
                                              & vlSelf->tb_FPU_unit__DOT__i_32_a))),24);
        bufp->chgIData(oldp+41,((0x800000U | (0x7fffffU 
                                              & vlSelf->tb_FPU_unit__DOT__i_32_b))),24);
        bufp->chgBit(oldp+42,((1U & ((((~ (IData)((0U 
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
                                     | ((~ (IData)(
                                                   (0U 
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
        bufp->chgBit(oldp+43,((1U & ((~ (IData)((0U 
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
        bufp->chgCData(oldp+44,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x1bU))),4);
        bufp->chgCData(oldp+45,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x1bU))),4);
        bufp->chgBit(oldp+46,((1U & (((~ (IData)((0U 
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
        bufp->chgBit(oldp+47,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x1bU))))))));
        bufp->chgBit(oldp+48,((1U & (((~ (IData)((0U 
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
        bufp->chgCData(oldp+49,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+50,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1dU))),2);
        bufp->chgCData(oldp+51,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+52,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x1bU))),2);
        bufp->chgCData(oldp+53,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                         >> 0x17U))),4);
        bufp->chgCData(oldp+54,((0xfU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                         >> 0x17U))),4);
        bufp->chgBit(oldp+55,((1U & (((~ (IData)((0U 
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
        bufp->chgBit(oldp+56,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x17U))))))));
        bufp->chgBit(oldp+57,((1U & (((~ (IData)((0U 
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
        bufp->chgBit(oldp+58,((1U & (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x19U))))))));
        bufp->chgCData(oldp+59,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+60,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+61,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 0x17U))),2);
        bufp->chgCData(oldp+62,((3U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 0x17U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+63,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare));
        bufp->chgCData(oldp+64,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max),8);
        bufp->chgCData(oldp+65,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min),8);
        bufp->chgBit(oldp+66,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x18U))));
        bufp->chgBit(oldp+67,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                     >> 0x18U))));
        bufp->chgIData(oldp+68,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),24);
        bufp->chgIData(oldp+69,((0xffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min)),24);
        bufp->chgIData(oldp+70,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               << 4U))),28);
        bufp->chgCData(oldp+71,((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max))),4);
        bufp->chgCData(oldp+72,((0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+73,((0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),8);
        bufp->chgCData(oldp+74,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                  << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+75,((0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min)))),4);
        bufp->chgBit(oldp+76,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+77,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+78,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+79,((0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                            >> 4U)))),4);
        bufp->chgBit(oldp+80,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+81,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+82,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgBit(oldp+83,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high));
        bufp->chgCData(oldp+84,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+85,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 2U))),2);
        bufp->chgCData(oldp+86,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)),2);
        bufp->chgCData(oldp+87,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 4U))),4);
        bufp->chgCData(oldp+88,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 6U))),2);
        bufp->chgCData(oldp+89,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 4U))),2);
        bufp->chgCData(oldp+90,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 8U))),4);
        bufp->chgCData(oldp+91,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+92,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 8U))),2);
        bufp->chgCData(oldp+93,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+94,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+95,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+96,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+97,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+98,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+99,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+100,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+101,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0x14U))),2);
        bufp->chgIData(oldp+102,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a),25);
        bufp->chgIData(oldp+103,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b),25);
        bufp->chgIData(oldp+104,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max),25);
        bufp->chgIData(oldp+105,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min),25);
        bufp->chgIData(oldp+106,((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                  << 4U)),29);
        bufp->chgIData(oldp+107,((0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                                << 4U))),28);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+108,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xcU 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 6U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 2U)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 7U) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 6U))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 3U)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 7U)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high) 
                                         & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 1U) 
                                                 | vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 4U)) 
                                            | (((~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 4U))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 1U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 5U)))))))));
        bufp->chgBit(oldp+109,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xaU)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 6U)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xbU) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xaU))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 7U)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xbU)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 8U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 4U)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 9U) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 5U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 9U)))))))));
        bufp->chgBit(oldp+110,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc00U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xeU)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xaU)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xfU) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xeU))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xbU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xfU)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xcU)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 8U)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0xdU) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 9U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0xdU)))))))));
        bufp->chgBit(oldp+111,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x12U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0xeU)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x13U) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x12U))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xfU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x13U)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x10U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0xcU)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x11U) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0xdU)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x11U)))))))));
        bufp->chgBit(oldp+112,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0000U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x16U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x12U)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x17U) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x16U))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x13U)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x17U)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x14U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0x10U)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x15U) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0x11U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x15U)))))))));
        bufp->chgBit(oldp+113,((1U & ((((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0x1aU)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                               >> 0x16U)) 
                                           & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1bU) 
                                              & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0x1aU))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x17U)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1bU)))) 
                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x18U)) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                  >> 0x14U)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 0x19U) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x18U))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0x15U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x19U)))))))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 4U)))))))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 4U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 8U)))))))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 8U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0xcU)))))))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0xcU) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x10U)))))))));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                                & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                 >> 0x10U) 
                                                ^ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x14U)))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+119,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U]),28);
        bufp->chgBit(oldp+120,((1U & (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 2U) 
                                       | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 3U) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 2U)) 
                                          | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 3U))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                         [5U] 
                                                         >> 2U))))) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] | 
                                            (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 1U) 
                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U]) 
                                             | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 1U))))))));
        bufp->chgBit(oldp+121,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 2U))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U]))))))));
        bufp->chgCData(oldp+122,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U])),4);
        bufp->chgBit(oldp+123,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                      [5U] | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 1U) 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U]) 
                                              | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 1U))))));
        bufp->chgBit(oldp+124,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U])))))));
        bufp->chgBit(oldp+125,((1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 2U) 
                                      | (((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 3U) 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 2U)) 
                                         | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 3U))))));
        bufp->chgBit(oldp+126,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+127,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 2U))),2);
        bufp->chgCData(oldp+128,((3U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U])),2);
        bufp->chgCData(oldp+129,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 4U))),4);
        bufp->chgBit(oldp+130,((1U & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
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
                                               >> 5U)))))));
        bufp->chgBit(oldp+131,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 4U)))))))));
        bufp->chgBit(oldp+132,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 6U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 2U)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 7U) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 6U))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 3U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 7U)))))));
        bufp->chgCData(oldp+133,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 6U))),2);
        bufp->chgCData(oldp+134,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 4U))),2);
        bufp->chgCData(oldp+135,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 8U))),4);
        bufp->chgBit(oldp+136,((1U & (((~ (IData)((0U 
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
                                               >> 9U)))))));
        bufp->chgBit(oldp+137,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 4U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 8U)))))))));
        bufp->chgBit(oldp+138,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xaU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 6U)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xbU) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xaU))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 7U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xbU)))))));
        bufp->chgCData(oldp+139,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xaU))),2);
        bufp->chgCData(oldp+140,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 8U))),2);
        bufp->chgCData(oldp+141,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xcU))),4);
        bufp->chgBit(oldp+142,((1U & (((~ (IData)((0U 
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
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+143,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 8U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+144,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc00U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xeU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0xaU)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0xfU) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0xeU))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xbU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xfU)))))));
        bufp->chgCData(oldp+145,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xeU))),2);
        bufp->chgCData(oldp+146,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xcU))),2);
        bufp->chgCData(oldp+147,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U))),4);
        bufp->chgBit(oldp+148,((1U & (((~ (IData)((0U 
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
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+149,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xcU) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x10U)))))))));
        bufp->chgBit(oldp+150,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x12U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0xeU)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x13U) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x12U))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0xfU)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x13U)))))));
        bufp->chgCData(oldp+151,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x12U))),2);
        bufp->chgCData(oldp+152,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x10U))),2);
        bufp->chgCData(oldp+153,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x14U))),4);
        bufp->chgBit(oldp+154,((1U & (((~ (IData)((0U 
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
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+155,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x10U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U)))))))));
        bufp->chgBit(oldp+156,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc0000U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x16U)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0x12U)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x17U) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x16U))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x13U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x17U)))))));
        bufp->chgCData(oldp+157,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x16U))),2);
        bufp->chgCData(oldp+158,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x14U))),2);
        bufp->chgCData(oldp+159,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x18U))),4);
        bufp->chgBit(oldp+160,((1U & (((~ (IData)((0U 
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
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+161,((1U & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x14U) 
                                                     ^ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x18U)))))))));
        bufp->chgBit(oldp+162,((1U & (((~ (IData)((0U 
                                                   != 
                                                   (0xc00000U 
                                                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x1aU)) 
                                      | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0x16U)) 
                                          & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1bU) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 0x1aU))) 
                                         | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 0x17U)) 
                                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1bU)))))));
        bufp->chgCData(oldp+163,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x1aU))),2);
        bufp->chgCData(oldp+164,((3U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x18U))),2);
        bufp->chgIData(oldp+165,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0]),28);
        bufp->chgIData(oldp+166,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1]),28);
        bufp->chgIData(oldp+167,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2]),28);
        bufp->chgIData(oldp+168,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3]),28);
        bufp->chgIData(oldp+169,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4]),28);
        bufp->chgIData(oldp+170,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+171,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less));
        bufp->chgBit(oldp+172,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+173,((1U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+174,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),28);
        bufp->chgIData(oldp+175,((0xfffffffU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)),28);
        bufp->chgBit(oldp+176,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry));
        bufp->chgIData(oldp+177,((0xfffffffU & (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min))),28);
        bufp->chgIData(oldp+178,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b),28);
        bufp->chgCData(oldp+179,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p),7);
        bufp->chgCData(oldp+180,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max)),4);
        bufp->chgCData(oldp+181,((0xfU & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b)),4);
        bufp->chgBit(oldp+182,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+183,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+184,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+185,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 4U))),4);
        bufp->chgCData(oldp+186,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+187,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+188,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+189,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+190,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 8U))),4);
        bufp->chgCData(oldp+191,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+192,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+193,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+194,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+195,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+196,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+197,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+198,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+199,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+200,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+201,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+202,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+203,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+204,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+205,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+206,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+207,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+208,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+209,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+210,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+211,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+212,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+213,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+214,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgBit(oldp+215,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
        bufp->chgBit(oldp+216,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_1__DOT__w_equal_high));
        bufp->chgBit(oldp+217,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high));
        bufp->chgBit(oldp+218,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high));
        bufp->chgBit(oldp+219,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high));
        bufp->chgBit(oldp+220,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high));
        bufp->chgBit(oldp+221,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high));
        bufp->chgIData(oldp+222,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b),29);
        bufp->chgIData(oldp+223,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max),29);
        bufp->chgIData(oldp+224,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min),29);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+225,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgBit(oldp+226,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+227,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+228,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+229,((((IData)(((0U == 
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
        bufp->chgCData(oldp+230,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+231,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))));
        bufp->chgCData(oldp+232,((((IData)(((0U == 
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
        bufp->chgCData(oldp+233,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+234,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+235,((((IData)(((0U == 
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
        bufp->chgCData(oldp+236,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+237,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        bufp->chgCData(oldp+238,((((IData)(((0U == 
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
        bufp->chgCData(oldp+239,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+240,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)))));
        bufp->chgCData(oldp+241,((((IData)(((0U == 
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
        bufp->chgCData(oldp+242,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                      >> 3U))));
        bufp->chgBit(oldp+244,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)))));
        bufp->chgCData(oldp+245,((((IData)(((0U == 
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
        bufp->chgCData(oldp+246,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xeU] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgIData(oldp+247,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                 [5U]),28);
        bufp->chgIData(oldp+248,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0]),28);
        bufp->chgIData(oldp+249,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1]),28);
        bufp->chgIData(oldp+250,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2]),28);
        bufp->chgIData(oldp+251,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3]),28);
        bufp->chgIData(oldp+252,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4]),28);
        bufp->chgIData(oldp+253,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5]),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+254,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+255,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c),8);
        bufp->chgBit(oldp+256,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))));
        bufp->chgBit(oldp+257,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 1U))));
        bufp->chgBit(oldp+258,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 2U))));
        bufp->chgBit(oldp+259,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 3U))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 4U))));
        bufp->chgBit(oldp+261,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 5U))));
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgCData(oldp+263,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),5);
        bufp->chgBit(oldp+264,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag));
        bufp->chgCData(oldp+265,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgIData(oldp+266,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man),28);
        bufp->chgBit(oldp+267,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit));
        bufp->chgIData(oldp+268,((0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U))),28);
        bufp->chgCData(oldp+269,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p),7);
        bufp->chgCData(oldp+270,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 4U))),4);
        bufp->chgBit(oldp+271,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 4U)))));
        bufp->chgCData(oldp+272,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 8U))),4);
        bufp->chgBit(oldp+273,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 8U)))));
        bufp->chgCData(oldp+274,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+275,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0xcU)))));
        bufp->chgCData(oldp+276,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+277,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x10U)))));
        bufp->chgCData(oldp+278,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+279,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x14U)))));
        bufp->chgCData(oldp+280,((0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+281,((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x18U)))));
        bufp->chgCData(oldp+282,((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+283,((0xfU == (0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                 >> 0x18U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgCData(oldp+284,((((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+285,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
        bufp->chgBit(oldp+286,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgCData(oldp+287,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+288,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+289,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
        bufp->chgBit(oldp+290,((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgCData(oldp+291,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+292,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+293,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgBit(oldp+294,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+295,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgBit(oldp+296,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 7U))));
        bufp->chgCData(oldp+297,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c),8);
        bufp->chgBit(oldp+298,((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))));
        bufp->chgBit(oldp+299,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 1U))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 2U))));
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 3U))));
        bufp->chgBit(oldp+302,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 4U))));
        bufp->chgBit(oldp+303,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 5U))));
        bufp->chgBit(oldp+304,((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                      >> 6U))));
    }
    bufp->chgBit(oldp+305,(vlSelf->tb_FPU_unit__DOT__i_clk));
    bufp->chgBit(oldp+306,(vlSelf->tb_FPU_unit__DOT__i_rst_n));
    bufp->chgIData(oldp+307,(((0x80000000U & ((((0x80000000U 
                                                 & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                                     << 0x1fU) 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                       << 7U))) 
                                                | (((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0x18U)) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                                   << 0x1fU)) 
                                               & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less) 
                                                  << 0x1fU)) 
                                              | (0x80000000U 
                                                 & (((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less)) 
                                                     << 0x1fU) 
                                                    & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                                       << 7U))))) 
                              | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                   << 0x1bU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                 ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                                << 0x17U)) 
                                 | ((0x700000U & ((0xff00000U 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                      >> 4U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 0x14U))) 
                                    | ((0xf0000U & 
                                        ((0xfff0000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x10U))) 
                                       | ((0xf000U 
                                           & ((0xffff000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
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
    bufp->chgIData(oldp+308,(vlSelf->tb_FPU_unit__DOT__w_o_data_rom_a),32);
    bufp->chgIData(oldp+309,(vlSelf->tb_FPU_unit__DOT__w_o_data_rom_b),32);
    bufp->chgBit(oldp+310,(vlSelf->tb_FPU_unit__DOT__o_ov_flag));
    bufp->chgBit(oldp+311,((1U & (((((~ (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0x18U)) 
                                    | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0x18U)) 
                                       & (IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less)) 
                                  | ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_COMP_28BIT_less)) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                                        >> 0x18U))))));
    bufp->chgCData(oldp+312,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->chgIData(oldp+313,(((0xf00000U & ((0xff00000U 
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
    bufp->chgCData(oldp+314,(((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->chgIData(oldp+315,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man),28);
    bufp->chgBit(oldp+316,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_overflow));
    bufp->chgBit(oldp+317,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry));
    bufp->chgCData(oldp+318,(((IData)(vlSelf->tb_FPU_unit__DOT__o_ov_flag)
                               ? 1U : ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                        ? 0U : (0xffU 
                                                & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)))))),8);
    bufp->chgBit(oldp+319,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->chgCData(oldp+320,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->chgCData(oldp+321,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->chgCData(oldp+322,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->chgBit(oldp+323,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->chgCData(oldp+324,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+325,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->chgCData(oldp+326,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->chgCData(oldp+327,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
    bufp->chgCData(oldp+328,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->chgBit(oldp+329,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
    bufp->chgCData(oldp+330,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+331,((1U & ((((~ (IData)((0U 
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
    bufp->chgBit(oldp+332,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                     ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                    >> 0x1bU))))))));
    bufp->chgIData(oldp+333,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))))),24);
    bufp->chgSData(oldp+334,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 0xcU) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                            << 8U) 
                                           | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                               << 4U) 
                                              | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))),16);
    bufp->chgCData(oldp+335,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                               ? 0U : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                                        << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)))))),4);
    bufp->chgBit(oldp+336,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag));
    bufp->chgCData(oldp+337,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+338,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                               ? 0U : ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                              << 2U)) 
                                       | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                           << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))))),3);
    bufp->chgBit(oldp+339,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    bufp->chgCData(oldp+340,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
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
    bufp->chgCData(oldp+341,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)
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
    bufp->chgBit(oldp+342,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0));
    bufp->chgCData(oldp+343,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)
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
    bufp->chgBit(oldp+344,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1));
    bufp->chgCData(oldp+345,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
                               << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                                          << 2U) | 
                                         (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
                                           << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3))))),4);
    bufp->chgCData(oldp+346,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+347,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)) 
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
    bufp->chgCData(oldp+348,((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                               << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))),8);
    bufp->chgCData(oldp+349,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
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
    bufp->chgCData(oldp+350,(((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                                     << 2U)) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23)))),3);
    bufp->chgCData(oldp+351,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g),7);
    bufp->chgCData(oldp+352,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum),4);
    bufp->chgBit(oldp+353,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
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
    bufp->chgCData(oldp+354,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->chgBit(oldp+355,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+356,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+357,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+358,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+359,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+360,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+361,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+362,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+363,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+364,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgBit(oldp+365,((1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
    bufp->chgCData(oldp+366,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgIData(oldp+367,(((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                               ? 0U : (0xffffffU & 
                                       (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                        >> 4U)))),24);
    bufp->chgBit(oldp+368,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                     >> 3U)))));
    bufp->chgBit(oldp+369,((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                      >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20)))));
    bufp->chgBit(oldp+370,(((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                              & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                 >> 3U)) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                               & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                  & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                      >> 1U) | vlSelf->__VdfgRegularize_hd87f99a1_0_20))))));
    bufp->chgIData(oldp+371,(((0xf000000U & ((0xf000000U 
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
    bufp->chgCData(oldp+372,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g),7);
    bufp->chgCData(oldp+373,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),4);
    bufp->chgBit(oldp+374,((1U & (IData)(((0xf0U == 
                                           (0xf0U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))));
    bufp->chgCData(oldp+375,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
    bufp->chgCData(oldp+376,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 8U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+377,((1U & (IData)(((0xf00U == 
                                           (0xf00U 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+378,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+379,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0xcU) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+380,((1U & (IData)(((0xf000U 
                                           == (0xf000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+381,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+382,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x10U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+383,((1U & (IData)(((0xf0000U 
                                           == (0xf0000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+384,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+385,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x14U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+386,((1U & (IData)(((0xf00000U 
                                           == (0xf00000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+387,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+388,((0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                       >> 0x18U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+389,((1U & (IData)(((0xf000000U 
                                           == (0xf000000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))))));
    bufp->chgCData(oldp+390,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+391,((0xfU & ((0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                               >> 0x18U)) 
                                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))),4);
    bufp->chgBit(oldp+392,((1U & ((((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                     >> 0x1bU) & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                  >> 0x1aU)) 
                                   & (7U & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                            >> 0x19U))) 
                                  & (0xfU & ((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                              >> 0x18U) 
                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)))))));
    bufp->chgCData(oldp+393,(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    bufp->chgCData(oldp+394,(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number),5);
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
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
}
