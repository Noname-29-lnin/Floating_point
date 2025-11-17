// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_4bit__Syms.h"


void Vtb_LOPD_4bit___024root__trace_chg_0_sub_0(Vtb_LOPD_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_LOPD_4bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root__trace_chg_0\n"); );
    // Init
    Vtb_LOPD_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_4bit___024root*>(voidSelf);
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_LOPD_4bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_LOPD_4bit___024root__trace_chg_0_sub_0(Vtb_LOPD_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_LOPD_4bit__DOT__i_data),4);
        bufp->chgCData(oldp+1,((((IData)(((0U == (0xcU 
                                                  & (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data))) 
                                          & ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                             | ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                >> 1U)))) 
                                 << 1U) | (1U & ((~ 
                                                  ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                   >> 3U)) 
                                                 & (((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                     >> 2U) 
                                                    | (IData)(
                                                              (1U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data))))))))),2);
        bufp->chgBit(oldp+2,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data)))))));
        bufp->chgCData(oldp+3,(vlSelf->tb_LOPD_4bit__DOT__w_expect_pos),2);
        bufp->chgBit(oldp+4,(vlSelf->tb_LOPD_4bit__DOT__w_expect_zero));
        bufp->chgIData(oldp+5,(vlSelf->tb_LOPD_4bit__DOT__test_count),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_LOPD_4bit__DOT__test_pass),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vtb_LOPD_4bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root__trace_cleanup\n"); );
    // Init
    Vtb_LOPD_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_4bit___024root*>(voidSelf);
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
