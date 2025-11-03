// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit_COMP_4bit.h"
#include "Vtb_COMP_28bit__Syms.h"

VL_ATTR_COLD void Vtb_COMP_28bit_COMP_4bit___configure_coverage(Vtb_COMP_28bit_COMP_4bit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_COMP_28bit_COMP_4bit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 4, 24, "", "v_toggle/COMP_4bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 5, 24, "", "v_toggle/COMP_4bit", "o_equal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 7, 11, "", "v_toggle/COMP_4bit", "w_less_low", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 7, 23, "", "v_toggle/COMP_4bit", "w_equal_low", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 8, 11, "", "v_toggle/COMP_4bit", "w_less_high", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_4bit.sv", 8, 24, "", "v_toggle/COMP_4bit", "w_equal_high", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 2, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 2, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 3, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 3, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 4, 24, ".u_low", "v_toggle/COMP_2bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 5, 24, ".u_low", "v_toggle/COMP_2bit", "o_equal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 2, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 2, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 3, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 3, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 4, 24, ".u_high", "v_toggle/COMP_2bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_2bit.sv", 5, 24, ".u_high", "v_toggle/COMP_2bit", "o_equal", "");
}
