// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit_CLA_4bit.h"
#include "Vtb_FPU_unit__Syms.h"

VL_ATTR_COLD void Vtb_FPU_unit_CLA_4bit___configure_coverage(Vtb_FPU_unit_CLA_4bit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_CLA_4bit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 2, 25, "", "v_toggle/CLA_4bit", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1155]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1156]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1157]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1158]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 3, 25, "", "v_toggle/CLA_4bit", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 4, 25, "", "v_toggle/CLA_4bit", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1159]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1160]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1161]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1162]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 5, 25, "", "v_toggle/CLA_4bit", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1163]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 6, 25, "", "v_toggle/CLA_4bit", "o_p", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1164]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 7, 25, "", "v_toggle/CLA_4bit", "o_g", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1155]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 17, "", "v_toggle/CLA_4bit", "w_g[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1165]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1156]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1157]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1158]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 9, 22, "", "v_toggle/CLA_4bit", "w_p[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1166]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1167]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1168]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1169]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 10, 17, "", "v_toggle/CLA_4bit", "w_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1170]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/CLA_4bit.sv", 15, 5, "", "v_line/CLA_4bit", "block", "15-20");
}
