// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SUM_unit.h for the primary calling header

#include "Vtb_SUM_unit__pch.h"
#include "Vtb_SUM_unit_CLA_4bit.h"
#include "Vtb_SUM_unit__Syms.h"

VL_ATTR_COLD void Vtb_SUM_unit_CLA_4bit___configure_coverage(Vtb_SUM_unit_CLA_4bit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_SUM_unit_CLA_4bit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 4, 25, "", "v_toggle/CLA_4bit", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 6, 25, "", "v_toggle/CLA_4bit", "o_p", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 7, 25, "", "v_toggle/CLA_4bit", "o_g", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/noname/Documents/project_tiny/Floating_point/02_rtl/CLA/CLA_4bit.sv", 15, 5, "", "v_line/CLA_4bit", "block", "15-20");
}
