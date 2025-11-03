// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_16bit__Syms.h"


VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_init_sub__TOP__0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_LOPD_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"SIZE_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"w_expect_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"w_expect_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_init_top(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_init_top\n"); );
    // Body
    Vtb_LOPD_16bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_16bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_16bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_register(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_LOPD_16bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_LOPD_16bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_LOPD_16bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_LOPD_16bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_const_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_const_0\n"); );
    // Init
    Vtb_LOPD_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_16bit___024root*>(voidSelf);
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_16bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_const_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+30,(0x10U),32);
    bufp->fullIData(oldp+31,(4U),32);
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_full_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_full_0\n"); );
    // Init
    Vtb_LOPD_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_16bit___024root*>(voidSelf);
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_16bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_16bit___024root__trace_full_0_sub_0(Vtb_LOPD_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->tb_LOPD_8bit__DOT__i_data),16);
    bufp->fullCData(oldp+2,(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos),4);
    bufp->fullBit(oldp+3,(vlSelf->tb_LOPD_8bit__DOT__w_expect_zero));
    bufp->fullIData(oldp+4,(vlSelf->tb_LOPD_8bit__DOT__test_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_LOPD_8bit__DOT__test_pass),32);
    bufp->fullCData(oldp+6,((0xffU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))),8);
    bufp->fullCData(oldp+7,((0xfU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))),4);
    bufp->fullCData(oldp+8,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                      >> 8U))),8);
    bufp->fullCData(oldp+10,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                      >> 8U))),4);
    bufp->fullCData(oldp+11,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                      >> 0xcU))),4);
    bufp->fullIData(oldp+12,(vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+13,(vlSelf->tb_LOPD_8bit__DOT__o_pos_one),4);
    bufp->fullBit(oldp+14,(vlSelf->tb_LOPD_8bit__DOT__o_zero_flag));
    bufp->fullCData(oldp+15,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0),3);
    bufp->fullBit(oldp+16,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0));
    bufp->fullCData(oldp+17,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1),3);
    bufp->fullBit(oldp+18,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1));
    bufp->fullCData(oldp+19,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one),4);
    bufp->fullBit(oldp+20,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0));
    bufp->fullCData(oldp+21,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)))));
    bufp->fullCData(oldp+23,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->fullCData(oldp+24,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one),3);
    bufp->fullBit(oldp+25,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0));
    bufp->fullCData(oldp+26,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
    bufp->fullCData(oldp+28,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->fullCData(oldp+29,(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one),3);
}
