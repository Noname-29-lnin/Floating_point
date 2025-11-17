// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_16bit__Syms.h"


void Vtb_LOPD_16bit___024root__trace_chg_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_LOPD_16bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_chg_0\n"); );
    // Init
    Vtb_LOPD_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_16bit___024root*>(voidSelf);
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_LOPD_16bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_LOPD_16bit___024root__trace_chg_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+0,(vlSelf->tb_LOPD_8bit__DOT__i_data),16);
        bufp->chgCData(oldp+1,(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos),4);
        bufp->chgBit(oldp+2,(vlSelf->tb_LOPD_8bit__DOT__w_expect_zero));
        bufp->chgIData(oldp+3,(vlSelf->tb_LOPD_8bit__DOT__test_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_LOPD_8bit__DOT__test_pass),32);
        bufp->chgCData(oldp+5,((0xffU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))),8);
        bufp->chgCData(oldp+6,((0xfU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))),4);
        bufp->chgCData(oldp+7,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                         >> 8U))),8);
        bufp->chgCData(oldp+9,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+10,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                         >> 0xcU))),4);
        bufp->chgIData(oldp+11,(vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+12,(vlSelf->tb_LOPD_8bit__DOT__o_pos_one),4);
        bufp->chgBit(oldp+13,(vlSelf->tb_LOPD_8bit__DOT__o_zero_flag));
        bufp->chgCData(oldp+14,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0),3);
        bufp->chgBit(oldp+15,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+16,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1),3);
        bufp->chgBit(oldp+17,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1));
        bufp->chgCData(oldp+18,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one),4);
        bufp->chgBit(oldp+19,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+20,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)))));
        bufp->chgCData(oldp+22,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
        bufp->chgCData(oldp+23,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one),3);
        bufp->chgBit(oldp+24,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
        bufp->chgCData(oldp+25,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
        bufp->chgBit(oldp+26,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
        bufp->chgCData(oldp+27,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
        bufp->chgCData(oldp+28,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one),3);
    }
}

void Vtb_LOPD_16bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_cleanup\n"); );
    // Init
    Vtb_LOPD_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_16bit___024root*>(voidSelf);
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
