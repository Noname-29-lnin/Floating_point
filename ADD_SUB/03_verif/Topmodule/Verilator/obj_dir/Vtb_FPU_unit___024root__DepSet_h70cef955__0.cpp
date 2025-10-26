// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit__Syms.h"
#include "Vtb_FPU_unit___024root.h"

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_initial__TOP(Vtb_FPU_unit___024root* vlSelf);
VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_FPU_unit___024root* vlSelf);
VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4(Vtb_FPU_unit_COMP_4bit* vlSelf);

void Vtb_FPU_unit___024root___eval_initial(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial\n"); );
    // Body
    Vtb_FPU_unit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
    Vtb_FPU_unit_CLA_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
    Vtb_FPU_unit_COMP_4bit___eval_initial__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4));
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__0 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__0 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 
        = vlSelf->tb_FPU_unit__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__0__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__0__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__0__f = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__4__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__4__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__4__f = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__i_rst_n = 0U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 0U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_rst_n = 1U;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 0U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0x400ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: 5.5 + 2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__0__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__0__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__0__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__0__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 1U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0x400ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: 5.5 - 2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__1__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 0U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0xc00ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: 5.5 + -2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__2__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 1U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0xc00ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: 5.5 - -2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__3__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 0U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0xc0b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0xc00ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: -5.5 + -2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__4__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__4__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__4__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__4__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_fpu_op = 1U;
    vlSelf->tb_FPU_unit__DOT__i_floating_a = 0xc0b00000U;
    vlSelf->tb_FPU_unit__DOT__i_floating_b = 0xc00ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] ADD: -5.5 - -2.2 = %f (%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f 
                        = vlSelf->tb_FPU_unit__DOT__o_floating_result;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__5__f)));
                    ++(vlSymsp->__Vcoverage[103]);
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout),
                 32,vlSelf->tb_FPU_unit__DOT__o_floating_result);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 107, "");
    ++(vlSymsp->__Vcoverage[104]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Temp_Code/03_verif/Topmodule/tb_FPU_unit.sv", 
                                           16);
        vlSelf->tb_FPU_unit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__i_clk)));
        ++(vlSymsp->__Vcoverage[100]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_FPU_unit___024root___eval_triggers__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage.neq(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1)));
    vlSelf->__VactTriggered.set(4U, vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage.neq(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->tb_FPU_unit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1.assign(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1.assign(vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 
        = vlSelf->tb_FPU_unit__DOT__i_clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_FPU_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__1(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__2(Vtb_FPU_unit_COMP_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__0(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__2(Vtb_FPU_unit_CLA_4bit* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_act\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x60ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high));
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4));
        Vtb_FPU_unit___024root___act_comb__TOP__2(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit_COMP_4bit___act_sequent__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4));
    }
    if ((0x62ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x61ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4));
        Vtb_FPU_unit___024root___act_comb__TOP__5(vlSelf);
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4));
        Vtb_FPU_unit_COMP_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4));
    }
    if ((0x63ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x65ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x6bULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__1((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
        Vtb_FPU_unit_CLA_4bit___act_comb__TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__2((&vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1));
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x7bULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_sequent__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_FPU_unit__DOT__i_clk) ^ (IData)(vlSelf->tb_FPU_unit__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_clk 
            = vlSelf->tb_FPU_unit__DOT__i_clk;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_FPU_unit__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_FPU_unit__DOT__i_rst_n;
    }
    if (((IData)(vlSelf->tb_FPU_unit__DOT__i_fpu_op) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT____Vtogcov__i_fpu_op))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_fpu_op 
            = vlSelf->tb_FPU_unit__DOT__i_fpu_op;
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffeU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (1U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffdU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (2U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffffbU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (4U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffff7U & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (8U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffefU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffdfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffffbfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffff7fU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffeffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffdffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffffbffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffff7ffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffefffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffdfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffffbfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffff7fffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffeffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffdffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfffbffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfff7ffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffefffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffdfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xffbfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xff7fffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfeffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfdffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xfbffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xf7ffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xefffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x20000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xdfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x20000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((0x40000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0xbfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x40000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if (((vlSelf->tb_FPU_unit__DOT__i_floating_a ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a 
            = ((0x7fffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_a) 
               | (0x80000000U & vlSelf->tb_FPU_unit__DOT__i_floating_a));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffeU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (1U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffdU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (2U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffffbU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (4U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffff7U & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (8U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffefU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffdfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffffbfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffff7fU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffeffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffdffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffffbffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffff7ffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffefffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffdfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffffbfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffff7fffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffeffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffdffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfffbffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfff7ffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffefffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffdfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xffbfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xff7fffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfeffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfdffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xfbffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xf7ffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xefffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x20000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xdfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x20000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if ((0x40000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0xbfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x40000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    if (((vlSelf->tb_FPU_unit__DOT__i_floating_b ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b 
            = ((0x7fffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__i_floating_b) 
               | (0x80000000U & vlSelf->tb_FPU_unit__DOT__i_floating_b));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
        = (0x800000U | ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                                       >> 7U)) | (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_floating_a)));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
        = (0x800000U | ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                                       >> 7U)) | (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_floating_b)));
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1ff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1feffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1fbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1f7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1efffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1dfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x1bfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0x17fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a 
            = ((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_a) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1feffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1f7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1efffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1dfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x1bfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0x17fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b 
            = ((0xffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT____Vtogcov__w_b) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_equal) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_low))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_low 
            = vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_less) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_low))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_low 
            = vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_equal) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_high))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_equal_high 
            = vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_less) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_high))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT____Vtogcov__w_less_high 
            = vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_less;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare 
        = ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_less) 
           | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high.o_equal) 
              & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low.o_less)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_compare))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_compare 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare;
    }
    if (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a;
    } else {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_floating_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b;
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_min)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min)) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min))));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 1U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (2U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 2U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (4U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 3U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (8U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 4U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x10U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                               >> 4U)) << 4U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 5U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 5U)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x20U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                               >> 5U)) << 5U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                   >> 6U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b) 
                              >> 6U)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x40U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                               >> 6U)) << 6U)));
    }
    if ((1U ^ (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x80U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_min) 
                               >> 7U)) << 7U)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSWAP_max)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_max)));
    }
    if ((IData)(((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                  >> 0x18U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_max)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_max 
            = (1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                     >> 0x18U));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xfbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xf7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0xbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max 
            = ((0x7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_max) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max));
    }
    if ((IData)(((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                  >> 0x18U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_min)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_sign_min 
            = (1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                     >> 0x18U));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xfbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xf7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0xbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min 
            = ((0x7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SWAP1_min) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0U] 
        = (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                         << 4U));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P 
        = (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
            << 1U) | (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p)));
    if ((((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
          | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                | (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))))) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry 
            = ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
               | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
                  & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                     | (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p)))));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
            << 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
                 | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum));
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number 
        = ((0x10U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.sum) 
                     << 4U)) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_EXPSUB_diff_value)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSUB_diff_value)));
    }
    if ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[608]);
    }
    if ((1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[609]);
    }
    if ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[611]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[612]);
    }
    if ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[614]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[615]);
    }
    if ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[617]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[618]);
    }
    if ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[620]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[621]);
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number 
            = ((0x1eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number 
            = ((0x1dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number 
            = ((0x1bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number 
            = ((0x17U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number 
            = ((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__i_shift_number)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_EXPSWAP_compare) 
                 | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_compara))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_compara 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
        = ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                           << 4U)) | vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [5U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x7ffffffU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [0U] >> 1U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x3ffffffU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [1U] >> 2U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xffffffU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                            [2U] >> 4U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffffU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                           [3U] >> 8U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U] >> 0x10U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [4U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.o_less) 
            << 6U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.o_less) 
                       << 5U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.o_less) 
                                  << 4U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.o_less) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.o_less) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.o_less) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4.o_less)))))));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4.o_equal) 
            << 6U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4.o_equal) 
                       << 5U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4.o_equal) 
                                  << 4U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4.o_equal) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4.o_equal) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4.o_equal) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4.o_equal)))))));
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1ff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1fbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1f7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1effffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1dffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x1bffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0x17ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
                        ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b 
            = ((0xfffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT____Vtogcov__w_b) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_SHF_RIGHT_min) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[0U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [0U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [0U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[1U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [1U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [1U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[2U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [2U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [2U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[3U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [3U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [3U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[4U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [4U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage[5U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT____Vtogcov__stage
                [5U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [5U]));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x7eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x7dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x7bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x77U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x6fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x5fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less 
            = ((0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_less)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x7eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x7dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x7bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x77U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x6fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x5fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal 
            = ((0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__w_equal)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__6\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0;
    tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 = 0;
    // Body
    if (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_PRE_SWAP_BY_MAN_compara) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
            = (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               << 4U);
    } else {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
            = (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               << 4U);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_less) 
           | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
              & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                 >> 1U)));
    if ((IData)(((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  >> 0x1cU) ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_sign_result)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_sign_result 
            = (1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                     >> 0x1cU));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_max) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max));
    }
    if ((IData)(((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                  >> 0x1cU) ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_sign_min)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_sign_min 
            = (1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                     >> 0x1cU));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_PRE_SWAP_BY_MAN_min) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    }
    if ((1U & ((~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min) 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (1U & (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 1U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (2U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 2U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (4U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 3U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (8U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 4U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x10U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                               >> 4U)) << 4U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 5U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 5U)))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x20U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                               >> 5U)) << 5U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 6U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 6U)))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x40U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                               >> 6U)) << 6U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 7U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 7U)))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x80U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                               >> 7U)) << 7U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 8U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 8U)))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x100U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                >> 8U)) << 8U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 9U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                              >> 9U)))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x200U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                >> 9U)) << 9U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xaU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x400U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xbU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x800U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xcU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x1000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                 >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xdU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x2000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                 >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xeU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x4000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                 >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0xfU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x8000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                 >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x10U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x10000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                  >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x11U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x20000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                  >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x12U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x40000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                  >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x13U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x80000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                  >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x14U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x100000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x14U)) << 0x14U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x15U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x200000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x15U)) << 0x15U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x16U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x400000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x16U)) << 0x16U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x17U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x800000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                   >> 0x17U)) << 0x17U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x18U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x1000000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                    >> 0x18U)) << 0x18U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x19U)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x2000000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                    >> 0x19U)) << 0x19U)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x1aU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x4000000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                    >> 0x1aU)) << 0x1aU)));
    }
    if ((1U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                   >> 0x1bU)) ^ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
                                 >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_n_man_b) 
               | (0x8000000U & ((~ (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
                                    >> 0x1bU)) << 0x1bU)));
    }
    tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min) 
                 >> 0x1cU));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_COMP_28BIT_less)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_COMP_28BIT_less 
            = (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__less_chain)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__less_chain)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__i_fpu_op)
                  ? (~ (IData)(tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0))
                  : (IData)(tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_carry))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_carry 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
        = (0xfffffffU & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry)
                          ? (~ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)
                          : vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_i_man_b) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))))))));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
            << 6U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                       << 5U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                  << 4U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.o_g)))))));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x7eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x7dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x7bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x77U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x6fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x5fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p 
            = ((0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_p)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x7eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x7dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x7bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x77U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x6fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x5fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g 
            = ((0x3fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_g)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain 
        = (0x80U | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal) 
                    & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                       >> 1U)));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__o_equal)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__o_equal 
            = (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT____Vtogcov__equal_chain)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__equal_chain)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__9\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
    __VdfgRegularize_hd87f99a1_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_5;
    __VdfgRegularize_hd87f99a1_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_7;
    __VdfgRegularize_hd87f99a1_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
    __VdfgRegularize_hd87f99a1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_10;
    __VdfgRegularize_hd87f99a1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
    __VdfgRegularize_hd87f99a1_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_18;
    __VdfgRegularize_hd87f99a1_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_19;
    __VdfgRegularize_hd87f99a1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_20;
    __VdfgRegularize_hd87f99a1_0_20 = 0;
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                            | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                           << 1U)) | ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                      | ((0x20U & (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                         | ((0x10U 
                                             & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                            | ((8U 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry))))))));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c 
        = __Vtemp_1;
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum));
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum));
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((1U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 0x18U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                          << 0x14U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                         << 0xcU) | 
                                        (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                          << 8U) | 
                                         (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                           << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.sum)))))));
    tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2 
        = (IData)((0U != (0xcU & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if ((IData)((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                  >> 7U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_overflow)))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT____Vtogcov__w_overflow 
            = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vtogcov__w_c)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow 
        = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__w_i_carry)) 
           & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
              >> 7U));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                        >> 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum)))));
    __VdfgRegularize_hd87f99a1_0_4 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 1U)) 
                                            | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               >> 3U)));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__i_data)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 0xcU) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                         << 8U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_0__i_data)));
    __VdfgRegularize_hd87f99a1_0_5 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 1U)) 
                                            | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               >> 3U)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    __VdfgRegularize_hd87f99a1_0_7 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 1U)) 
                                            | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               >> 3U)));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                        >> 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum)))));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__i_data)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vcellinp__LOPD_8bit_unit_1__i_data)));
    }
    __VdfgRegularize_hd87f99a1_0_8 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 1U)) 
                                            | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               >> 3U)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    __VdfgRegularize_hd87f99a1_0_10 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                 >> 1U)) 
                                             | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 3U)));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0 
        = (1U & (~ ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
                    | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                        >> 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum)))));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_i_data)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_i_data)));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_man) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0U] 
        = vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man;
    __VdfgRegularize_hd87f99a1_0_11 = (1U & (((~ (IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2)) 
                                              & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                 >> 1U)) 
                                             | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                >> 3U)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_12 = ((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum))));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_overflow))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_MAN_ALU_overflow 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow) 
                    | ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                       >> 3U))));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_4));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfffeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfffdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfffbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfff7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xffefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xffdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xffbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xff7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfeffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x100U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfdffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x200U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xfbffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x400U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xf7ffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x800U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xefffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x1000U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xdfffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x2000U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0xbfffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x4000U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data) 
                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data 
            = ((0x7fffU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_i_data)) 
               | (0x8000U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
            << 0x14U) | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                          << 0x10U) | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_i_data)));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_5));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_6) {
        __VdfgRegularize_hd87f99a1_0_19 = __VdfgRegularize_hd87f99a1_0_5;
        __VdfgRegularize_hd87f99a1_0_20 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_19 = __VdfgRegularize_hd87f99a1_0_4;
        __VdfgRegularize_hd87f99a1_0_20 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_7));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_8));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_9) {
        __VdfgRegularize_hd87f99a1_0_17 = __VdfgRegularize_hd87f99a1_0_8;
        __VdfgRegularize_hd87f99a1_0_18 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_17 = __VdfgRegularize_hd87f99a1_0_7;
        __VdfgRegularize_hd87f99a1_0_18 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_10));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1 
        = (((IData)(tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_11));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_12) {
        __VdfgRegularize_hd87f99a1_0_15 = __VdfgRegularize_hd87f99a1_0_11;
        __VdfgRegularize_hd87f99a1_0_16 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_1__DOT____VdfgRegularize_h3423ccb7_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_15 = __VdfgRegularize_hd87f99a1_0_10;
        __VdfgRegularize_hd87f99a1_0_16 = tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__LOPD_4bit_unit_0__DOT____VdfgRegularize_h3423ccb7_0_2;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_i_carry))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_i_carry 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry;
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vcellinp__LOPD_24BIT_UNIT__i_data));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_20) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_19)));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_18) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_17)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1;
    }
    if (vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_0;
        __VdfgRegularize_hd87f99a1_0_1 = vlSelf->__VdfgRegularize_hd87f99a1_0_6;
        __VdfgRegularize_hd87f99a1_0_2 = __VdfgRegularize_hd87f99a1_0_20;
        __VdfgRegularize_hd87f99a1_0_3 = __VdfgRegularize_hd87f99a1_0_19;
    } else {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag = 0U;
        __VdfgRegularize_hd87f99a1_0_1 = vlSelf->__VdfgRegularize_hd87f99a1_0_9;
        __VdfgRegularize_hd87f99a1_0_2 = __VdfgRegularize_hd87f99a1_0_18;
        __VdfgRegularize_hd87f99a1_0_3 = __VdfgRegularize_hd87f99a1_0_17;
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_8bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_16) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_15)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_zero_flag 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((6U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((5U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((3U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((6U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((5U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((3U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_zero_flag 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag;
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one 
        = ((8U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                  << 3U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                              << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                         << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3))));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position 
        = ((0x10U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                     << 4U)) | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_LSB__DOT__w_zero_flag_1)) 
                                  & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                 << 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                                              ? (IData)(__VdfgRegularize_hd87f99a1_0_1)
                                              : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                                                 ? (IData)(__VdfgRegularize_hd87f99a1_0_2)
                                                 : (IData)(__VdfgRegularize_hd87f99a1_0_16)) 
                                               << 1U) 
                                              | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)
                                                  ? (IData)(__VdfgRegularize_hd87f99a1_0_3)
                                                  : (IData)(__VdfgRegularize_hd87f99a1_0_15))))));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_pos_one)));
    }
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_zero_flag))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_zero_flag 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_pos_one)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position 
            = ((0x17U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position 
            = ((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_o_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)));
    }
    if ((1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 1U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (2U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 2U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (4U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 3U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (8U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                   >> 4U)) ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (0x10U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                               >> 4U)) << 4U)));
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                  >> 5U)))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (0x20U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                               >> 5U)) << 5U)));
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                  >> 6U)))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (0x40U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                               >> 6U)) << 6U)));
    }
    if ((1U & (1U ^ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b) 
                     >> 7U)))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__i_data_b)) 
               | (0x80U & ((~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                               >> 7U)) << 7U)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P 
        = (((IData)((0xfU == (0xfU & (1U ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                               >> 4U)))))) 
            << 1U) | (0xfU == (0xfU & (7U ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_P)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__10\n"); );
    // Body
    if ((((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.o_g) 
          | ((0xfU == (0xfU & (1U ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                        >> 4U))))) 
             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.o_g) 
                | (0xfU == (0xfU & (7U ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position)))))))) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__o_carry))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__o_carry 
            = ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.o_g) 
               | ((0xfU == (0xfU & (1U ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position) 
                                             >> 4U))))) 
                  & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.o_g) 
                     | (0xfU == (0xfU & (7U ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_o_one_position))))))));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.o_g) 
            << 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.o_g));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_G)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_G) 
                 | (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_P)));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_C))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT____Vtogcov__w_C 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__w_C;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__11\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.sum));
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position 
        = ((0x10U & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1.sum) 
                     << 4U)) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0.sum));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT____Vtogcov__w_sub)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__w_sub)));
    }
    if ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))) {
        ++(vlSymsp->__Vcoverage[1139]);
    }
    if ((1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[1140]);
    }
    if ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))) {
        ++(vlSymsp->__Vcoverage[1142]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1143]);
    }
    if ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))) {
        ++(vlSymsp->__Vcoverage[1145]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1146]);
    }
    if ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))) {
        ++(vlSymsp->__Vcoverage[1148]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1149]);
    }
    if ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))) {
        ++(vlSymsp->__Vcoverage[1151]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1152]);
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position 
            = ((0x17U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position 
            = ((0xfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_LOPD_24BIT_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__i_lopd_value)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
    }
    if (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b = 1U;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 1U;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
    } else if ((8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum))) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b = 0U;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 0U;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
    } else {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b 
            = (0xffU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b 
            = (0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position)));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b 
            = (0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position) 
                          >> 4U)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_data_b)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_data_b)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P 
        = (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
            << 1U) | (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p)));
    if ((((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
          | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
             & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
                   & (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p)))))) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__o_carry 
            = ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
               | ((0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.__PVT__w_p)) 
                  & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g) 
                     | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
                        & (0xfU == (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))))));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.o_g) 
            << 1U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_P)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P)));
    }
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G 
            = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G 
            = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_G)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_G) 
                 | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_P) 
                    & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry))));
    if (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C) 
         ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vtogcov__w_C 
            = vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__13\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result 
        = (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1.sum) 
            << 4U) | (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT____Vtogcov__w_exp_result)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result)));
    }
    vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__w_exp_result));
    if ((1U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xfeU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((2U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xfdU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((4U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xfbU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
               ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xf7U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xefU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xdfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (0x20U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0xbfU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (0x40U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
                  ^ (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result 
            = ((0x7fU & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_exponent_result)) 
               | (0x80U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result)));
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__14\n"); );
    // Init
    IData/*27:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffeU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [0U] << 1U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffcU & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [1U] << 2U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [2U] << 4U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))
            ? (0xfffff00U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [3U] << 8U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_one_position))
            ? (0xfff0000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [4U] << 0x10U)) : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [4U]);
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT____Vtogcov__w_shift_left) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [0U]))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [0U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[0U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [0U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [0U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [1U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[1U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [1U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [1U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [2U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[2U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [2U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [2U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [3U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[3U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [3U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [3U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [4U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [4U]))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[4U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [4U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [4U]));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
               [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                  [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                   [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                    [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                     [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                      [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                       [5U] ^ vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                       [5U]))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage[5U] 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT____Vtogcov__stage
                [5U]) | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                         [5U]));
    }
    __VdfgRegularize_hd87f99a1_0_14 = ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_overflow)
                                        ? (0x8000000U 
                                           | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               << 0x17U) 
                                              | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                           << 7U) 
                                                          | (((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                              << 3U) 
                                                             | (7U 
                                                                & ((IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0.sum) 
                                                                   >> 1U)))))))))
                                        : ((8U & (IData)(vlSymsp->TOP__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum))
                                            ? vlSelf->tb_FPU_unit__DOT__dut__DOT__w_MAN_ALU_man
                                            : vlSelf->tb_FPU_unit__DOT__dut__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                           [5U]));
    if (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag) {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result = 0U;
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man = 0U;
    } else {
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
            = (0xffffffU & (__VdfgRegularize_hd87f99a1_0_14 
                            >> 4U));
        vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
            = __VdfgRegularize_hd87f99a1_0_14;
    }
    vlSelf->tb_FPU_unit__DOT__o_floating_result = (
                                                   (0x80000000U 
                                                    & (vlSelf->tb_FPU_unit__DOT__dut__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                                                       << 3U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_exponent_result) 
                                                       << 0x17U) 
                                                      | ((IData)(vlSelf->tb_FPU_unit__DOT__dut__DOT__w_LOPD_24BIT_zero_flag)
                                                          ? 0U
                                                          : 
                                                         (0x7fffffU 
                                                          & (__VdfgRegularize_hd87f99a1_0_14 
                                                             >> 4U)))));
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xfbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xf7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0xbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result 
            = ((0x7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_mantissa_result) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_mantissa_result));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffffeU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (1U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffffdU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (2U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffffbU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (4U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
               ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffff7U & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (8U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffffefU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffffdfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffffbfU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                  ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffff7fU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffeffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffdffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffffbffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                   ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffff7ffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffefffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffdfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfffbfffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                    ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfff7fffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffeffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffdffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xffbffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                     ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xff7ffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfefffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfdfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xfbfffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                      ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xf7fffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xeffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xdffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0xbffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man 
                       ^ vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man 
            = ((0x7ffffffU & vlSelf->tb_FPU_unit__DOT__dut__DOT____Vtogcov__w_NORMALIZATION_man) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__dut__DOT__w_NORMALIZATION_man));
    }
    if ((1U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffffeU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (1U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((2U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffffdU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (2U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((4U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffffbU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (4U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((8U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
               ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffff7U & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (8U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x10U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffffefU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x10U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x20U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffffdfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x20U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x40U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffffbfU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x40U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x80U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                  ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffff7fU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x80U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x100U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffeffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x100U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x200U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffdffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x200U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x400U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffffbffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x400U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x800U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                   ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffff7ffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x800U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x1000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffefffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x1000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x2000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffdfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x2000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x4000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffffbfffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x4000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x8000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                    ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffff7fffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x8000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x10000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffeffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x10000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x20000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffdffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x20000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x40000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfffbffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x40000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x80000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                     ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfff7ffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x80000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x100000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffefffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x100000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x200000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffdfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x200000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x400000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xffbfffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x400000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x800000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                      ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xff7fffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x800000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfeffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x1000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x2000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfdffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x2000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x4000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xfbffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x4000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x8000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                       ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xf7ffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x8000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xefffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x10000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x20000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xdfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x20000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if ((0x40000000U & (vlSelf->tb_FPU_unit__DOT__o_floating_result 
                        ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0xbfffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x40000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
    if (((vlSelf->tb_FPU_unit__DOT__o_floating_result 
          ^ vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result 
            = ((0x7fffffffU & vlSelf->tb_FPU_unit__DOT____Vtogcov__o_floating_result) 
               | (0x80000000U & vlSelf->tb_FPU_unit__DOT__o_floating_result));
    }
}
