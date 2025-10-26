// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024root.h"

void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___nba_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___nba_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x60ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_FPU_unit___024root___nba_comb__TOP__0(vlSelf);
        Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low));
        Vtb_FPU_unit_COMP_4bit___nba_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high));
        Vtb_FPU_unit___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___nba_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_FPU_unit__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_FPU_unit__DOT__i_rst_n;
    }
    if (((IData)(vlSelf->tb_FPU_unit__DOT__i_fpu_op) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT____Vtogcov__i_fpu_op))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_fpu_op 
            = vlSelf->tb_FPU_unit__DOT__i_fpu_op;
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffeU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (1U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffdU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (2U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffbU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (4U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffff7U & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (8U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffefU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffdfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffbfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffff7fU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffeffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffdffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffbffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffff7ffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffefffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffdfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffbfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffff7fffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffeffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffdffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffbffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfff7ffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffefffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffdfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffbfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xff7fffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfeffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfdffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfbffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xf7ffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xefffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xdfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xbfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if (((vlSelf->tb_FPU_unit__DOT__i_floating_a ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0x7fffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffeU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (1U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffdU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (2U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffbU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (4U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffff7U & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (8U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffefU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffdfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffbfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffff7fU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffeffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffdffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffbffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffff7ffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffefffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffdfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffbfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffff7fffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffeffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffdffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffbffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfff7ffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffefffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffdfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffbfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xff7fffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfeffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfdffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfbffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xf7ffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xefffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xdfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xbfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if (((vlSelf->tb_FPU_unit__DOT__i_floating_b ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0x7fffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___nba_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___nba_comb__TOP__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_equal) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_low 
            = vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_equal;
    }
}
