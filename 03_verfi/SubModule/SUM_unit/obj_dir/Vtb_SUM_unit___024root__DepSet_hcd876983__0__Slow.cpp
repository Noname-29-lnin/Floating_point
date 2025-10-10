// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SUM_unit.h for the primary calling header

#include "Vtb_SUM_unit__pch.h"
#include "Vtb_SUM_unit__Syms.h"
#include "Vtb_SUM_unit___024root.h"

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_static__TOP(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_SUM_unit__DOT__pass_count = 0U;
    ++(vlSymsp->__Vcoverage[115]);
    vlSelf->tb_SUM_unit__DOT__fail_count = 0U;
    ++(vlSymsp->__Vcoverage[116]);
}

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_initial__TOP(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x756e6974U;
    __Vtemp_1[2U] = 0x53554d5fU;
    __Vtemp_1[3U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[117]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__stl(Vtb_SUM_unit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_triggers__stl(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__0 
        = vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_SUM_unit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtb_SUM_unit___024root___act_sequent__TOP__0(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit___024root___act_sequent__TOP__1(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit___024root___act_comb__TOP__0(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit___024root___act_comb__TOP__1(Vtb_SUM_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_stl(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SUM_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SUM_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_SUM_unit___024root___configure_coverage(Vtb_SUM_unit___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "SUM_unit/tb_SUM_unit.sv", 10, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "SUM_unit/tb_SUM_unit.sv", 11, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "SUM_unit/tb_SUM_unit.sv", 12, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "i_data_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "SUM_unit/tb_SUM_unit.sv", 13, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "SUM_unit/tb_SUM_unit.sv", 14, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "o_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "SUM_unit/tb_SUM_unit.sv", 16, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "SUM_unit/tb_SUM_unit.sv", 17, 31, ".tb_SUM_unit", "v_toggle/tb_SUM_unit", "expected_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "SUM_unit/tb_SUM_unit.sv", 20, 26, ".tb_SUM_unit", "v_line/tb_SUM_unit", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "SUM_unit/tb_SUM_unit.sv", 21, 26, ".tb_SUM_unit", "v_line/tb_SUM_unit", "block", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "SUM_unit/tb_SUM_unit.sv", 34, 5, ".tb_SUM_unit", "v_line/tb_SUM_unit", "block", "34-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "SUM_unit/tb_SUM_unit.sv", 58, 13, ".tb_SUM_unit", "v_branch/tb_SUM_unit", "if", "58-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "SUM_unit/tb_SUM_unit.sv", 58, 14, ".tb_SUM_unit", "v_branch/tb_SUM_unit", "else", "62-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "SUM_unit/tb_SUM_unit.sv", 46, 9, ".tb_SUM_unit", "v_line/tb_SUM_unit", "block", "46,48-50,52,55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "SUM_unit/tb_SUM_unit.sv", 77, 9, ".tb_SUM_unit", "v_branch/tb_SUM_unit", "if", "77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "SUM_unit/tb_SUM_unit.sv", 77, 10, ".tb_SUM_unit", "v_branch/tb_SUM_unit", "else", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "SUM_unit/tb_SUM_unit.sv", 40, 5, ".tb_SUM_unit", "v_line/tb_SUM_unit", "block", "40-43,46,71-75,82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 4, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 5, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 6, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "i_data_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 7, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/SUM_unit.sv", 8, 38, ".tb_SUM_unit.DUT", "v_toggle/SUM_unit", "o_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 2, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 3, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 4, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "i_data_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 5, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 6, 25, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "o_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 9, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 10, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_p[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_28bit.sv", 11, 13, ".tb_SUM_unit.DUT.CLA_28BIT_UNIT", "v_toggle/CLA_28bit", "w_g[6]", "");
}
