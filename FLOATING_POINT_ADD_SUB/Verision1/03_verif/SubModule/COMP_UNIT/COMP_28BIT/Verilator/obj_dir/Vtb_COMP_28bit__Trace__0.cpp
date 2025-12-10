// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_COMP_28bit__Syms.h"


void Vtb_COMP_28bit___024root__trace_chg_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_COMP_28bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_chg_0\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_COMP_28bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_COMP_28bit___024root__trace_chg_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_COMP_28bit__DOT__i_data_a),28);
        bufp->chgIData(oldp+1,(vlSelf->tb_COMP_28bit__DOT__i_data_b),28);
        bufp->chgBit(oldp+2,(vlSelf->tb_COMP_28bit__DOT__w_expect));
        bufp->chgIData(oldp+3,(vlSelf->tb_COMP_28bit__DOT__test_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_COMP_28bit__DOT__test_pass),32);
        bufp->chgCData(oldp+5,((0xfU & vlSelf->tb_COMP_28bit__DOT__i_data_a)),4);
        bufp->chgCData(oldp+6,((0xfU & vlSelf->tb_COMP_28bit__DOT__i_data_b)),4);
        bufp->chgCData(oldp+7,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                      >> 2U))),2);
        bufp->chgCData(oldp+8,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                      >> 2U))),2);
        bufp->chgCData(oldp+9,((3U & vlSelf->tb_COMP_28bit__DOT__i_data_a)),2);
        bufp->chgCData(oldp+10,((3U & vlSelf->tb_COMP_28bit__DOT__i_data_b)),2);
        bufp->chgCData(oldp+11,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 4U))),4);
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 4U))),4);
        bufp->chgCData(oldp+13,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 6U))),2);
        bufp->chgCData(oldp+14,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 6U))),2);
        bufp->chgCData(oldp+15,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 4U))),2);
        bufp->chgCData(oldp+16,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 4U))),2);
        bufp->chgCData(oldp+17,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 8U))),4);
        bufp->chgCData(oldp+18,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 8U))),4);
        bufp->chgCData(oldp+19,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+20,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+21,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 8U))),2);
        bufp->chgCData(oldp+22,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 8U))),2);
        bufp->chgCData(oldp+23,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+24,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+25,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+26,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0xeU))),2);
        bufp->chgCData(oldp+27,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+28,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0xcU))),2);
        bufp->chgCData(oldp+29,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+30,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+31,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+32,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x12U))),2);
        bufp->chgCData(oldp+33,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+34,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+35,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+36,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+37,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+38,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x16U))),2);
        bufp->chgCData(oldp+39,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x14U))),2);
        bufp->chgCData(oldp+40,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x14U))),2);
        bufp->chgCData(oldp+41,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+42,((0xfU & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+43,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x1aU))),2);
        bufp->chgCData(oldp+44,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x1aU))),2);
        bufp->chgCData(oldp+45,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                                       >> 0x18U))),2);
        bufp->chgCData(oldp+46,((3U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                                       >> 0x18U))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+47,(vlSelf->tb_COMP_28bit__DOT__o_less));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_less));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_less));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_less));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_less));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_less));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_less));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_less));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_equal));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_equal));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_equal));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_equal));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_equal));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_equal));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_less_low));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_equal_low));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_less_high));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__PVT__w_equal_high));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_less_low));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_equal_low));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_less_high));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__PVT__w_equal_high));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_less_low));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_equal_low));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_less_high));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__PVT__w_equal_high));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_less_low));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_equal_low));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_less_high));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__PVT__w_equal_high));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_less_low));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_equal_low));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_less_high));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__PVT__w_equal_high));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_less_low));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_equal_low));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_less_high));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__PVT__w_equal_high));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_less_low));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_equal_low));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_less_high));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__PVT__w_equal_high));
    }
    bufp->chgBit(oldp+90,(vlSelf->tb_COMP_28bit__DOT__i_clk));
}

void Vtb_COMP_28bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_cleanup\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
