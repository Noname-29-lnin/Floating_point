// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_SHF_unit__Syms.h"


void Vtb_SHF_unit___024root__trace_chg_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_SHF_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_chg_0\n"); );
    // Init
    Vtb_SHF_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SHF_unit___024root*>(voidSelf);
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_SHF_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_SHF_unit___024root__trace_chg_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_SHF_unit__DOT__i_shift_number),5);
        bufp->chgIData(oldp+1,(vlSelf->tb_SHF_unit__DOT__i_data),24);
        bufp->chgIData(oldp+2,(vlSelf->tb_SHF_unit__DOT__expected_data),24);
        bufp->chgIData(oldp+3,(vlSelf->tb_SHF_unit__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_SHF_unit__DOT__pass_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_SHF_unit__DOT__fail_count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+6,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                               [5U]),24);
        bufp->chgIData(oldp+7,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[0]),24);
        bufp->chgIData(oldp+8,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[1]),24);
        bufp->chgIData(oldp+9,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[2]),24);
        bufp->chgIData(oldp+10,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[3]),24);
        bufp->chgIData(oldp+11,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[4]),24);
        bufp->chgIData(oldp+12,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[5]),24);
    }
}

void Vtb_SHF_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_SHF_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SHF_unit___024root*>(voidSelf);
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
