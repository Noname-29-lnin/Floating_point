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
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_SUM_unit__DOT__i_carry));
        bufp->chgIData(oldp+1,(vlSelf->tb_SUM_unit__DOT__i_data_a),28);
        bufp->chgIData(oldp+2,(vlSelf->tb_SUM_unit__DOT__i_data_b),28);
        bufp->chgIData(oldp+3,(vlSelf->tb_SUM_unit__DOT__expected_sum),28);
        bufp->chgBit(oldp+4,(vlSelf->tb_SUM_unit__DOT__expected_carry));
        bufp->chgIData(oldp+5,(vlSelf->tb_SUM_unit__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_SUM_unit__DOT__pass_count),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_SUM_unit__DOT__fail_count),32);
        bufp->chgCData(oldp+8,((0xfU & vlSelf->tb_SUM_unit__DOT__i_data_a)),4);
        bufp->chgCData(oldp+9,((0xfU & vlSelf->tb_SUM_unit__DOT__i_data_b)),4);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 4U))),4);
        bufp->chgCData(oldp+11,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 4U))),4);
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 8U))),4);
        bufp->chgCData(oldp+13,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 8U))),4);
        bufp->chgCData(oldp+14,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+15,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+16,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+17,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+18,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+19,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+20,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+21,((0xfU & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                                         >> 0x18U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+22,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p),7);
        bufp->chgCData(oldp+23,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g),7);
        bufp->chgBit(oldp+24,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
        bufp->chgCData(oldp+26,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_g),4);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p),4);
        bufp->chgBit(oldp+28,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+30,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgBit(oldp+32,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+34,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgBit(oldp+36,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+38,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgBit(oldp+40,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgBit(oldp+44,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+46,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
        bufp->chgBit(oldp+48,((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.o_g));
        bufp->chgCData(oldp+50,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_g),4);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 7U))));
        bufp->chgCData(oldp+53,(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c),8);
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 1U))));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 2U))));
        bufp->chgCData(oldp+58,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 3U))));
        bufp->chgCData(oldp+61,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 4U))));
        bufp->chgCData(oldp+64,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 5U))));
        bufp->chgCData(oldp+67,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     >> 6U))));
        bufp->chgCData(oldp+70,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum),4);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_c),4);
    }
    bufp->chgIData(oldp+72,(vlSelf->tb_SUM_unit__DOT__o_sum),28);
    bufp->chgCData(oldp+73,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum),4);
    bufp->chgCData(oldp+74,(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_c),4);
}

void Vtb_SUM_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_SUM_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SUM_unit___024root*>(voidSelf);
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
