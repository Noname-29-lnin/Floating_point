// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_SUM_unit__Syms.h"


void Vtb_SUM_unit___024root__trace_chg_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_SUM_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_chg_0\n"); );
    // Init
    Vtb_SUM_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SUM_unit___024root*>(voidSelf);
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_SUM_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_SUM_unit___024root__trace_chg_0_sub_0(Vtb_SUM_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    CData/*31:0*/ __Vdeeptemp_h8efd7b05__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_SUM_unit__DOT__i_carry));
        bufp->chgCData(oldp+1,(vlSelf->tb_SUM_unit__DOT__i_data_a),8);
        bufp->chgCData(oldp+2,(vlSelf->tb_SUM_unit__DOT__i_data_b),8);
        bufp->chgCData(oldp+3,((0xffU & ((IData)(vlSelf->tb_SUM_unit__DOT__i_data_a) 
                                         + ((IData)(vlSelf->tb_SUM_unit__DOT__i_data_b) 
                                            + (IData)(vlSelf->tb_SUM_unit__DOT__i_carry))))),8);
        bufp->chgBit(oldp+4,((1U & (((IData)(vlSelf->tb_SUM_unit__DOT__i_data_a) 
                                     + ((IData)(vlSelf->tb_SUM_unit__DOT__i_data_b) 
                                        + (IData)(vlSelf->tb_SUM_unit__DOT__i_carry))) 
                                    >> 8U))));
        bufp->chgCData(oldp+5,(vlSelf->tb_SUM_unit__DOT__expected_sum),8);
        bufp->chgBit(oldp+6,(vlSelf->tb_SUM_unit__DOT__expected_carry));
        bufp->chgIData(oldp+7,(vlSelf->tb_SUM_unit__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_SUM_unit__DOT__pass_count),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_SUM_unit__DOT__fail_count),32);
    }
    __Vdeeptemp_h8efd7b05__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelf->__Vm_traceActivity
                                                                                [3U] 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [4U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [5U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [6U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [7U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [8U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [9U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xaU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xbU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xcU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xdU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xeU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0xfU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x10U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x11U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x12U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x13U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x14U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x15U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x16U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x17U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x18U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x19U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1aU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1bU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1cU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1dU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1eU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x1fU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x20U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x21U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x22U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x23U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x24U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x25U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x26U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x27U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x28U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x29U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2aU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2bU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2cU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2dU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2eU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x2fU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x30U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x31U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x32U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x33U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x34U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x35U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x36U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x37U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x38U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x39U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3aU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3bU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3cU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3dU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3eU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x3fU]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x40U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x41U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x42U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x43U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x44U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x45U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x46U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x47U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x48U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x49U]) 
                                                                                | vlSelf->__Vm_traceActivity
                                                                                [0x4aU]) 
                                                                               | vlSelf->__Vm_traceActivity
                                                                               [0x4bU]) 
                                                                              | vlSelf->__Vm_traceActivity
                                                                              [0x4cU]) 
                                                                             | vlSelf->__Vm_traceActivity
                                                                             [0x4dU]) 
                                                                            | vlSelf->__Vm_traceActivity
                                                                            [0x4eU]) 
                                                                           | vlSelf->__Vm_traceActivity
                                                                           [0x4fU]) 
                                                                          | vlSelf->__Vm_traceActivity
                                                                          [0x50U]) 
                                                                         | vlSelf->__Vm_traceActivity
                                                                         [0x51U]) 
                                                                        | vlSelf->__Vm_traceActivity
                                                                        [0x52U]) 
                                                                       | vlSelf->__Vm_traceActivity
                                                                       [0x53U]) 
                                                                      | vlSelf->__Vm_traceActivity
                                                                      [0x54U]) 
                                                                     | vlSelf->__Vm_traceActivity
                                                                     [0x55U]) 
                                                                    | vlSelf->__Vm_traceActivity
                                                                    [0x56U]) 
                                                                   | vlSelf->__Vm_traceActivity
                                                                   [0x57U]) 
                                                                  | vlSelf->__Vm_traceActivity
                                                                  [0x58U]) 
                                                                 | vlSelf->__Vm_traceActivity
                                                                 [0x59U]) 
                                                                | vlSelf->__Vm_traceActivity
                                                                [0x5aU]) 
                                                               | vlSelf->__Vm_traceActivity
                                                               [0x5bU]) 
                                                              | vlSelf->__Vm_traceActivity
                                                              [0x5cU]) 
                                                             | vlSelf->__Vm_traceActivity
                                                             [0x5dU]) 
                                                            | vlSelf->__Vm_traceActivity
                                                            [0x5eU]) 
                                                           | vlSelf->__Vm_traceActivity
                                                           [0x5fU]) 
                                                          | vlSelf->__Vm_traceActivity
                                                          [0x60U]) 
                                                         | vlSelf->__Vm_traceActivity
                                                         [0x61U]) 
                                                        | vlSelf->__Vm_traceActivity
                                                        [0x62U]) 
                                                       | vlSelf->__Vm_traceActivity
                                                       [0x63U]) 
                                                      | vlSelf->__Vm_traceActivity
                                                      [0x64U]) 
                                                     | vlSelf->__Vm_traceActivity
                                                     [0x65U]) 
                                                    | vlSelf->__Vm_traceActivity
                                                    [0x66U]) 
                                                   | vlSelf->__Vm_traceActivity
                                                   [0x67U]) 
                                                  | vlSelf->__Vm_traceActivity
                                                  [0x68U]) 
                                                 | vlSelf->__Vm_traceActivity
                                                 [0x69U]) 
                                                | vlSelf->__Vm_traceActivity
                                                [0x6aU]) 
                                               | vlSelf->__Vm_traceActivity
                                               [0x6bU]) 
                                              | vlSelf->__Vm_traceActivity
                                              [0x6cU]) 
                                             | vlSelf->__Vm_traceActivity
                                             [0x6dU]) 
                                            | vlSelf->__Vm_traceActivity
                                            [0x6eU]) 
                                           | vlSelf->__Vm_traceActivity
                                           [0x6fU]) 
                                          | vlSelf->__Vm_traceActivity
                                          [0x70U]) 
                                         | vlSelf->__Vm_traceActivity
                                         [0x71U]) | 
                                        vlSelf->__Vm_traceActivity
                                        [0x72U]) | 
                                       vlSelf->__Vm_traceActivity
                                       [0x73U]) | vlSelf->__Vm_traceActivity
                                      [0x74U]) | vlSelf->__Vm_traceActivity
                                     [0x75U]) | vlSelf->__Vm_traceActivity
                                    [0x76U]) | vlSelf->__Vm_traceActivity
                                   [0x77U]) | vlSelf->__Vm_traceActivity
                                  [0x78U]) | vlSelf->__Vm_traceActivity
                                 [0x79U]) | vlSelf->__Vm_traceActivity
                                [0x7aU]);
    if (VL_UNLIKELY(((((((__Vdeeptemp_h8efd7b05__0 
                          | vlSelf->__Vm_traceActivity
                          [0x7bU]) | vlSelf->__Vm_traceActivity
                         [0x7cU]) | vlSelf->__Vm_traceActivity
                        [0x7dU]) | vlSelf->__Vm_traceActivity
                       [0x7eU]) | vlSelf->__Vm_traceActivity
                      [0x7fU]) | vlSelf->__Vm_traceActivity
                     [0x80U]))) {
        bufp->chgIData(oldp+10,(vlSelf->KSA_unit__DOT__w_P[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->KSA_unit__DOT__w_P[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->KSA_unit__DOT__w_P[2]),32);
        bufp->chgIData(oldp+13,(vlSelf->KSA_unit__DOT__w_P[3]),32);
        bufp->chgIData(oldp+14,(vlSelf->KSA_unit__DOT__w_P[4]),32);
        bufp->chgIData(oldp+15,(vlSelf->KSA_unit__DOT__w_P[5]),32);
        bufp->chgBit(oldp+16,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xaU))));
        bufp->chgBit(oldp+17,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 9U))));
        bufp->chgBit(oldp+18,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xaU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 9U)))));
        bufp->chgBit(oldp+19,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xbU))));
        bufp->chgBit(oldp+20,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xbU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xaU)))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xcU))));
        bufp->chgBit(oldp+22,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xcU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xbU)))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xdU))));
        bufp->chgBit(oldp+24,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xdU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xcU)))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xeU))));
        bufp->chgBit(oldp+26,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xeU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xdU)))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0xfU))));
        bufp->chgBit(oldp+28,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xfU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xeU)))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x10U))));
        bufp->chgBit(oldp+30,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x10U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0xfU)))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x11U))));
        bufp->chgBit(oldp+32,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x11U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x10U)))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x12U))));
        bufp->chgBit(oldp+34,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x12U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x11U)))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x13U))));
        bufp->chgBit(oldp+36,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x13U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x12U)))));
        bufp->chgBit(oldp+37,((1U & vlSelf->KSA_unit__DOT__w_P
                               [0U])));
        bufp->chgBit(oldp+38,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x14U))));
        bufp->chgBit(oldp+39,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x14U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x13U)))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x15U))));
        bufp->chgBit(oldp+41,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x15U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x14U)))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x16U))));
        bufp->chgBit(oldp+43,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x16U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x15U)))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x17U))));
        bufp->chgBit(oldp+45,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x17U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x16U)))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x18U))));
        bufp->chgBit(oldp+47,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x18U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x17U)))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x19U))));
        bufp->chgBit(oldp+49,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x19U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x18U)))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x1aU))));
        bufp->chgBit(oldp+51,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1aU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x19U)))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x1bU))));
        bufp->chgBit(oldp+53,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1bU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x1aU)))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x1cU))));
        bufp->chgBit(oldp+55,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1cU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x1bU)))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x1dU))));
        bufp->chgBit(oldp+57,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1dU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x1cU)))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 2U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 1U))));
        bufp->chgBit(oldp+60,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 2U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 1U)))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 0x1eU))));
        bufp->chgBit(oldp+62,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1eU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x1dU)))));
        bufp->chgBit(oldp+63,((vlSelf->KSA_unit__DOT__w_P
                               [0U] >> 0x1fU)));
        bufp->chgBit(oldp+64,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1fU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [0U] >> 0x1eU)))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 3U))));
        bufp->chgBit(oldp+66,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 3U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 2U)))));
        bufp->chgBit(oldp+67,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 4U))));
        bufp->chgBit(oldp+68,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 4U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 3U)))));
        bufp->chgBit(oldp+69,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 5U))));
        bufp->chgBit(oldp+70,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 5U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 4U)))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 6U))));
        bufp->chgBit(oldp+72,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 6U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 5U)))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 7U))));
        bufp->chgBit(oldp+74,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 7U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 6U)))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [0U] >> 8U))));
        bufp->chgBit(oldp+76,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 8U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 7U)))));
        bufp->chgBit(oldp+77,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 9U) & 
                                     (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 8U)))));
        bufp->chgBit(oldp+78,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xaU))));
        bufp->chgBit(oldp+79,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 8U))));
        bufp->chgBit(oldp+80,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xaU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 8U)))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xbU))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 9U))));
        bufp->chgBit(oldp+83,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xbU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 9U)))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xcU))));
        bufp->chgBit(oldp+85,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xcU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xaU)))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xdU))));
        bufp->chgBit(oldp+87,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xdU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xbU)))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xeU))));
        bufp->chgBit(oldp+89,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xeU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xcU)))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0xfU))));
        bufp->chgBit(oldp+91,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xfU) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xdU)))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0x10U))));
        bufp->chgBit(oldp+93,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x10U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xeU)))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0x11U))));
        bufp->chgBit(oldp+95,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x11U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0xfU)))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0x12U))));
        bufp->chgBit(oldp+97,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x12U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0x10U)))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->KSA_unit__DOT__w_P
                                     [1U] >> 0x13U))));
        bufp->chgBit(oldp+99,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x13U) 
                                     & (vlSelf->KSA_unit__DOT__w_P
                                        [1U] >> 0x11U)))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x14U))));
        bufp->chgBit(oldp+101,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x14U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x12U)))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x15U))));
        bufp->chgBit(oldp+103,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x15U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x13U)))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x16U))));
        bufp->chgBit(oldp+105,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x16U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x14U)))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x17U))));
        bufp->chgBit(oldp+107,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x17U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x15U)))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x18U))));
        bufp->chgBit(oldp+109,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x18U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x16U)))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x19U))));
        bufp->chgBit(oldp+111,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x19U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x17U)))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1aU))));
        bufp->chgBit(oldp+113,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1aU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x18U)))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1bU))));
        bufp->chgBit(oldp+115,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1bU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x19U)))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1cU))));
        bufp->chgBit(oldp+117,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1cU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x1aU)))));
        bufp->chgBit(oldp+118,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1dU))));
        bufp->chgBit(oldp+119,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1dU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x1bU)))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+121,((1U & vlSelf->KSA_unit__DOT__w_P
                                [1U])));
        bufp->chgBit(oldp+122,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 2U) 
                                      & vlSelf->KSA_unit__DOT__w_P
                                      [1U]))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1eU))));
        bufp->chgBit(oldp+124,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1eU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x1cU)))));
        bufp->chgBit(oldp+125,((vlSelf->KSA_unit__DOT__w_P
                                [1U] >> 0x1fU)));
        bufp->chgBit(oldp+126,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 0x1fU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 0x1dU)))));
        bufp->chgBit(oldp+127,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+129,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 4U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 2U)))));
        bufp->chgBit(oldp+130,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 5U))));
        bufp->chgBit(oldp+131,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+132,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 5U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 3U)))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 6U))));
        bufp->chgBit(oldp+134,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 6U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 4U)))));
        bufp->chgBit(oldp+135,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 7U))));
        bufp->chgBit(oldp+136,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 7U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 5U)))));
        bufp->chgBit(oldp+137,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 8U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 6U)))));
        bufp->chgBit(oldp+138,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [1U] >> 9U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [1U] >> 7U)))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xaU))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 6U))));
        bufp->chgBit(oldp+141,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xaU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 6U)))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xbU))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 7U))));
        bufp->chgBit(oldp+144,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xbU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 7U)))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xcU))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 8U))));
        bufp->chgBit(oldp+147,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xcU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 8U)))));
        bufp->chgBit(oldp+148,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xdU))));
        bufp->chgBit(oldp+149,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 9U))));
        bufp->chgBit(oldp+150,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xdU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 9U)))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xeU))));
        bufp->chgBit(oldp+152,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xeU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xaU)))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xfU))));
        bufp->chgBit(oldp+154,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0xfU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xbU)))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x10U))));
        bufp->chgBit(oldp+156,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x10U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xcU)))));
        bufp->chgBit(oldp+157,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x11U))));
        bufp->chgBit(oldp+158,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x11U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xdU)))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x12U))));
        bufp->chgBit(oldp+160,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x12U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xeU)))));
        bufp->chgBit(oldp+161,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x13U))));
        bufp->chgBit(oldp+162,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x13U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0xfU)))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x14U))));
        bufp->chgBit(oldp+164,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x14U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x10U)))));
        bufp->chgBit(oldp+165,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x15U))));
        bufp->chgBit(oldp+166,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x15U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x11U)))));
        bufp->chgBit(oldp+167,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x16U))));
        bufp->chgBit(oldp+168,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x16U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x12U)))));
        bufp->chgBit(oldp+169,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x17U))));
        bufp->chgBit(oldp+170,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x17U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x13U)))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x18U))));
        bufp->chgBit(oldp+172,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x18U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x14U)))));
        bufp->chgBit(oldp+173,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x19U))));
        bufp->chgBit(oldp+174,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x19U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x15U)))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1aU))));
        bufp->chgBit(oldp+176,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1aU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x16U)))));
        bufp->chgBit(oldp+177,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1bU))));
        bufp->chgBit(oldp+178,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1bU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x17U)))));
        bufp->chgBit(oldp+179,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1cU))));
        bufp->chgBit(oldp+180,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1cU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x18U)))));
        bufp->chgBit(oldp+181,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1dU))));
        bufp->chgBit(oldp+182,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1dU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x19U)))));
        bufp->chgBit(oldp+183,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1eU))));
        bufp->chgBit(oldp+184,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1eU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x1aU)))));
        bufp->chgBit(oldp+185,((vlSelf->KSA_unit__DOT__w_P
                                [2U] >> 0x1fU)));
        bufp->chgBit(oldp+186,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 0x1fU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 0x1bU)))));
        bufp->chgBit(oldp+187,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+188,((1U & vlSelf->KSA_unit__DOT__w_P
                                [2U])));
        bufp->chgBit(oldp+189,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 4U) 
                                      & vlSelf->KSA_unit__DOT__w_P
                                      [2U]))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 5U))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+192,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 5U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 1U)))));
        bufp->chgBit(oldp+193,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+194,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 6U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 2U)))));
        bufp->chgBit(oldp+195,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+196,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 8U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 4U)))));
        bufp->chgBit(oldp+197,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [2U] >> 9U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [2U] >> 5U)))));
        bufp->chgBit(oldp+198,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xaU))));
        bufp->chgBit(oldp+199,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+200,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0xaU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 2U)))));
        bufp->chgBit(oldp+201,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xbU))));
        bufp->chgBit(oldp+202,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 3U))));
        bufp->chgBit(oldp+203,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0xbU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 3U)))));
        bufp->chgBit(oldp+204,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xcU))));
        bufp->chgBit(oldp+205,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 4U))));
        bufp->chgBit(oldp+206,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0xcU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 4U)))));
        bufp->chgBit(oldp+207,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xdU))));
        bufp->chgBit(oldp+208,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 5U))));
        bufp->chgBit(oldp+209,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0xdU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 5U)))));
        bufp->chgBit(oldp+210,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xeU))));
        bufp->chgBit(oldp+211,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 6U))));
        bufp->chgBit(oldp+212,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0xeU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 6U)))));
        bufp->chgBit(oldp+213,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 7U))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x10U))));
        bufp->chgBit(oldp+215,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 8U))));
        bufp->chgBit(oldp+216,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x10U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 8U)))));
        bufp->chgBit(oldp+217,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x11U))));
        bufp->chgBit(oldp+218,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 9U))));
        bufp->chgBit(oldp+219,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x11U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 9U)))));
        bufp->chgBit(oldp+220,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x12U))));
        bufp->chgBit(oldp+221,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x12U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xaU)))));
        bufp->chgBit(oldp+222,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x13U))));
        bufp->chgBit(oldp+223,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x13U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xbU)))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x14U))));
        bufp->chgBit(oldp+225,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x14U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xcU)))));
        bufp->chgBit(oldp+226,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x15U))));
        bufp->chgBit(oldp+227,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x15U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xdU)))));
        bufp->chgBit(oldp+228,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x16U))));
        bufp->chgBit(oldp+229,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x16U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xeU)))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x17U))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xfU))));
        bufp->chgBit(oldp+232,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x17U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0xfU)))));
        bufp->chgBit(oldp+233,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x18U))));
        bufp->chgBit(oldp+234,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x18U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x10U)))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x19U))));
        bufp->chgBit(oldp+236,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x19U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x11U)))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x1aU))));
        bufp->chgBit(oldp+238,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1aU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x12U)))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x1bU))));
        bufp->chgBit(oldp+240,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1bU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x13U)))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x1cU))));
        bufp->chgBit(oldp+242,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1cU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x14U)))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x1dU))));
        bufp->chgBit(oldp+244,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1dU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x15U)))));
        bufp->chgBit(oldp+245,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x1eU))));
        bufp->chgBit(oldp+246,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1eU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x16U)))));
        bufp->chgBit(oldp+247,((vlSelf->KSA_unit__DOT__w_P
                                [3U] >> 0x1fU)));
        bufp->chgBit(oldp+248,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 0x1fU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 0x17U)))));
        bufp->chgBit(oldp+249,((1U & vlSelf->KSA_unit__DOT__w_P
                                [3U])));
        bufp->chgBit(oldp+250,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 8U) 
                                      & vlSelf->KSA_unit__DOT__w_P
                                      [3U]))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+252,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [3U] >> 9U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [3U] >> 1U)))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x10U))));
        bufp->chgBit(oldp+254,((1U & vlSelf->KSA_unit__DOT__w_P
                                [4U])));
        bufp->chgBit(oldp+255,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x10U) 
                                      & vlSelf->KSA_unit__DOT__w_P
                                      [4U]))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x11U))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+258,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x11U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 1U)))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x12U))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 2U))));
        bufp->chgBit(oldp+261,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x12U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 2U)))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x13U))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 3U))));
        bufp->chgBit(oldp+264,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x13U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 3U)))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x14U))));
        bufp->chgBit(oldp+266,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 4U))));
        bufp->chgBit(oldp+267,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x14U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 4U)))));
        bufp->chgBit(oldp+268,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x15U))));
        bufp->chgBit(oldp+269,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 5U))));
        bufp->chgBit(oldp+270,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x15U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 5U)))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x16U))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 6U))));
        bufp->chgBit(oldp+273,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x16U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 6U)))));
        bufp->chgBit(oldp+274,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x17U))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 7U))));
        bufp->chgBit(oldp+276,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x17U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 7U)))));
        bufp->chgBit(oldp+277,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x18U))));
        bufp->chgBit(oldp+278,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 8U))));
        bufp->chgBit(oldp+279,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x18U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 8U)))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x19U))));
        bufp->chgBit(oldp+281,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 9U))));
        bufp->chgBit(oldp+282,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x19U) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 9U)))));
        bufp->chgBit(oldp+283,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x1aU))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xaU))));
        bufp->chgBit(oldp+285,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x1aU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 0xaU)))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x1bU))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xbU))));
        bufp->chgBit(oldp+288,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x1bU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 0xbU)))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x1cU))));
        bufp->chgBit(oldp+290,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xcU))));
        bufp->chgBit(oldp+291,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x1cU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 0xcU)))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x1dU))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xdU))));
        bufp->chgBit(oldp+294,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x1dU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 0xdU)))));
        bufp->chgBit(oldp+295,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0x1eU))));
        bufp->chgBit(oldp+296,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xeU))));
        bufp->chgBit(oldp+297,((1U & ((vlSelf->KSA_unit__DOT__w_P
                                       [4U] >> 0x1eU) 
                                      & (vlSelf->KSA_unit__DOT__w_P
                                         [4U] >> 0xeU)))));
        bufp->chgBit(oldp+298,((1U & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xfU))));
    }
    bufp->chgBit(oldp+299,(vlSelf->i_carry));
    bufp->chgIData(oldp+300,(vlSelf->i_data_a),32);
    bufp->chgIData(oldp+301,(vlSelf->i_data_b),32);
    bufp->chgIData(oldp+302,(vlSelf->o_data_sum),32);
    bufp->chgBit(oldp+303,(vlSelf->o_carry));
    bufp->chgIData(oldp+304,(vlSelf->KSA_unit__DOT__w_G[0]),32);
    bufp->chgIData(oldp+305,(vlSelf->KSA_unit__DOT__w_G[1]),32);
    bufp->chgIData(oldp+306,(vlSelf->KSA_unit__DOT__w_G[2]),32);
    bufp->chgIData(oldp+307,(vlSelf->KSA_unit__DOT__w_G[3]),32);
    bufp->chgIData(oldp+308,(vlSelf->KSA_unit__DOT__w_G[4]),32);
    bufp->chgIData(oldp+309,(vlSelf->KSA_unit__DOT__w_G[5]),32);
    bufp->chgQData(oldp+310,((((QData)((IData)(vlSelf->o_carry)) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_30) 
                                                             << 0x1fU) 
                                                            | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_29) 
                                                                << 0x1eU) 
                                                               | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_28) 
                                                                   << 0x1dU) 
                                                                  | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_27) 
                                                                      << 0x1cU) 
                                                                     | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_26) 
                                                                         << 0x1bU) 
                                                                        | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_25) 
                                                                            << 0x1aU) 
                                                                           | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_24) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_23) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_22) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_21) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_20) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_19) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_18) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_17) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_16) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_15) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_14) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_13) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_12) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_11) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_10) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_9) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_7) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_5) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_4) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_3) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_1) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->KSA_unit__DOT____VdfgRegularize_h62169aa1_0_0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->i_carry)))))))))))))))))))))))))))))))))))),33);
    bufp->chgBit(oldp+312,((1U & vlSelf->i_data_a)));
    bufp->chgBit(oldp+313,((1U & vlSelf->i_data_b)));
    bufp->chgBit(oldp+314,((1U & (vlSelf->i_data_a 
                                  & vlSelf->i_data_b))));
    bufp->chgBit(oldp+315,((1U & (vlSelf->i_data_a 
                                  ^ vlSelf->i_data_b))));
    bufp->chgBit(oldp+316,((1U & (vlSelf->i_data_a 
                                  >> 0xaU))));
    bufp->chgBit(oldp+317,((1U & (vlSelf->i_data_b 
                                  >> 0xaU))));
    bufp->chgBit(oldp+318,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+319,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+320,((1U & (vlSelf->i_data_a 
                                  >> 0xbU))));
    bufp->chgBit(oldp+321,((1U & (vlSelf->i_data_b 
                                  >> 0xbU))));
    bufp->chgBit(oldp+322,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+323,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+324,((1U & (vlSelf->i_data_a 
                                  >> 0xcU))));
    bufp->chgBit(oldp+325,((1U & (vlSelf->i_data_b 
                                  >> 0xcU))));
    bufp->chgBit(oldp+326,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+327,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+328,((1U & (vlSelf->i_data_a 
                                  >> 0xdU))));
    bufp->chgBit(oldp+329,((1U & (vlSelf->i_data_b 
                                  >> 0xdU))));
    bufp->chgBit(oldp+330,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+331,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+332,((1U & (vlSelf->i_data_a 
                                  >> 0xeU))));
    bufp->chgBit(oldp+333,((1U & (vlSelf->i_data_b 
                                  >> 0xeU))));
    bufp->chgBit(oldp+334,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+335,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+336,((1U & (vlSelf->i_data_a 
                                  >> 0xfU))));
    bufp->chgBit(oldp+337,((1U & (vlSelf->i_data_b 
                                  >> 0xfU))));
    bufp->chgBit(oldp+338,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+339,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+340,((1U & (vlSelf->i_data_a 
                                  >> 0x10U))));
    bufp->chgBit(oldp+341,((1U & (vlSelf->i_data_b 
                                  >> 0x10U))));
    bufp->chgBit(oldp+342,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+343,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+344,((1U & (vlSelf->i_data_a 
                                  >> 0x11U))));
    bufp->chgBit(oldp+345,((1U & (vlSelf->i_data_b 
                                  >> 0x11U))));
    bufp->chgBit(oldp+346,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x11U))));
    bufp->chgBit(oldp+347,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x11U))));
    bufp->chgBit(oldp+348,((1U & (vlSelf->i_data_a 
                                  >> 0x12U))));
    bufp->chgBit(oldp+349,((1U & (vlSelf->i_data_b 
                                  >> 0x12U))));
    bufp->chgBit(oldp+350,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x12U))));
    bufp->chgBit(oldp+351,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x12U))));
    bufp->chgBit(oldp+352,((1U & (vlSelf->i_data_a 
                                  >> 0x13U))));
    bufp->chgBit(oldp+353,((1U & (vlSelf->i_data_b 
                                  >> 0x13U))));
    bufp->chgBit(oldp+354,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x13U))));
    bufp->chgBit(oldp+355,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x13U))));
    bufp->chgBit(oldp+356,((1U & (vlSelf->i_data_a 
                                  >> 1U))));
    bufp->chgBit(oldp+357,((1U & (vlSelf->i_data_b 
                                  >> 1U))));
    bufp->chgBit(oldp+358,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 1U))));
    bufp->chgBit(oldp+359,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 1U))));
    bufp->chgBit(oldp+360,((1U & (vlSelf->i_data_a 
                                  >> 0x14U))));
    bufp->chgBit(oldp+361,((1U & (vlSelf->i_data_b 
                                  >> 0x14U))));
    bufp->chgBit(oldp+362,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x14U))));
    bufp->chgBit(oldp+363,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x14U))));
    bufp->chgBit(oldp+364,((1U & (vlSelf->i_data_a 
                                  >> 0x15U))));
    bufp->chgBit(oldp+365,((1U & (vlSelf->i_data_b 
                                  >> 0x15U))));
    bufp->chgBit(oldp+366,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x15U))));
    bufp->chgBit(oldp+367,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x15U))));
    bufp->chgBit(oldp+368,((1U & (vlSelf->i_data_a 
                                  >> 0x16U))));
    bufp->chgBit(oldp+369,((1U & (vlSelf->i_data_b 
                                  >> 0x16U))));
    bufp->chgBit(oldp+370,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x16U))));
    bufp->chgBit(oldp+371,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x16U))));
    bufp->chgBit(oldp+372,((1U & (vlSelf->i_data_a 
                                  >> 0x17U))));
    bufp->chgBit(oldp+373,((1U & (vlSelf->i_data_b 
                                  >> 0x17U))));
    bufp->chgBit(oldp+374,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x17U))));
    bufp->chgBit(oldp+375,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x17U))));
    bufp->chgBit(oldp+376,((1U & (vlSelf->i_data_a 
                                  >> 0x18U))));
    bufp->chgBit(oldp+377,((1U & (vlSelf->i_data_b 
                                  >> 0x18U))));
    bufp->chgBit(oldp+378,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+379,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+380,((1U & (vlSelf->i_data_a 
                                  >> 0x19U))));
    bufp->chgBit(oldp+381,((1U & (vlSelf->i_data_b 
                                  >> 0x19U))));
    bufp->chgBit(oldp+382,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x19U))));
    bufp->chgBit(oldp+383,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x19U))));
    bufp->chgBit(oldp+384,((1U & (vlSelf->i_data_a 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+385,((1U & (vlSelf->i_data_b 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+386,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+387,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+388,((1U & (vlSelf->i_data_a 
                                  >> 0x1bU))));
    bufp->chgBit(oldp+389,((1U & (vlSelf->i_data_b 
                                  >> 0x1bU))));
    bufp->chgBit(oldp+390,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x1bU))));
    bufp->chgBit(oldp+391,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x1bU))));
    bufp->chgBit(oldp+392,((1U & (vlSelf->i_data_a 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+393,((1U & (vlSelf->i_data_b 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+394,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+395,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+396,((1U & (vlSelf->i_data_a 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+397,((1U & (vlSelf->i_data_b 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+398,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+399,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+400,((1U & (vlSelf->i_data_a 
                                  >> 2U))));
    bufp->chgBit(oldp+401,((1U & (vlSelf->i_data_b 
                                  >> 2U))));
    bufp->chgBit(oldp+402,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 2U))));
    bufp->chgBit(oldp+403,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 2U))));
    bufp->chgBit(oldp+404,((1U & (vlSelf->i_data_a 
                                  >> 0x1eU))));
    bufp->chgBit(oldp+405,((1U & (vlSelf->i_data_b 
                                  >> 0x1eU))));
    bufp->chgBit(oldp+406,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 0x1eU))));
    bufp->chgBit(oldp+407,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 0x1eU))));
    bufp->chgBit(oldp+408,((vlSelf->i_data_a >> 0x1fU)));
    bufp->chgBit(oldp+409,((vlSelf->i_data_b >> 0x1fU)));
    bufp->chgBit(oldp+410,(((vlSelf->i_data_a & vlSelf->i_data_b) 
                            >> 0x1fU)));
    bufp->chgBit(oldp+411,(((vlSelf->i_data_a ^ vlSelf->i_data_b) 
                            >> 0x1fU)));
    bufp->chgBit(oldp+412,((1U & (vlSelf->i_data_a 
                                  >> 3U))));
    bufp->chgBit(oldp+413,((1U & (vlSelf->i_data_b 
                                  >> 3U))));
    bufp->chgBit(oldp+414,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 3U))));
    bufp->chgBit(oldp+415,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 3U))));
    bufp->chgBit(oldp+416,((1U & (vlSelf->i_data_a 
                                  >> 4U))));
    bufp->chgBit(oldp+417,((1U & (vlSelf->i_data_b 
                                  >> 4U))));
    bufp->chgBit(oldp+418,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 4U))));
    bufp->chgBit(oldp+419,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 4U))));
    bufp->chgBit(oldp+420,((1U & (vlSelf->i_data_a 
                                  >> 5U))));
    bufp->chgBit(oldp+421,((1U & (vlSelf->i_data_b 
                                  >> 5U))));
    bufp->chgBit(oldp+422,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 5U))));
    bufp->chgBit(oldp+423,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 5U))));
    bufp->chgBit(oldp+424,((1U & (vlSelf->i_data_a 
                                  >> 6U))));
    bufp->chgBit(oldp+425,((1U & (vlSelf->i_data_b 
                                  >> 6U))));
    bufp->chgBit(oldp+426,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 6U))));
    bufp->chgBit(oldp+427,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 6U))));
    bufp->chgBit(oldp+428,((1U & (vlSelf->i_data_a 
                                  >> 7U))));
    bufp->chgBit(oldp+429,((1U & (vlSelf->i_data_b 
                                  >> 7U))));
    bufp->chgBit(oldp+430,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 7U))));
    bufp->chgBit(oldp+431,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 7U))));
    bufp->chgBit(oldp+432,((1U & (vlSelf->i_data_a 
                                  >> 8U))));
    bufp->chgBit(oldp+433,((1U & (vlSelf->i_data_b 
                                  >> 8U))));
    bufp->chgBit(oldp+434,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+435,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+436,((1U & (vlSelf->i_data_a 
                                  >> 9U))));
    bufp->chgBit(oldp+437,((1U & (vlSelf->i_data_b 
                                  >> 9U))));
    bufp->chgBit(oldp+438,((1U & ((vlSelf->i_data_a 
                                   & vlSelf->i_data_b) 
                                  >> 9U))));
    bufp->chgBit(oldp+439,((1U & ((vlSelf->i_data_a 
                                   ^ vlSelf->i_data_b) 
                                  >> 9U))));
    bufp->chgBit(oldp+440,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xaU))));
    bufp->chgBit(oldp+441,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 9U))));
    bufp->chgBit(oldp+442,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 9U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 0xaU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+443,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xbU))));
    bufp->chgBit(oldp+444,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xaU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0xbU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [0U] >> 0xaU))))));
    bufp->chgBit(oldp+445,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xcU))));
    bufp->chgBit(oldp+446,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xbU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0xcU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [0U] >> 0xbU))))));
    bufp->chgBit(oldp+447,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xdU))));
    bufp->chgBit(oldp+448,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xcU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0xdU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [0U] >> 0xcU))))));
    bufp->chgBit(oldp+449,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xeU))));
    bufp->chgBit(oldp+450,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xdU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0xeU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [0U] >> 0xdU))))));
    bufp->chgBit(oldp+451,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0xfU))));
    bufp->chgBit(oldp+452,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xeU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0xfU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [0U] >> 0xeU))))));
    bufp->chgBit(oldp+453,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x10U))));
    bufp->chgBit(oldp+454,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0xfU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x10U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0xfU))))));
    bufp->chgBit(oldp+455,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x11U))));
    bufp->chgBit(oldp+456,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x10U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x11U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x10U))))));
    bufp->chgBit(oldp+457,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x12U))));
    bufp->chgBit(oldp+458,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x11U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x12U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x11U))))));
    bufp->chgBit(oldp+459,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x13U))));
    bufp->chgBit(oldp+460,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x12U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x13U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x12U))))));
    bufp->chgBit(oldp+461,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 1U))));
    bufp->chgBit(oldp+462,((1U & vlSelf->KSA_unit__DOT__w_G
                            [0U])));
    bufp->chgBit(oldp+463,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] | ((vlSelf->KSA_unit__DOT__w_G
                                           [0U] >> 1U) 
                                          & vlSelf->KSA_unit__DOT__w_P
                                          [0U])))));
    bufp->chgBit(oldp+464,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x14U))));
    bufp->chgBit(oldp+465,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x13U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x14U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x13U))))));
    bufp->chgBit(oldp+466,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x15U))));
    bufp->chgBit(oldp+467,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x14U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x15U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x14U))))));
    bufp->chgBit(oldp+468,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x16U))));
    bufp->chgBit(oldp+469,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x15U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x16U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x15U))))));
    bufp->chgBit(oldp+470,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x17U))));
    bufp->chgBit(oldp+471,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x16U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x17U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x16U))))));
    bufp->chgBit(oldp+472,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x18U))));
    bufp->chgBit(oldp+473,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x17U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x18U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x17U))))));
    bufp->chgBit(oldp+474,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x19U))));
    bufp->chgBit(oldp+475,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x18U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x19U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x18U))))));
    bufp->chgBit(oldp+476,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x1aU))));
    bufp->chgBit(oldp+477,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x19U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1aU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x19U))))));
    bufp->chgBit(oldp+478,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x1bU))));
    bufp->chgBit(oldp+479,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x1aU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1bU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1aU))))));
    bufp->chgBit(oldp+480,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x1cU))));
    bufp->chgBit(oldp+481,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x1bU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1cU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1bU))))));
    bufp->chgBit(oldp+482,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x1dU))));
    bufp->chgBit(oldp+483,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x1cU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1dU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1cU))))));
    bufp->chgBit(oldp+484,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 2U))));
    bufp->chgBit(oldp+485,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 1U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 2U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+486,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 0x1eU))));
    bufp->chgBit(oldp+487,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x1dU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1eU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1dU))))));
    bufp->chgBit(oldp+488,((vlSelf->KSA_unit__DOT__w_G
                            [0U] >> 0x1fU)));
    bufp->chgBit(oldp+489,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 0x1eU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [0U] >> 0x1fU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [0U] >> 0x1eU))))));
    bufp->chgBit(oldp+490,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 3U))));
    bufp->chgBit(oldp+491,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 2U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 3U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+492,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 4U))));
    bufp->chgBit(oldp+493,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 3U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 4U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+494,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 5U))));
    bufp->chgBit(oldp+495,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 4U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 5U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+496,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 6U))));
    bufp->chgBit(oldp+497,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 5U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 6U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+498,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 7U))));
    bufp->chgBit(oldp+499,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 6U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 7U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+500,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [0U] >> 8U))));
    bufp->chgBit(oldp+501,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 7U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 8U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+502,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [0U] >> 8U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [0U] 
                                                   >> 9U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [0U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+503,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xaU))));
    bufp->chgBit(oldp+504,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 8U))));
    bufp->chgBit(oldp+505,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 8U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 0xaU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+506,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xbU))));
    bufp->chgBit(oldp+507,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 9U))));
    bufp->chgBit(oldp+508,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 9U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 0xbU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+509,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xcU))));
    bufp->chgBit(oldp+510,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xaU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0xcU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [1U] >> 0xaU))))));
    bufp->chgBit(oldp+511,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xdU))));
    bufp->chgBit(oldp+512,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xbU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0xdU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [1U] >> 0xbU))))));
    bufp->chgBit(oldp+513,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xeU))));
    bufp->chgBit(oldp+514,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xcU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0xeU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [1U] >> 0xcU))))));
    bufp->chgBit(oldp+515,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0xfU))));
    bufp->chgBit(oldp+516,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xdU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0xfU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [1U] >> 0xdU))))));
    bufp->chgBit(oldp+517,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x10U))));
    bufp->chgBit(oldp+518,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xeU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x10U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xeU))))));
    bufp->chgBit(oldp+519,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x11U))));
    bufp->chgBit(oldp+520,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0xfU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x11U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0xfU))))));
    bufp->chgBit(oldp+521,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x12U))));
    bufp->chgBit(oldp+522,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x10U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x12U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x10U))))));
    bufp->chgBit(oldp+523,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x13U))));
    bufp->chgBit(oldp+524,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x11U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x13U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x11U))))));
    bufp->chgBit(oldp+525,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x14U))));
    bufp->chgBit(oldp+526,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x12U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x14U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x12U))))));
    bufp->chgBit(oldp+527,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x15U))));
    bufp->chgBit(oldp+528,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x13U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x15U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x13U))))));
    bufp->chgBit(oldp+529,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x16U))));
    bufp->chgBit(oldp+530,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x14U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x16U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x14U))))));
    bufp->chgBit(oldp+531,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x17U))));
    bufp->chgBit(oldp+532,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x15U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x17U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x15U))))));
    bufp->chgBit(oldp+533,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x18U))));
    bufp->chgBit(oldp+534,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x16U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x18U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x16U))))));
    bufp->chgBit(oldp+535,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x19U))));
    bufp->chgBit(oldp+536,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x17U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x19U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x17U))))));
    bufp->chgBit(oldp+537,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x1aU))));
    bufp->chgBit(oldp+538,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x18U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1aU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x18U))))));
    bufp->chgBit(oldp+539,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x1bU))));
    bufp->chgBit(oldp+540,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x19U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1bU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x19U))))));
    bufp->chgBit(oldp+541,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x1cU))));
    bufp->chgBit(oldp+542,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x1aU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1cU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1aU))))));
    bufp->chgBit(oldp+543,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x1dU))));
    bufp->chgBit(oldp+544,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x1bU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1dU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1bU))))));
    bufp->chgBit(oldp+545,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 2U))));
    bufp->chgBit(oldp+546,((1U & vlSelf->KSA_unit__DOT__w_G
                            [1U])));
    bufp->chgBit(oldp+547,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] | ((vlSelf->KSA_unit__DOT__w_G
                                           [1U] >> 2U) 
                                          & vlSelf->KSA_unit__DOT__w_P
                                          [1U])))));
    bufp->chgBit(oldp+548,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 0x1eU))));
    bufp->chgBit(oldp+549,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x1cU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1eU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1cU))))));
    bufp->chgBit(oldp+550,((vlSelf->KSA_unit__DOT__w_G
                            [1U] >> 0x1fU)));
    bufp->chgBit(oldp+551,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 0x1dU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [1U] >> 0x1fU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [1U] >> 0x1dU))))));
    bufp->chgBit(oldp+552,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 3U))));
    bufp->chgBit(oldp+553,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 1U))));
    bufp->chgBit(oldp+554,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 1U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 3U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+555,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 4U))));
    bufp->chgBit(oldp+556,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 2U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 4U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+557,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 5U))));
    bufp->chgBit(oldp+558,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 3U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 5U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+559,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 6U))));
    bufp->chgBit(oldp+560,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 4U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 6U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+561,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [1U] >> 7U))));
    bufp->chgBit(oldp+562,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 5U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 7U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+563,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 6U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 8U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+564,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [1U] >> 7U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [1U] 
                                                   >> 9U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [1U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+565,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xaU))));
    bufp->chgBit(oldp+566,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 6U))));
    bufp->chgBit(oldp+567,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 6U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 0xaU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+568,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xbU))));
    bufp->chgBit(oldp+569,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 7U))));
    bufp->chgBit(oldp+570,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 7U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 0xbU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+571,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xcU))));
    bufp->chgBit(oldp+572,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 8U))));
    bufp->chgBit(oldp+573,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 8U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 0xcU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+574,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xdU))));
    bufp->chgBit(oldp+575,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 9U))));
    bufp->chgBit(oldp+576,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 9U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 0xdU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+577,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xeU))));
    bufp->chgBit(oldp+578,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xaU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0xeU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [2U] >> 0xaU))))));
    bufp->chgBit(oldp+579,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0xfU))));
    bufp->chgBit(oldp+580,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xbU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0xfU) & 
                                   (vlSelf->KSA_unit__DOT__w_P
                                    [2U] >> 0xbU))))));
    bufp->chgBit(oldp+581,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x10U))));
    bufp->chgBit(oldp+582,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xcU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x10U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xcU))))));
    bufp->chgBit(oldp+583,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x11U))));
    bufp->chgBit(oldp+584,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xdU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x11U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xdU))))));
    bufp->chgBit(oldp+585,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x12U))));
    bufp->chgBit(oldp+586,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xeU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x12U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xeU))))));
    bufp->chgBit(oldp+587,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x13U))));
    bufp->chgBit(oldp+588,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0xfU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x13U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0xfU))))));
    bufp->chgBit(oldp+589,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x14U))));
    bufp->chgBit(oldp+590,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x10U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x14U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x10U))))));
    bufp->chgBit(oldp+591,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x15U))));
    bufp->chgBit(oldp+592,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x11U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x15U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x11U))))));
    bufp->chgBit(oldp+593,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x16U))));
    bufp->chgBit(oldp+594,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x12U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x16U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x12U))))));
    bufp->chgBit(oldp+595,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x17U))));
    bufp->chgBit(oldp+596,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x13U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x17U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x13U))))));
    bufp->chgBit(oldp+597,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x18U))));
    bufp->chgBit(oldp+598,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x14U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x18U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x14U))))));
    bufp->chgBit(oldp+599,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x19U))));
    bufp->chgBit(oldp+600,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x15U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x19U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x15U))))));
    bufp->chgBit(oldp+601,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x1aU))));
    bufp->chgBit(oldp+602,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x16U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1aU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x16U))))));
    bufp->chgBit(oldp+603,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x1bU))));
    bufp->chgBit(oldp+604,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x17U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1bU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x17U))))));
    bufp->chgBit(oldp+605,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x1cU))));
    bufp->chgBit(oldp+606,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x18U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1cU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x18U))))));
    bufp->chgBit(oldp+607,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x1dU))));
    bufp->chgBit(oldp+608,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x19U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1dU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x19U))))));
    bufp->chgBit(oldp+609,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 0x1eU))));
    bufp->chgBit(oldp+610,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x1aU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1eU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1aU))))));
    bufp->chgBit(oldp+611,((vlSelf->KSA_unit__DOT__w_G
                            [2U] >> 0x1fU)));
    bufp->chgBit(oldp+612,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 0x1bU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [2U] >> 0x1fU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [2U] >> 0x1bU))))));
    bufp->chgBit(oldp+613,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 4U))));
    bufp->chgBit(oldp+614,((1U & vlSelf->KSA_unit__DOT__w_G
                            [2U])));
    bufp->chgBit(oldp+615,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] | ((vlSelf->KSA_unit__DOT__w_G
                                           [2U] >> 4U) 
                                          & vlSelf->KSA_unit__DOT__w_P
                                          [2U])))));
    bufp->chgBit(oldp+616,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 5U))));
    bufp->chgBit(oldp+617,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 1U))));
    bufp->chgBit(oldp+618,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 1U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 5U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+619,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 2U))));
    bufp->chgBit(oldp+620,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 2U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 6U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+621,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [2U] >> 3U))));
    bufp->chgBit(oldp+622,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 3U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 7U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+623,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 4U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 8U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+624,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [2U] >> 5U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [2U] 
                                                   >> 9U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [2U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+625,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xaU))));
    bufp->chgBit(oldp+626,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 2U))));
    bufp->chgBit(oldp+627,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 2U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xaU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+628,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xbU))));
    bufp->chgBit(oldp+629,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 3U))));
    bufp->chgBit(oldp+630,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 3U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xbU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+631,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xcU))));
    bufp->chgBit(oldp+632,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 4U))));
    bufp->chgBit(oldp+633,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 4U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xcU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+634,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xdU))));
    bufp->chgBit(oldp+635,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 5U))));
    bufp->chgBit(oldp+636,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 5U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xdU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+637,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xeU))));
    bufp->chgBit(oldp+638,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 6U))));
    bufp->chgBit(oldp+639,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 6U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xeU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+640,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0xfU))));
    bufp->chgBit(oldp+641,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 7U))));
    bufp->chgBit(oldp+642,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 7U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0xfU) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+643,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x10U))));
    bufp->chgBit(oldp+644,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 8U))));
    bufp->chgBit(oldp+645,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 8U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0x10U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+646,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x11U))));
    bufp->chgBit(oldp+647,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 9U))));
    bufp->chgBit(oldp+648,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 9U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 0x11U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+649,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x12U))));
    bufp->chgBit(oldp+650,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xaU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x12U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xaU))))));
    bufp->chgBit(oldp+651,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x13U))));
    bufp->chgBit(oldp+652,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xbU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x13U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xbU))))));
    bufp->chgBit(oldp+653,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x14U))));
    bufp->chgBit(oldp+654,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xcU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x14U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xcU))))));
    bufp->chgBit(oldp+655,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x15U))));
    bufp->chgBit(oldp+656,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xdU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x15U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xdU))))));
    bufp->chgBit(oldp+657,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x16U))));
    bufp->chgBit(oldp+658,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xeU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x16U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xeU))))));
    bufp->chgBit(oldp+659,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x17U))));
    bufp->chgBit(oldp+660,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0xfU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x17U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0xfU))))));
    bufp->chgBit(oldp+661,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x18U))));
    bufp->chgBit(oldp+662,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x10U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x18U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x10U))))));
    bufp->chgBit(oldp+663,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x19U))));
    bufp->chgBit(oldp+664,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x11U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x19U) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x11U))))));
    bufp->chgBit(oldp+665,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x1aU))));
    bufp->chgBit(oldp+666,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x12U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1aU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x12U))))));
    bufp->chgBit(oldp+667,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x1bU))));
    bufp->chgBit(oldp+668,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x13U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1bU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x13U))))));
    bufp->chgBit(oldp+669,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x1cU))));
    bufp->chgBit(oldp+670,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x14U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1cU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x14U))))));
    bufp->chgBit(oldp+671,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x1dU))));
    bufp->chgBit(oldp+672,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x15U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1dU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x15U))))));
    bufp->chgBit(oldp+673,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 0x1eU))));
    bufp->chgBit(oldp+674,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x16U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1eU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x16U))))));
    bufp->chgBit(oldp+675,((vlSelf->KSA_unit__DOT__w_G
                            [3U] >> 0x1fU)));
    bufp->chgBit(oldp+676,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 0x17U) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [3U] >> 0x1fU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [3U] >> 0x17U))))));
    bufp->chgBit(oldp+677,((1U & vlSelf->KSA_unit__DOT__w_G
                            [3U])));
    bufp->chgBit(oldp+678,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] | ((vlSelf->KSA_unit__DOT__w_G
                                           [3U] >> 8U) 
                                          & vlSelf->KSA_unit__DOT__w_P
                                          [3U])))));
    bufp->chgBit(oldp+679,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [3U] >> 1U))));
    bufp->chgBit(oldp+680,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [3U] >> 1U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [3U] 
                                                   >> 9U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [3U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+681,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x10U))));
    bufp->chgBit(oldp+682,((1U & vlSelf->KSA_unit__DOT__w_G
                            [4U])));
    bufp->chgBit(oldp+683,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] | ((vlSelf->KSA_unit__DOT__w_G
                                           [4U] >> 0x10U) 
                                          & vlSelf->KSA_unit__DOT__w_P
                                          [4U])))));
    bufp->chgBit(oldp+684,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x11U))));
    bufp->chgBit(oldp+685,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 1U))));
    bufp->chgBit(oldp+686,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 1U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x11U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+687,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x12U))));
    bufp->chgBit(oldp+688,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 2U))));
    bufp->chgBit(oldp+689,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 2U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x12U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+690,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x13U))));
    bufp->chgBit(oldp+691,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 3U))));
    bufp->chgBit(oldp+692,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 3U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x13U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+693,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x14U))));
    bufp->chgBit(oldp+694,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 4U))));
    bufp->chgBit(oldp+695,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 4U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x14U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+696,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x15U))));
    bufp->chgBit(oldp+697,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 5U))));
    bufp->chgBit(oldp+698,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 5U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x15U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+699,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x16U))));
    bufp->chgBit(oldp+700,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 6U))));
    bufp->chgBit(oldp+701,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 6U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x16U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+702,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x17U))));
    bufp->chgBit(oldp+703,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 7U))));
    bufp->chgBit(oldp+704,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 7U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x17U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+705,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x18U))));
    bufp->chgBit(oldp+706,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 8U))));
    bufp->chgBit(oldp+707,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 8U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x18U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+708,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x19U))));
    bufp->chgBit(oldp+709,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 9U))));
    bufp->chgBit(oldp+710,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 9U) | ((
                                                   vlSelf->KSA_unit__DOT__w_G
                                                   [4U] 
                                                   >> 0x19U) 
                                                  & (vlSelf->KSA_unit__DOT__w_P
                                                     [4U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+711,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x1aU))));
    bufp->chgBit(oldp+712,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xaU))));
    bufp->chgBit(oldp+713,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xaU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1aU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xaU))))));
    bufp->chgBit(oldp+714,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x1bU))));
    bufp->chgBit(oldp+715,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xbU))));
    bufp->chgBit(oldp+716,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xbU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1bU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xbU))))));
    bufp->chgBit(oldp+717,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x1cU))));
    bufp->chgBit(oldp+718,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xcU))));
    bufp->chgBit(oldp+719,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xcU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1cU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xcU))))));
    bufp->chgBit(oldp+720,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x1dU))));
    bufp->chgBit(oldp+721,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xdU))));
    bufp->chgBit(oldp+722,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xdU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1dU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xdU))))));
    bufp->chgBit(oldp+723,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0x1eU))));
    bufp->chgBit(oldp+724,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xeU))));
    bufp->chgBit(oldp+725,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xeU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1eU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xeU))))));
    bufp->chgBit(oldp+726,((vlSelf->KSA_unit__DOT__w_G
                            [4U] >> 0x1fU)));
    bufp->chgBit(oldp+727,((1U & (vlSelf->KSA_unit__DOT__w_G
                                  [4U] >> 0xfU))));
    bufp->chgBit(oldp+728,((1U & ((vlSelf->KSA_unit__DOT__w_G
                                   [4U] >> 0xfU) | 
                                  ((vlSelf->KSA_unit__DOT__w_G
                                    [4U] >> 0x1fU) 
                                   & (vlSelf->KSA_unit__DOT__w_P
                                      [4U] >> 0xfU))))));
}

void Vtb_SUM_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_SUM_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SUM_unit___024root*>(voidSelf);
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x80U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
