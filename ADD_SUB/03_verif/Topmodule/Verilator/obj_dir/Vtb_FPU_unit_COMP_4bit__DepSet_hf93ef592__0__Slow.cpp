// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit_COMP_4bit.h"
#include "Vtb_FPU_unit__Syms.h"

VL_ATTR_COLD void Vtb_FPU_unit_COMP_4bit___stl_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___stl_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0\n"); );
    // Body
    if (((IData)(vlSelf->o_less) ^ (IData)(vlSelf->__Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->__Vtogcov__o_less = vlSelf->o_less;
    }
}

VL_ATTR_COLD void Vtb_FPU_unit_COMP_4bit___stl_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___stl_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__1\n"); );
    // Body
    vlSelf->o_equal = (1U & ((~ (IData)((0U != (3U 
                                                & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 2U))))) 
                             & (~ (IData)((0U != (3U 
                                                  & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U]))))));
}

VL_ATTR_COLD void Vtb_FPU_unit_COMP_4bit___stl_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___stl_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0\n"); );
    // Body
    if (((IData)(vlSelf->o_equal) ^ (IData)(vlSelf->__Vtogcov__o_equal))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->__Vtogcov__o_equal = vlSelf->o_equal;
    }
    if ((1U & ((~ (IData)((0U != (3U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U])))) ^ (IData)(vlSelf->__Vtogcov__w_equal_low)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->__Vtogcov__w_equal_low = (1U & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                            [5U])))));
    }
    if ((1U & ((~ (IData)((0U != (3U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 2U))))) 
               ^ (IData)(vlSelf->__Vtogcov__w_equal_high)))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->__Vtogcov__w_equal_high = (1U & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                                [5U] 
                                                                >> 2U))))));
    }
    if ((1U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->__Vtogcov__i_data_a = ((0xeU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (1U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((2U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->__Vtogcov__i_data_a = ((0xdU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (2U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((4U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->__Vtogcov__i_data_a = ((0xbU & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (4U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
    if ((8U & (vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ (IData)(vlSelf->__Vtogcov__i_data_a)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->__Vtogcov__i_data_a = ((7U & (IData)(vlSelf->__Vtogcov__i_data_a)) 
                                       | (8U & vlSymsp->TOP.tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U]));
    }
}

VL_ATTR_COLD void Vtb_FPU_unit_COMP_4bit___configure_coverage(Vtb_FPU_unit_COMP_4bit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_FPU_unit_COMP_4bit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1171]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1172]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1173]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1174]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 2, 24, "", "v_toggle/COMP_4bit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 3, 24, "", "v_toggle/COMP_4bit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1176]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 4, 24, "", "v_toggle/COMP_4bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1177]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 5, 24, "", "v_toggle/COMP_4bit", "o_equal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 7, 11, "", "v_toggle/COMP_4bit", "w_less_low", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1178]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 7, 23, "", "v_toggle/COMP_4bit", "w_equal_low", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 8, 11, "", "v_toggle/COMP_4bit", "w_less_high", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1179]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_4bit.sv", 8, 24, "", "v_toggle/COMP_4bit", "w_equal_high", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1171]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 2, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1172]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 2, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 3, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 3, 24, ".u_low", "v_toggle/COMP_2bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 4, 24, ".u_low", "v_toggle/COMP_2bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1178]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 5, 24, ".u_low", "v_toggle/COMP_2bit", "o_equal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1173]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 2, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1174]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 2, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 3, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 3, 24, ".u_high", "v_toggle/COMP_2bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 4, 24, ".u_high", "v_toggle/COMP_2bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1179]), first, "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/02_rtl/COMP_2bit.sv", 5, 24, ".u_high", "v_toggle/COMP_2bit", "o_equal", "");
}
