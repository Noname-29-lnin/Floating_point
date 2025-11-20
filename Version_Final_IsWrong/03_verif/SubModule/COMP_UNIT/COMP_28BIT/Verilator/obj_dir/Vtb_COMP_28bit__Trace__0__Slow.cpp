// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_COMP_28bit__Syms.h"


VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_sub__TOP__0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_COMP_28bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"i_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+7,0,"o_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"w_expect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+7,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"w_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+9,0,"w_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+10,0,"w_borrow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_init_top(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_init_top\n"); );
    // Body
    Vtb_COMP_28bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_COMP_28bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_COMP_28bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_register(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_COMP_28bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_COMP_28bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_COMP_28bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_COMP_28bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_const_0\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_COMP_28bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_const_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+11,(vlSelf->tb_COMP_28bit__DOT__i_rst_n));
    bufp->fullIData(oldp+12,(0x1cU),32);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_full_0\n"); );
    // Init
    Vtb_COMP_28bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_COMP_28bit___024root*>(voidSelf);
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_COMP_28bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root__trace_full_0_sub_0(Vtb_COMP_28bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_COMP_28bit__DOT__i_data_a),28);
    bufp->fullIData(oldp+2,(vlSelf->tb_COMP_28bit__DOT__i_data_b),28);
    bufp->fullBit(oldp+3,(vlSelf->tb_COMP_28bit__DOT__w_expect));
    bufp->fullIData(oldp+4,(vlSelf->tb_COMP_28bit__DOT__test_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_COMP_28bit__DOT__test_pass),32);
    bufp->fullBit(oldp+6,(vlSelf->tb_COMP_28bit__DOT__i_clk));
    bufp->fullBit(oldp+7,((1U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                 >> 0x1bU))));
    bufp->fullIData(oldp+8,(vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g),28);
    bufp->fullIData(oldp+9,(vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p),28);
    bufp->fullIData(oldp+10,(vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow),28);
}
