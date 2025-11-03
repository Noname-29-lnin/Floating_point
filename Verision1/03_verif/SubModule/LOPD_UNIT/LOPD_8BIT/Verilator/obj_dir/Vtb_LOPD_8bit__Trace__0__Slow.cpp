// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_8bit__Syms.h"


VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_init_sub__TOP__0(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_LOPD_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"SIZE_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"o_zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"w_expect_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"w_expect_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_zero_flag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"w_pos_one_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"w_zero_flag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"w_pos_one_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"w_o_pos_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("LOPD_4bit_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LOPD_4bit_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"o_pos_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"o_zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_init_top(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_init_top\n"); );
    // Body
    Vtb_LOPD_8bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_8bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_LOPD_8bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_register(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_LOPD_8bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_LOPD_8bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_LOPD_8bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_LOPD_8bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_const_0_sub_0(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_const_0\n"); );
    // Init
    Vtb_LOPD_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_8bit___024root*>(voidSelf);
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_8bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_const_0_sub_0(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+16,(8U),32);
    bufp->fullIData(oldp+17,(3U),32);
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_full_0_sub_0(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_full_0\n"); );
    // Init
    Vtb_LOPD_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_8bit___024root*>(voidSelf);
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_LOPD_8bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_LOPD_8bit___024root__trace_full_0_sub_0(Vtb_LOPD_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_8bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_LOPD_8bit__DOT__i_data),8);
    bufp->fullCData(oldp+2,(((1U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (0xf0U 
                                                   & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))))
                              ? 0U : ((4U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0xf0U 
                                                          & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))) 
                                             << 2U)) 
                                      | ((2U & (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xf0U 
                                                           & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))
                                                  ? 
                                                 ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30U 
                                                            & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))
                                                  : 
                                                 (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                   | ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                      >> 1U)) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xf0U 
                                                            & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))
                                                   ? 
                                                  ((~ 
                                                    ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                     >> 7U)) 
                                                   & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                       >> 6U) 
                                                      | (IData)(
                                                                (0x10U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))
                                                   : 
                                                  ((~ 
                                                    ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                     >> 3U)) 
                                                   & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                       >> 2U) 
                                                      | (IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))))))))),3);
    bufp->fullBit(oldp+3,((1U & ((~ (IData)((0U != 
                                             (0xfU 
                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))) 
                                 & (~ (IData)((0U != 
                                               (0xf0U 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))))));
    bufp->fullCData(oldp+4,(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos),3);
    bufp->fullBit(oldp+5,(vlSelf->tb_LOPD_8bit__DOT__w_expect_zero));
    bufp->fullIData(oldp+6,(vlSelf->tb_LOPD_8bit__DOT__test_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_LOPD_8bit__DOT__test_pass),32);
    bufp->fullBit(oldp+8,((1U & (~ (IData)((0U != (0xfU 
                                                   & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))));
    bufp->fullCData(oldp+9,((((IData)(((0U == (0xcU 
                                               & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                       & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                          | ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                             >> 1U)))) 
                              << 1U) | (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                  >> 3U)) 
                                              & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                  >> 2U) 
                                                 | (IData)(
                                                           (1U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))))),2);
    bufp->fullBit(oldp+10,((1U & (~ (IData)((0U != 
                                             (0xf0U 
                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))));
    bufp->fullCData(oldp+11,((((IData)(((0U == (0xc0U 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                        & (0U != (0x30U 
                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))) 
                               << 1U) | (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                   >> 7U)) 
                                               & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                   >> 6U) 
                                                  | (IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x30U 
                                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))))),2);
    bufp->fullCData(oldp+12,(((4U & ((~ (IData)((0U 
                                                 != 
                                                 (0xf0U 
                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))) 
                                     << 2U)) | ((2U 
                                                 & (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xf0U 
                                                               & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))
                                                      ? 
                                                     ((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))) 
                                                      & (IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))
                                                      : 
                                                     (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                       | ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                          >> 1U)) 
                                                      & (IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (0U 
                                                               != 
                                                               (0xf0U 
                                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                         >> 7U)) 
                                                       & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                           >> 6U) 
                                                          | (IData)(
                                                                    (0x10U 
                                                                     == 
                                                                     (0x30U 
                                                                      & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                         >> 3U)) 
                                                       & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                           >> 2U) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))))))))),3);
    bufp->fullCData(oldp+13,((0xfU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))),4);
    bufp->fullCData(oldp+14,((0xfU & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                      >> 4U))),4);
    bufp->fullIData(oldp+15,(vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i),32);
}
