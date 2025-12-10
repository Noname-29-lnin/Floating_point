// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_24bit__Syms.h"


VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_init_sub__TOP__0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+14,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("LOPD_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tb_LOPD_24bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"SIZE_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+18,0,"o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"w_expect_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"w_expect_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"bit_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"SIZE_LOPD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+18,0,"o_one_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"LOPD16_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"LOPD16_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"LOPD16_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"LOPD8_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"LOPD8_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9,0,"LOPD8_o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"w_o_one_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("LOPD_16bit_UNIT_MSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("LOPD_8bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_8bit_UNIT_LSB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_init_top(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_init_top\n"); );
    // Body
    Vtb_LOPD_24bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_24bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_24bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_register(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_LOPD_24bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_LOPD_24bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_LOPD_24bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_LOPD_24bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_const_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_const_0\n"); );
    // Init
    Vtb_LOPD_24bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_24bit___024root*>(voidSelf);
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_24bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_const_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+26,(0x18U),32);
    bufp->fullIData(oldp+27,(5U),32);
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_full_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_full_0\n"); );
    // Init
    Vtb_LOPD_24bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_24bit___024root*>(voidSelf);
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_24bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root__trace_full_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_LOPD_24bit__DOT__i_data),24);
    bufp->fullCData(oldp+2,(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos),5);
    bufp->fullBit(oldp+3,(vlSelf->tb_LOPD_24bit__DOT__w_expect_zero));
    bufp->fullIData(oldp+4,(vlSelf->tb_LOPD_24bit__DOT__test_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_LOPD_24bit__DOT__test_pass),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_LOPD_24bit__DOT__bit_pos),32);
    bufp->fullSData(oldp+7,((0xffffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                        >> 8U))),16);
    bufp->fullCData(oldp+8,((0xffU & vlSelf->tb_LOPD_24bit__DOT__i_data)),8);
    bufp->fullBit(oldp+9,((1U & (~ (IData)((0U != (0xffU 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    bufp->fullBit(oldp+10,((1U & (~ (IData)((0U != 
                                             (0xff00U 
                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    bufp->fullBit(oldp+11,((1U & (~ (IData)((0U != 
                                             (0xff0000U 
                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    bufp->fullCData(oldp+12,((0xffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                       >> 8U))),8);
    bufp->fullCData(oldp+13,((0xffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+14,(vlSelf->i_data),4);
    bufp->fullCData(oldp+15,(vlSelf->o_pos_one),2);
    bufp->fullBit(oldp+16,(vlSelf->o_zero_flag));
    bufp->fullBit(oldp+17,(vlSelf->tb_LOPD_24bit__DOT__i_clk));
    bufp->fullCData(oldp+18,((((~ (IData)((0U != (0xffU 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))
                               ? 0x1fU : (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                                           << 4U) | 
                                          ((8U & ((
                                                   (~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xff0000U 
                                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                                  << 3U)) 
                                           | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0x30U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                 : 
                                                ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xff0000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                  ? 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf0000U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                  : 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf00U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                    ? 
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                     & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                                    | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                        & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                           >> 1U)) 
                                                       | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x30U 
                                                                      & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xff0000U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                     ? 
                                                    (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 0x10U)) 
                                                     | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                         & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                            >> 0x11U)) 
                                                        | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x300000U 
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                     : 
                                                    (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                         & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                            >> 9U)) 
                                                        | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x3000U 
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                        ? 
                                                       (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                         & (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (3U 
                                                                     & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                        | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                            & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                               >> 2U)) 
                                                           | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                               & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                  >> 4U)) 
                                                              | (IData)(
                                                                        (0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                        : 
                                                       ((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xff0000U 
                                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                         ? 
                                                        (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                          & (IData)(
                                                                    (0x10000U 
                                                                     == 
                                                                     (0x30000U 
                                                                      & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                         | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                             & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                >> 0x12U)) 
                                                            | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                                & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                   >> 0x14U)) 
                                                               | (IData)(
                                                                         (0x400000U 
                                                                          == 
                                                                          (0xc00000U 
                                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                         : 
                                                        (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                          & (IData)(
                                                                    (0x100U 
                                                                     == 
                                                                     (0x300U 
                                                                      & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                         | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                             & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                >> 0xaU)) 
                                                            | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                                & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                   >> 0xcU)) 
                                                               | (IData)(
                                                                         (0x4000U 
                                                                          == 
                                                                          (0xc000U 
                                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data))))))))))))))),5);
    bufp->fullBit(oldp+19,(((~ (IData)((0U != (0xffU 
                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                            & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))));
    bufp->fullCData(oldp+20,(((8U & ((~ (IData)((0U 
                                                 != 
                                                 (0xff0000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                     << 3U)) | ((((IData)(
                                                          (0U 
                                                           != 
                                                           (0xff0000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                   ? 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0x300000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xf0000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                   : 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xf00U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                                 << 2U) 
                                                | ((((IData)(
                                                             (0U 
                                                              != 
                                                              (0xff0000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                      ? 
                                                     (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                       & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                          >> 0x10U)) 
                                                      | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                          & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                             >> 0x11U)) 
                                                         | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                            & (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x300000U 
                                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                      : 
                                                     (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                       & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                          >> 8U)) 
                                                      | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                          & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                             >> 9U)) 
                                                         | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                            & (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x3000U 
                                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data))))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xff0000U 
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                          ? 
                                                         (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                           & (IData)(
                                                                     (0x10000U 
                                                                      == 
                                                                      (0x30000U 
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                          | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                 >> 0x12U)) 
                                                             | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                                 & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                    >> 0x14U)) 
                                                                | (IData)(
                                                                          (0x400000U 
                                                                           == 
                                                                           (0xc00000U 
                                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                          : 
                                                         (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                           & (IData)(
                                                                     (0x100U 
                                                                      == 
                                                                      (0x300U 
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                          | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                 >> 0xaU)) 
                                                             | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                                 & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                    >> 0xcU)) 
                                                                | (IData)(
                                                                          (0x4000U 
                                                                           == 
                                                                           (0xc000U 
                                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))))),4);
    bufp->fullBit(oldp+21,(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag));
    bufp->fullCData(oldp+22,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                 & (IData)((0U == (0x30U 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                & (IData)((0U != (0xfU 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               << 2U) | (((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                            & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                           << 1U) | 
                                          ((0xfffffffeU 
                                            & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                << 1U) 
                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                           | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x30U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                              << 1U))) 
                                         | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 2U)) 
                                                     | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                         & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                            >> 4U)) 
                                                        | (IData)(
                                                                  (0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
    bufp->fullCData(oldp+23,((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                               << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xff0000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                                << 3U)) 
                                         | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x30U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                               : ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xff0000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                   ? 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0x300000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xf0000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                   : 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xf00U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 1U)) 
                                                     | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                  : 
                                                 ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xff0000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                   ? 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                    & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                       >> 0x10U)) 
                                                   | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                       & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                          >> 0x11U)) 
                                                      | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                   : 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                    & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                       >> 8U)) 
                                                   | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                       & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                          >> 9U)) 
                                                      | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                      ? 
                                                     (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                       & (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                      | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                          & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                             >> 2U)) 
                                                         | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                             & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                >> 4U)) 
                                                            | (IData)(
                                                                      (0x40U 
                                                                       == 
                                                                       (0xc0U 
                                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                      : 
                                                     ((IData)(
                                                              (0U 
                                                               != 
                                                               (0xff0000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                       ? 
                                                      (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                        & (IData)(
                                                                  (0x10000U 
                                                                   == 
                                                                   (0x30000U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                       | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                           & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                              >> 0x12U)) 
                                                          | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                 >> 0x14U)) 
                                                             | (IData)(
                                                                       (0x400000U 
                                                                        == 
                                                                        (0xc00000U 
                                                                         & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                       : 
                                                      (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                        & (IData)(
                                                                  (0x100U 
                                                                   == 
                                                                   (0x300U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                       | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                           & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                              >> 0xaU)) 
                                                          | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                                 >> 0xcU)) 
                                                             | (IData)(
                                                                       (0x4000U 
                                                                        == 
                                                                        (0xc000U 
                                                                         & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))))))),5);
    bufp->fullCData(oldp+24,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                 & (IData)((0U == (0x3000U 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                & (IData)((0U != (0xf00U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               << 2U) | (((0x1fffffeU 
                                           & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               << 1U) 
                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 7U))) 
                                          | ((0xfffffeU 
                                              & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  << 1U) 
                                                 & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                    >> 8U))) 
                                             | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                << 1U))) 
                                         | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (IData)(
                                                             (0x100U 
                                                              == 
                                                              (0x300U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 0xaU)) 
                                                     | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                         & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                            >> 0xcU)) 
                                                        | (IData)(
                                                                  (0x4000U 
                                                                   == 
                                                                   (0xc000U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
    bufp->fullCData(oldp+25,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                 & (IData)((0U == (0x300000U 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                & (IData)((0U != (0xf0000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               << 2U) | (((0x1fffeU 
                                           & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               << 1U) 
                                              & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 0xfU))) 
                                          | ((0xfffeU 
                                              & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  << 1U) 
                                                 & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                    >> 0x10U))) 
                                             | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                << 1U))) 
                                         | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (IData)(
                                                             (0x10000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 0x12U)) 
                                                     | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                         & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                            >> 0x14U)) 
                                                        | (IData)(
                                                                  (0x400000U 
                                                                   == 
                                                                   (0xc00000U 
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
}
