// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPU_32bit__Syms.h"


void VFPU_32bit___024root__trace_chg_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFPU_32bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_chg_0\n"); );
    // Init
    VFPU_32bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFPU_32bit___024root*>(voidSelf);
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFPU_32bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFPU_32bit___024root__trace_chg_0_sub_0(VFPU_32bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                    >> 0x1cU))));
        bufp->chgBit(oldp+1,(vlSelf->FPU_32bit__DOT__EXP_o_exp_diff_signal));
        bufp->chgCData(oldp+2,(((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                  ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                 << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                           ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
        bufp->chgCData(oldp+3,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp),8);
        bufp->chgCData(oldp+4,((0xfU & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp))),4);
        bufp->chgCData(oldp+5,((0xfU & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_greater_exp) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+6,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp),8);
        bufp->chgCData(oldp+7,((0xffU & (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp)))),8);
        bufp->chgBit(oldp+8,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                              | ((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                 & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
        bufp->chgCData(oldp+9,((((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                 << 1U) | (0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
        bufp->chgCData(oldp+10,((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                                  << 1U) | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
        bufp->chgBit(oldp+11,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgCData(oldp+12,((0xfU & (~ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp)))),4);
        bufp->chgCData(oldp+13,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                 ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
        bufp->chgBit(oldp+14,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+15,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+16,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+17,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+18,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgCData(oldp+19,((0xfU & (~ ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__w_less_exp) 
                                            >> 4U)))),4);
        bufp->chgCData(oldp+20,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                 ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
        bufp->chgBit(oldp+21,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+22,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
        bufp->chgCData(oldp+23,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+24,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+25,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_DIFF_EXPONENT_UNIT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgIData(oldp+26,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0),29);
        bufp->chgIData(oldp+27,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1),29);
        bufp->chgIData(oldp+28,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a),29);
        bufp->chgIData(oldp+29,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0),29);
        bufp->chgIData(oldp+30,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0),29);
        bufp->chgIData(oldp+31,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0)),32);
        bufp->chgBit(oldp+32,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0 
                                     >> 0x1cU))));
        bufp->chgIData(oldp+33,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0)),28);
        bufp->chgIData(oldp+34,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0)),28);
        bufp->chgBit(oldp+35,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_carry_in));
        bufp->chgIData(oldp+36,((0xfffffffU & (~ vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_he874b486__0))),28);
        bufp->chgIData(oldp+37,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b),28);
        bufp->chgCData(oldp+38,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_p),7);
        bufp->chgCData(oldp+39,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_g),7);
        bufp->chgCData(oldp+40,((0xfU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0)),4);
        bufp->chgCData(oldp+41,((0xfU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b)),4);
        bufp->chgBit(oldp+42,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+43,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
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
        bufp->chgCData(oldp+44,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+45,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+46,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 4U))),4);
        bufp->chgCData(oldp+47,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 4U))),4);
        bufp->chgBit(oldp+48,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+49,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+50,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+51,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+52,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 8U))),4);
        bufp->chgCData(oldp+53,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 8U))),4);
        bufp->chgBit(oldp+54,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+55,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+56,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+57,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+58,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+59,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 0xcU))),4);
        bufp->chgBit(oldp+60,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+61,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+62,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+63,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+64,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+65,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+66,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+67,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+68,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+69,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+70,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+71,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 0x14U))),4);
        bufp->chgBit(oldp+72,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+73,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+74,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+75,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+76,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT____VdfgExtracted_hc027727c__0 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+77,((0xfU & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__w_i_mantissa_b 
                                         >> 0x18U))),4);
        bufp->chgBit(oldp+78,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+79,((1U & (((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
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
        bufp->chgCData(oldp+80,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+81,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgCData(oldp+82,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT____Vcellinp__MANTISSA_UNIT__i_diff_value),5);
        bufp->chgIData(oldp+83,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_0)),28);
        bufp->chgBit(oldp+84,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a 
                                     >> 0x1cU))));
        bufp->chgIData(oldp+85,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_mantissa_a)),28);
        bufp->chgBit(oldp+86,((1U & (vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1 
                                     >> 0x1cU))));
        bufp->chgIData(oldp+87,((0xfffffffU & vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__w_mantiss_less_1)),28);
        bufp->chgBit(oldp+88,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_swap_UNIT__DOT__w_compare));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+89,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                                [5U]),32);
        bufp->chgIData(oldp+90,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data
                                [5U]),28);
        bufp->chgIData(oldp+91,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[0]),28);
        bufp->chgIData(oldp+92,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[1]),28);
        bufp->chgIData(oldp+93,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[2]),28);
        bufp->chgIData(oldp+94,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[3]),28);
        bufp->chgIData(oldp+95,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[4]),28);
        bufp->chgIData(oldp+96,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data[5]),28);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+97,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                  << 0x18U) | vlSelf->__VdfgRegularize_hd87f99a1_0_23)),28);
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                     >> 7U))));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                     >> 3U))));
        bufp->chgIData(oldp+100,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                   << 0x18U) | vlSelf->__VdfgRegularize_hd87f99a1_0_23)),32);
        bufp->chgIData(oldp+101,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                   << 0xcU) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                << 8U) 
                                               | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))))),17);
        bufp->chgCData(oldp+102,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                   << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
        bufp->chgCData(oldp+103,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
        bufp->chgCData(oldp+104,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
        bufp->chgCData(oldp+105,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                   << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
        bufp->chgCData(oldp+106,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
        bufp->chgCData(oldp+107,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
        bufp->chgIData(oldp+108,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                   << 8U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                              << 4U) 
                                             | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))),17);
        bufp->chgCData(oldp+109,((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data) 
                                   << 4U) | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))),8);
        bufp->chgCData(oldp+110,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
        bufp->chgCData(oldp+111,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_1__i_data),4);
        bufp->chgCData(oldp+112,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),8);
        bufp->chgCData(oldp+113,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data),4);
        bufp->chgCData(oldp+114,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c),8);
        bufp->chgBit(oldp+115,((1U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))));
        bufp->chgCData(oldp+116,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 1U))));
        bufp->chgCData(oldp+118,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+119,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 2U))));
        bufp->chgCData(oldp+120,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 3U))));
        bufp->chgCData(oldp+122,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+123,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 4U))));
        bufp->chgCData(oldp+124,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 5U))));
        bufp->chgCData(oldp+126,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                      >> 6U))));
        bufp->chgCData(oldp+128,(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+129,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b),4);
        bufp->chgBit(oldp+130,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
        bufp->chgBit(oldp+131,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g));
        bufp->chgCData(oldp+132,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g),4);
        bufp->chgCData(oldp+133,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p),4);
        bufp->chgBit(oldp+134,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__w_zero_flag_1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+135,(vlSelf->FPU_32bit__DOT__NOR_o_lopd),5);
        bufp->chgCData(oldp+136,(vlSelf->FPU_32bit__DOT__NOR_o_lopd),8);
        bufp->chgBit(oldp+137,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C));
        bufp->chgCData(oldp+138,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b),4);
        bufp->chgCData(oldp+139,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                  ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))),4);
        bufp->chgBit(oldp+140,((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
        bufp->chgBit(oldp+141,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g));
        bufp->chgCData(oldp+142,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g),4);
        bufp->chgCData(oldp+143,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p),4);
        bufp->chgCData(oldp+144,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c),4);
        bufp->chgCData(oldp+145,(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c),4);
    }
    bufp->chgBit(oldp+146,(vlSelf->i_alu_op));
    bufp->chgIData(oldp+147,(vlSelf->i_data_a),32);
    bufp->chgIData(oldp+148,(vlSelf->i_data_b),32);
    bufp->chgIData(oldp+149,(vlSelf->o_result),32);
    bufp->chgBit(oldp+150,((vlSelf->i_data_a >> 0x1fU)));
    bufp->chgBit(oldp+151,((vlSelf->i_data_b >> 0x1fU)));
    bufp->chgCData(oldp+152,((0xffU & (vlSelf->i_data_a 
                                       >> 0x17U))),8);
    bufp->chgCData(oldp+153,((0xffU & (vlSelf->i_data_b 
                                       >> 0x17U))),8);
    bufp->chgIData(oldp+154,((0x800000U | (0x7fffffU 
                                           & vlSelf->i_data_a))),25);
    bufp->chgIData(oldp+155,((0x800000U | (0x7fffffU 
                                           & vlSelf->i_data_b))),25);
    bufp->chgBit(oldp+156,((1U & ((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
                                  & ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                     ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))));
    bufp->chgBit(oldp+157,((1U & ((~ (IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)) 
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
    bufp->chgIData(oldp+158,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
                               ? 0U : (0xfffffffU & 
                                       ((1U & ((~ ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
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
                                                [5U]))))),28);
    bufp->chgBit(oldp+159,(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag));
    bufp->chgCData(oldp+160,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
                               ? 0U : ((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                         ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                        << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                  ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))),8);
    bufp->chgCData(oldp+161,(((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                               << 4U) | ((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                         ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))),8);
    bufp->chgCData(oldp+162,(((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                               ? 0U : (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd))),8);
    bufp->chgCData(oldp+163,(((0x80U & (IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c))
                               ? 0xfeU : ((8U & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data))
                                           ? 0U : (IData)(vlSelf->FPU_32bit__DOT__NOR_o_lopd)))),8);
    bufp->chgBit(oldp+164,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                            | ((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                               & (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C)))));
    bufp->chgCData(oldp+165,((((IData)((0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                               << 1U) | (0xfU == (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))),2);
    bufp->chgCData(oldp+166,((((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g) 
                               << 1U) | (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g))),2);
    bufp->chgCData(oldp+167,(((IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              ^ (IData)(vlSelf->FPU_32bit__DOT__EXP_UNIT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))),4);
    bufp->chgIData(oldp+168,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data
                             [5U]),32);
    bufp->chgCData(oldp+169,(((8U & ((~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
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
    bufp->chgBit(oldp+170,((((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                  >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                             >> 1U) 
                                            | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))) 
                            & (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))));
    bufp->chgCData(oldp+171,(((8U & ((~ (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0)) 
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
    bufp->chgCData(oldp+172,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8) 
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
    bufp->chgBit(oldp+173,((1U & ((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))))));
    bufp->chgCData(oldp+174,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11) 
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
    bufp->chgBit(oldp+175,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1));
    bufp->chgBit(oldp+176,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->chgCData(oldp+177,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+178,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)))));
    bufp->chgCData(oldp+179,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgBit(oldp+180,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                      >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->chgCData(oldp+181,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+182,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)))));
    bufp->chgCData(oldp+183,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+184,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
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
    bufp->chgBit(oldp+185,((1U & ((~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                       >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18))))));
    bufp->chgCData(oldp+186,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),3);
    bufp->chgBit(oldp+187,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->chgBit(oldp+188,((1U & (~ (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | (((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT____Vcellinp__LOPD_4bit_unit_0__i_data)))))));
    bufp->chgCData(oldp+189,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+190,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))));
    bufp->chgCData(oldp+191,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+192,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgIData(oldp+193,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[0]),32);
    bufp->chgIData(oldp+194,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[1]),32);
    bufp->chgIData(oldp+195,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[2]),32);
    bufp->chgIData(oldp+196,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[3]),32);
    bufp->chgIData(oldp+197,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[4]),32);
    bufp->chgIData(oldp+198,(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data[5]),32);
    bufp->chgIData(oldp+199,(((IData)(vlSelf->FPU_32bit__DOT__NOR_o_zero_flag)
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
    bufp->chgIData(oldp+200,((0x800000U | (0x7fffffU 
                                           & vlSelf->i_data_a))),28);
    bufp->chgIData(oldp+201,((0x800000U | (0x7fffffU 
                                           & vlSelf->i_data_b))),28);
}

void VFPU_32bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root__trace_cleanup\n"); );
    // Init
    VFPU_32bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFPU_32bit___024root*>(voidSelf);
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
