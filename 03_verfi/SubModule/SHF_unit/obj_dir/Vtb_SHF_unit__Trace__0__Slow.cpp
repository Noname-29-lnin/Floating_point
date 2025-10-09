// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_SHF_unit__Syms.h"


VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_init_sub__TOP__0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_SHF_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"LEFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"NUM_TEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_shift_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+7,0,"o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+3,0,"expected_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"LEFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+7,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("GEN_SHIFT_LEFT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("SHF_SHIFT_LEFT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"SIZE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i_shift_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+7,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("stage_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GEN_SHIFT_STAGE[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"SHIFT_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_init_top(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_init_top\n"); );
    // Body
    Vtb_SHF_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_SHF_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_SHF_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_register(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_SHF_unit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_SHF_unit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_SHF_unit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_SHF_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_const_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_const_0\n"); );
    // Init
    Vtb_SHF_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SHF_unit___024root*>(voidSelf);
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_SHF_unit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_const_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+14,(0U),32);
    bufp->fullIData(oldp+15,(0x18U),32);
    bufp->fullIData(oldp+16,(5U),32);
    bufp->fullIData(oldp+17,(0x3e8U),32);
    bufp->fullIData(oldp+18,(1U),32);
    bufp->fullIData(oldp+19,(2U),32);
    bufp->fullIData(oldp+20,(4U),32);
    bufp->fullIData(oldp+21,(8U),32);
    bufp->fullIData(oldp+22,(0x10U),32);
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_full_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_full_0\n"); );
    // Init
    Vtb_SHF_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_SHF_unit___024root*>(voidSelf);
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_SHF_unit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_SHF_unit___024root__trace_full_0_sub_0(Vtb_SHF_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_SHF_unit__DOT__i_shift_number),5);
    bufp->fullIData(oldp+2,(vlSelf->tb_SHF_unit__DOT__i_data),24);
    bufp->fullIData(oldp+3,(vlSelf->tb_SHF_unit__DOT__expected_data),24);
    bufp->fullIData(oldp+4,(vlSelf->tb_SHF_unit__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_SHF_unit__DOT__pass_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_SHF_unit__DOT__fail_count),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [5U]),24);
    bufp->fullIData(oldp+8,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[0]),24);
    bufp->fullIData(oldp+9,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[1]),24);
    bufp->fullIData(oldp+10,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[2]),24);
    bufp->fullIData(oldp+11,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[3]),24);
    bufp->fullIData(oldp+12,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[4]),24);
    bufp->fullIData(oldp+13,(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[5]),24);
}
