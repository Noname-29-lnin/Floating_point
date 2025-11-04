// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024root.h"

VL_ATTR_COLD void Vtb_FPU_unit___024root___eval_initial__TOP(Vtb_FPU_unit___024root* vlSelf);
VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_FPU_unit___024root* vlSelf);
VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_initial(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial\n"); );
    // Body
    Vtb_FPU_unit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__0 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c__1 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_FPU_unit__DOT__i_clk__0 
        = vlSelf->tb_FPU_unit__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                           35);
        vlSelf->tb_FPU_unit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_FPU_unit__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__0__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__1__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__2__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__3__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__4__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__5__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__6__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__6__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__6__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__7__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__7__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__7__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__8__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__9__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__9__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__9__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__10__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__10__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__10__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__11__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__11__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__11__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__12__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__13__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__13__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__13__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__14__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__14__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__14__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__15__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__15__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__15__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__16__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__17__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__17__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__17__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__18__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__18__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__18__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__19__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__19__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__19__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__20__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__21__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__21__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__21__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__22__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__22__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__22__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__23__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__23__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__23__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__24__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__25__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__25__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__25__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__26__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__26__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__26__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__27__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__27__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__27__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__28__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__29__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__29__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__29__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__30__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__30__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__30__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__31__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__31__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__31__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__32__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__33__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__33__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__33__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__34__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__34__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__34__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__35__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__35__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__35__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__36__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__37__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__37__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__37__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__38__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__38__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__38__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__39__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__39__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__39__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__40__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__41__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__41__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__41__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__42__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__42__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__42__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__43__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__43__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__43__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__temp = 0;
    std::string __Vtask_tb_FPU_unit__DOT__Display_result__44__t_type;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_add_sub = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_a = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_b = 0;
    IData/*31:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_32_s;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_32_s = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_ov_flow = 0;
    CData/*0:0*/ __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_un_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_un_flow = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__45__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__45__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__45__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__46__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__46__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__46__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__temp = 0;
    double __Vfunc_tb_FPU_unit__DOT__float_to_real__47__Vfuncout;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__47__f;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__f = 0;
    IData/*31:0*/ __Vfunc_tb_FPU_unit__DOT__float_to_real__47__temp;
    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__temp = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__0__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__0__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__1__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__1__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__1__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__0__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__2__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__2__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__2__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__3__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__3__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__3__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__0__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x80000000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__4__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__4__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__5__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__5__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__5__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__4__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__6__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__6__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__6__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__6__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__7__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__7__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__7__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__7__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__4__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x80000000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__8__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__8__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__9__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__9__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__9__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__9__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__8__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__10__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__10__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__10__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__10__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__11__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__11__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__11__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__11__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__8__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x80000000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x80000000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__12__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__12__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__13__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__13__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__13__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__13__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__12__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__14__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__14__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__14__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__14__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__15__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__15__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__15__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__15__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__12__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__16__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__16__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__17__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__17__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__17__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__17__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__16__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__18__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__18__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__18__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__18__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__19__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__19__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__19__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__19__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__16__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       119);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x80000000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       125);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__20__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__20__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__21__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__21__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__21__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__21__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__20__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__22__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__22__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__22__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__22__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__23__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__23__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__23__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__23__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__20__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x80000000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__24__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__24__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__25__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__25__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__25__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__25__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__24__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__26__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__26__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__26__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__26__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__27__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__27__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__27__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__27__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__24__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x80000000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x80000000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__28__t_type = 
        std::string{"Zero"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__28__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__29__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__29__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__29__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__29__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__28__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__30__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__30__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__30__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__30__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__31__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__31__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__31__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__31__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__28__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x400ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__32__t_type = 
        std::string{"Normal (+)"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__32__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__33__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__33__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__33__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__33__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__32__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__34__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__34__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__34__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__34__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__35__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__35__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__35__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__35__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__32__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       153);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       154);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 0U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x400ccccdU;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x40b00000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__36__t_type = 
        std::string{"Normal (+)"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__36__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__37__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__37__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__37__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__37__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__36__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__38__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__38__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__38__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__38__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__39__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__39__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__39__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__39__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__36__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       162);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       163);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x40b00000U;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x400ccccdU;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__40__t_type = 
        std::string{"Normal (-)"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__40__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__41__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__41__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__41__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__41__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__40__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__42__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__42__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__42__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__42__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__43__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__43__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__43__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__43__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__40__t_o_un_flow);
    co_await vlSelf->__VtrigSched_hef0ac919__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       171);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_FPU_unit__DOT__i_add_sub = 1U;
    vlSelf->tb_FPU_unit__DOT__i_32_a = 0x400ccccdU;
    vlSelf->tb_FPU_unit__DOT__i_32_b = 0x40b00000U;
    co_await vlSelf->__VtrigSched_hef0ac1e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_FPU_unit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_un_flow 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                 >> 3U));
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_ov_flow 
        = vlSelf->tb_FPU_unit__DOT__o_ov_flow;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_32_s 
        = ((0x80000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                           << 3U)) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
                                         ? 0U : ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                    ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))) 
                                       << 0x17U) | 
                                      ((0x700000U & 
                                        ((0xff00000U 
                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 4U)) 
                                         ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                            << 0x14U))) 
                                       | ((0xf0000U 
                                           & ((0xfff0000U 
                                               & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                  >> 4U)) 
                                              ^ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                 << 0x10U))) 
                                          | ((0xf000U 
                                              & ((0xffff000U 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                     >> 4U)) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                  << 0xcU))) 
                                             | ((0xf00U 
                                                 & ((0xfffff00U 
                                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                        >> 4U)) 
                                                    ^ 
                                                    ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                     << 8U))) 
                                                | ((0xf0U 
                                                    & ((0xffffff0U 
                                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                           >> 4U)) 
                                                       ^ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 4U) 
                                                         ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_b 
        = vlSelf->tb_FPU_unit__DOT__i_32_b;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_a 
        = vlSelf->tb_FPU_unit__DOT__i_32_a;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_add_sub 
        = vlSelf->tb_FPU_unit__DOT__i_add_sub;
    __Vtask_tb_FPU_unit__DOT__Display_result__44__t_type = 
        std::string{"Normal (-)"};
    VL_WRITEF_NX("[%@][%s]i_32_a=%x (%.4f) %s i_32_b=%x (%.4f) \t| o_32_s=%x (%.4f) \t| o_ov_flow=%b, o_un_flow=%b\n",0,
                 -1,&(__Vtask_tb_FPU_unit__DOT__Display_result__44__t_type),
                 24,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_add_sub)
                      ? 0x535542U : 0x414444U),32,__Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_a,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_a;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__45__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__45__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__45__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__45__Vfuncout),
                 8,((IData)(__Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_add_sub)
                     ? 0x2dU : 0x2bU),32,__Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_b,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__44__t_i_32_b;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__46__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__46__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__46__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__46__Vfuncout),
                 32,__Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_32_s,
                 64,([&]() {
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__f 
                        = __Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_32_s;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__temp 
                        = __Vfunc_tb_FPU_unit__DOT__float_to_real__47__f;
                    __Vfunc_tb_FPU_unit__DOT__float_to_real__47__Vfuncout 
                        = VL_CVT_D_Q((QData)((IData)(__Vfunc_tb_FPU_unit__DOT__float_to_real__47__temp)));
                }(), __Vfunc_tb_FPU_unit__DOT__float_to_real__47__Vfuncout),
                 1,(IData)(__Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_ov_flow),
                 1,__Vtask_tb_FPU_unit__DOT__Display_result__44__t_o_un_flow);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 
                                       180);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 181, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__32(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__35(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__41(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__42(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__43(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___act_comb__TOP__44(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit___024root___eval_act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_act\n"); );
    // Body
    if ((0x700000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x700000100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x700000800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x700000200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x700000101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x700000102ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x700080100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x700000104ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x700040100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x700000108ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x700020100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x700000110ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x700010100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x700000140ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x700004100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x700000120ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x700008100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x700000180ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x700001100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x700002100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x700000c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x700000300ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x700060100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x700018100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x700001101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x7000fd100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x700005100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x700002101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x7004fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x70001d100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x70007d100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__30(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x7004fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x70047d100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x70007d101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__33(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x7014fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x7024fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x7044fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x7084fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x7104fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__38(vlSelf);
    }
    if ((0x7204fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__39(vlSelf);
    }
    if ((0x7404fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__40(vlSelf);
    }
    if ((0x7804fd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__41(vlSelf);
    }
    if ((0x70027d101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x780cfd101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__43(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x70037d101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_FPU_unit___024root___act_comb__TOP__44(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__0(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a 
        = (0x800000U | ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                       >> 7U)) | (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_a)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b 
        = (0x800000U | ((0x1000000U & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                       >> 7U)) | (0x7fffffU 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                         >> 0x1dU))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare 
        = (1U & (((((~ (IData)((0U != (0x60000000U 
                                       & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                    & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                       >> 0x1dU)) | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                          >> 0x1dU)) 
                                      & (IData)((0x60000000U 
                                                 == 
                                                 (0x60000000U 
                                                  & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                     | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                            >> 0x1eU)) 
                                        & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                           >> 0x1eU)))) 
                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (((~ (IData)((0U != (0x18000000U 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                         & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                            >> 0x1bU)) | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                               >> 0x1bU)) 
                                           & (IData)(
                                                     (0x18000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 >> 0x1cU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                >> 0x1cU)))))) 
                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high__DOT__w_equal_high) 
                     & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                >> 0x1bU)))))) 
                    & ((((~ (IData)((0U != (0x6000000U 
                                            & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                         & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                            >> 0x19U)) | (((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                               >> 0x19U)) 
                                           & (IData)(
                                                     (0x6000000U 
                                                      == 
                                                      (0x6000000U 
                                                       & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                 >> 0x1aU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                >> 0x1aU)))) 
                       | ((~ (IData)((0U != (3U & (
                                                   (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                    ^ vlSelf->tb_FPU_unit__DOT__i_32_b) 
                                                   >> 0x19U))))) 
                          & (((~ (IData)((0U != (0x1800000U 
                                                 & vlSelf->tb_FPU_unit__DOT__i_32_a)))) 
                              & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                 >> 0x17U)) | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                  >> 0x17U)) 
                                                & (IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSelf->tb_FPU_unit__DOT__i_32_b)))) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__i_32_a 
                                                    >> 0x18U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                                                     >> 0x18U)))))))));
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b;
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_b 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max 
            = (0xffU & (vlSelf->tb_FPU_unit__DOT__i_32_a 
                        >> 0x17U));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_b;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_a;
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min) 
                                 >> 4U))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_min))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[0U] 
        = (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                         << 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__1(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0;
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 = 0;
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b 
        = ((0x10000000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_min 
                           << 4U)) | vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [5U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xaU) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 6U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xeU) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xaU)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x12U) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xeU)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x16U) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x12U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high 
        = (1U & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x1aU) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0x16U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
           & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x18U) 
                                      ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 0x14U)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
            & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0x14U) 
                                       ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                          >> 0x10U))))))) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
              & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 0xcU))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
              & (~ (IData)((0U != (3U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xcU) 
                                         ^ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 8U))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_compara 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_compare) 
                 | (((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                            [5U] >> 0x1bU) | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                              [5U] 
                                              >> 0x1aU))) 
                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                          >> 0x16U)) | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0x1aU)) 
                                         & (IData)(
                                                   (0xc00000U 
                                                    == 
                                                    (0xc00000U 
                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                        | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0x1bU)) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 0x17U)))) 
                     | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_6__DOT__w_equal_high) 
                        & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                 [5U] >> 0x19U) | (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x18U))) 
                            & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                               >> 0x14U)) | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x18U)) 
                                              & (IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             | ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 0x19U)) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 0x15U)))))) 
                    | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__w_equal_0_6) 
                        & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U] >> 0x17U) | 
                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                  [5U] >> 0x16U))) 
                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                >> 0x12U)) | (((~ (
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x16U)) 
                                               & (IData)(
                                                         (0xc0000U 
                                                          == 
                                                          (0xc0000U 
                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                              | ((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x17U)) 
                                                 & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 0x13U)))) 
                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_5__DOT__w_equal_high) 
                              & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x15U) 
                                      | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                         [5U] >> 0x14U))) 
                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                     >> 0x10U)) | (
                                                   ((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0x14U)) 
                                                    & (IData)(
                                                              (0x30000U 
                                                               == 
                                                               (0x30000U 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                   | ((~ 
                                                       (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0x15U)) 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0x11U))))))) 
                       | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
                           & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                     [5U] >> 0x13U) 
                                    | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                       [5U] >> 0x12U))) 
                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                   >> 0xeU)) | (((~ 
                                                  (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                   [5U] 
                                                   >> 0x12U)) 
                                                 & (IData)(
                                                           (0xc000U 
                                                            == 
                                                            (0xc000U 
                                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                | ((~ 
                                                    (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                     [5U] 
                                                     >> 0x13U)) 
                                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                      >> 0xfU)))) 
                              | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_4__DOT__w_equal_high) 
                                 & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x11U) 
                                         | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x10U))) 
                                     & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                        >> 0xcU)) | 
                                    (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0x10U)) 
                                      & (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                     | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                            [5U] >> 0x11U)) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 0xdU))))))) 
                          | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
                              & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                        [5U] >> 0xfU) 
                                       | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                          [5U] >> 0xeU))) 
                                   & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                      >> 0xaU)) | (
                                                   ((~ 
                                                     (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                      [5U] 
                                                      >> 0xeU)) 
                                                    & (IData)(
                                                              (0xc00U 
                                                               == 
                                                               (0xc00U 
                                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                                   | ((~ 
                                                       (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                        [5U] 
                                                        >> 0xfU)) 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                         >> 0xbU)))) 
                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_3__DOT__w_equal_high) 
                                    & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xdU) 
                                            | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xcU))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 8U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 0xcU)) 
                                           & (IData)(
                                                     (0x300U 
                                                      == 
                                                      (0x300U 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 0xdU)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 9U))))))) 
                             | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                 & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xbU) 
                                          | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xaU))) 
                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                         >> 6U)) | 
                                     (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                           [5U] >> 0xaU)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                      | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 0xbU)) 
                                         & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                            >> 7U)))) 
                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                       & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                [5U] 
                                                >> 9U) 
                                               | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 8U))) 
                                           & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                              >> 4U)) 
                                          | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 8U)) 
                                              & (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                             | ((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 9U)) 
                                                & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                   >> 5U))))))) 
                                | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_COMP_28BIT_UNIT__DOT__u_i_data_2__DOT__w_equal_high) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                          [5U] 
                                                          >> 8U) 
                                                         ^ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                          >> 4U)))))))) 
                                   & ((((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                             [5U] >> 7U) 
                                            | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 6U))) 
                                        & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                           >> 2U)) 
                                       | (((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                               [5U] 
                                               >> 6U)) 
                                           & (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)))) 
                                          | ((~ (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                 [5U] 
                                                 >> 7U)) 
                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                >> 3U)))) 
                                      | ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                          [5U] 
                                                          >> 6U) 
                                                         ^ 
                                                         (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                          >> 2U)))))) 
                                         & (((~ ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 5U) 
                                                 | (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 4U))) 
                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max) 
                                            | (((~ 
                                                 (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                  [5U] 
                                                  >> 4U)) 
                                                & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                    >> 1U) 
                                                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max)) 
                                               | ((~ 
                                                   (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                                                    [5U] 
                                                    >> 5U)) 
                                                  & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
                                                     >> 1U))))))))))))));
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_PRE_SWAP_BY_MAN_compara) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               << 4U);
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
            = (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_EXPONENT_UNIT__DOT__w_max 
               << 4U);
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_b;
    }
    tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0 
        = (1U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                  ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min) 
                 >> 0x1cU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry 
        = (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__i_add_sub)
                  ? (~ (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0))
                  : (IData)(tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT____VdfgRegularize_h455b4bc6_0_0)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b 
        = (0xfffffffU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)
                          ? (~ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min)
                          : vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_min));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    & vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                   ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 4U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 8U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0xcU));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x14U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x10U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_PRE_SWAP_BY_MAN_UNIT__DOT__w_max 
                    ^ vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_man_b) 
                   >> 0x18U));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__2(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 1U) 
                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                   << 1U) 
                                                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                     << 2U)))) 
                               | (((IData)((6U == (6U 
                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                                  << 3U)) | (((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                             << 3U))) 
                       | ((4U & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                   << 1U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                              << 1U) 
                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                << 2U))) 
                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                      << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                << 2U)) 
                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                       << 2U)))) | 
                          (2U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                  | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                 << 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__3(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number 
        = ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                      ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                     << 4U)) | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__4(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__o_ov_flag = ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry)) 
                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                              >> 7U));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__5(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__6(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__7(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 1U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__8(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__9(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__9\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 2U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__10(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->__VdfgRegularize_hd87f99a1_0_18 = (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__11(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__11\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 3U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__12(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__13(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__13\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 5U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__14(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__15(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__15\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 4U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__16(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__16\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__17(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__17\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c) 
                                                            >> 6U)))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__18(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
           ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c));
    vlSelf->__VdfgRegularize_hd87f99a1_0_13 = (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum)));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__19(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__19\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g 
        = ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                      << 3U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                   << 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                             << 4U)) 
                                 | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                     << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                               << 5U))) 
                                | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                     << 6U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                               << 5U)) 
                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                      << 6U))))) | 
           ((0x20U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                       << 2U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                    << 2U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                              << 3U)) 
                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                      << 5U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                << 4U))) 
                                 | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                      << 5U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                << 4U)) 
                                    & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                       << 5U))))) | 
            ((0x10U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                        << 1U) | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                     << 1U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                       << 4U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                 << 3U))) 
                                  | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                       << 4U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                 << 3U)) 
                                     & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                        << 4U))))) 
             | ((8U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                               << 1U)) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                           << 3U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U))) 
                          | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                               << 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                         << 2U)) & 
                             (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                               | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                              << 3U))))) | ((4U & (
                                                   (0x7ffffffcU 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((0x7ffffffcU 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            >> 1U) 
                                                           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g))) 
                                                       | (0xfffffffcU 
                                                          & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                                << 1U)))) 
                                                      | (0xfffffffcU 
                                                         & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                                << 1U)) 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                               << 2U)))))) 
                                            | ((2U 
                                                & ((0x3ffffffeU 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 2U)) 
                                                   | (((0x3ffffffeU 
                                                        & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            >> 2U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              >> 1U))) 
                                                       | (0xfffffffeU 
                                                          & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g)))) 
                                                      | (0xfffffffeU 
                                                         & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p)) 
                                                            & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                                | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                               << 1U)))))) 
                                               | (1U 
                                                  & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                      >> 3U) 
                                                     | (((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                             >> 2U)) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                               >> 1U))) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                            & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                               >> 1U)) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                              | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)))))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__20(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__20\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__21(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__21\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x7ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [0U] >> 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0x3ffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                             [1U] >> 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xffffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                            [2U] >> 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                           [3U] >> 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT____Vcellinp__SHF_RIGHT_28BIT_UNIT__i_shift_number))
            ? (0xfffU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
                         [4U] >> 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__SHF_RIGHT_28BIT_UNIT__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__22(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__22\n"); );
    // Body
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_18) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_23 = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 3U)) 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 2U) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_24 = (1U 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 1U)) 
                                                      & (IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum))))));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_23 = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                        >> 3U)) 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 2U) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_24 = (1U 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          >> 1U)) 
                                                      & (IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum))))));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__23(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__23\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__24(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__24\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry 
        = (1U & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__o_ov_flag) 
                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                       >> 3U))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__25(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__25\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
            << 0x18U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                          << 0x14U) | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                          << 8U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                           << 4U) | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum)))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[0U] 
        = vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__26(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__26\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__27(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__27\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                           << 1U)) | ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                      | ((0x20U & (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                         | ((0x10U 
                                             & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                            | ((8U 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c))) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__w_i_carry))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__28(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__28\n"); );
    // Body
    vlSelf->__VdfgRegularize_hd87f99a1_0_20 = ((IData)(vlSelf->tb_FPU_unit__DOT__o_ov_flag)
                                                ? (0x8000000U 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                       << 0x17U) 
                                                      | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          << 0x13U) 
                                                         | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__sum) 
                                                                           >> 1U)))))))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))
                                                    ? vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_MAN_ALU_man
                                                    : 
                                                   vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                                                   [5U]));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__29(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__29\n"); );
    // Body
    if (vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_1 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_2 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         ? 
                                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 1U)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                         : 
                                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 1U)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum))))))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_3 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                                                         ? 
                                                        ((~ 
                                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 3U)) 
                                                         & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 2U) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                         : 
                                                        ((~ 
                                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 3U)) 
                                                         & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 2U) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag 
            = vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_1 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_2 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                         ? 
                                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 1U)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum)))))
                                                         : 
                                                        (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 1U)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xcU 
                                                                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum))))))));
        vlSelf->__VdfgRegularize_hd87f99a1_0_3 = (1U 
                                                  & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)
                                                         ? 
                                                        ((~ 
                                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 3U)) 
                                                         & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 2U) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))))))
                                                         : 
                                                        ((~ 
                                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                           >> 3U)) 
                                                         & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum) 
                                                             >> 2U) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__sum)))))))));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag = 0U;
    }
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__30(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__30\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag) 
                     << 4U) | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                 & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                << 3U) | ((4U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                   ? 
                                                  ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                   & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))
                                                   : 
                                                  ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1))) 
                                                 << 2U)) 
                                          | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                ? (
                                                   (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24))
                                                : (
                                                   (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD8_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))
                                                 : 
                                                ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__LOPD_24BIT_UNIT__DOT__LOPD16_o_zero_flag)) 
                                                 & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__31(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__31\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit 
        = (1U & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                 & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                    >> 2U)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)
            ? 0U : vlSelf->__VdfgRegularize_hd87f99a1_0_20);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p 
        = (((IData)((0xfU == (0xfU & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                      >> 0x18U)))) 
            << 6U) | (((IData)((0xfU == (0xfU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                 >> 0x18U)))) 
                       << 5U) | (((IData)((0xfU == 
                                           (0xfU & 
                                            (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                             >> 0x14U)))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                          >> 0x10U)))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                             >> 0xcU)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                                >> 8U)))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                                         >> 4U)))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__32(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__32\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[1U] 
        = ((1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffeU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [0U] << 1U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [0U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[2U] 
        = ((2U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffffcU & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [1U] << 2U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [1U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[3U] 
        = ((4U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xffffff0U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [2U] << 4U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [2U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[4U] 
        = ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfffff00U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [3U] << 8U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [3U]);
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage[5U] 
        = ((0x10U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position))
            ? (0xfff0000U & (vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
                             [4U] << 0x10U)) : vlSelf->tb_FPU_unit__DOT__DUT__DOT__NORMALIZATION_UNIT__DOT__SHF_left_28bit_unit__DOT__stage
           [4U]);
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__33(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__33\n"); );
    // Body
    if (vlSelf->tb_FPU_unit__DOT__o_ov_flag) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 1U;
    } else if ((8U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT____Vcellout__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__sum))) {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b = 0U;
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b = 0U;
    } else {
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b 
            = (0xfU & (~ ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position) 
                          >> 4U)));
        vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b 
            = (0xfU & (~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_one_position)));
    }
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g 
        = (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
            >> 4U) & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p 
        = (0xfU & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                    >> 4U) ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_1__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
           & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p 
        = (0xfU & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_EXPSWAP_max) 
                   ^ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellinp__CLA_4BIT_UNIT_0__b)));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__34(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = (((IData)(((0x70U == (0x70U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
            << 3U) | (((IData)(((0x30U == (0x30U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                                   << 1U))) 
                                 | (1U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__35(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__35\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = (((IData)(((0x700U == (0x700U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
            << 3U) | (((IData)(((0x300U == (0x300U 
                                            & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 7U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                   << 1U))) 
                                 | (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                          >> 1U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__36(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__36\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = (((IData)(((0x7000U == (0x7000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
            << 3U) | (((IData)(((0x3000U == (0x3000U 
                                             & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 0xbU) & 
                                        ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                         << 1U))) | 
                                 (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                        >> 2U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__37(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__37\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = (((IData)(((0x70000U == (0x70000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
            << 3U) | (((IData)(((0x30000U == (0x30000U 
                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 0xfU) & 
                                        ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                         << 1U))) | 
                                 (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                        >> 3U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__38(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__38\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = (((IData)(((0x700000U == (0x700000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
            << 3U) | (((IData)(((0x300000U == (0x300000U 
                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 0x13U) 
                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                           << 1U))) 
                                 | (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                          >> 4U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__39(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__39\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = (((IData)(((0x7000000U == (0x7000000U & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                     & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
            << 3U) | (((IData)(((0x3000000U == (0x3000000U 
                                                & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                       << 2U) | ((2U & ((vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man 
                                         >> 0x17U) 
                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                           << 1U))) 
                                 | (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                          >> 5U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__40(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__40\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = ((8U & ((((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                     >> 0x17U) & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                  >> 0x16U)) & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                >> 0x15U)) 
                  & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                     << 3U))) | ((4U & (((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                          >> 0x17U) 
                                         & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                            >> 0x16U)) 
                                        & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                           << 2U))) 
                                 | ((2U & ((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                            >> 0x17U) 
                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                              << 1U))) 
                                    | (1U & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c) 
                                             >> 6U)))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__41(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__41\n"); );
    // Body
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g 
        = ((0x40U & ((((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                        >> 0x15U) & (VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                     >> 0x14U)) & (
                                                   VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                                                   >> 0x13U)) 
                     & ((VL_SHIFTR_III(28,28,32, vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man, 4U) 
                         >> 0x12U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                      << 6U)))) | (
                                                   (0x20U 
                                                    & ((IData)(
                                                               ((0xf000000U 
                                                                 == 
                                                                 (0xf000000U 
                                                                  & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  ((0xf00000U 
                                                                    == 
                                                                    (0xf00000U 
                                                                     & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                   & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     ((0xf0000U 
                                                                       == 
                                                                       (0xf0000U 
                                                                        & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                      & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        ((0xf000U 
                                                                          == 
                                                                          (0xf000U 
                                                                           & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           ((0xf00U 
                                                                             == 
                                                                             (0xf00U 
                                                                              & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((0xf0U 
                                                                              == 
                                                                              (0xf0U 
                                                                               & vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_NORMALIZATION_man)) 
                                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__42(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__42\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_c))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C 
        = ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_0__o_g) 
           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__w_i_carry) 
              & (0xfU == (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0__DOT__w_p))));
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__43(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__43\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                            | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                               & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                           << 1U)) | ((0x40U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                << 1U)) 
                                      | ((0x20U & (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                   << 1U)) 
                                         | ((0x10U 
                                             & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                << 1U)) 
                                            | ((8U 
                                                & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                       | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                          & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_g) 
                                                          | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_p) 
                                                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c))) 
                                                         << 1U)) 
                                                     | ((((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                          & (vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                                             >> 3U)) 
                                                         & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit)) 
                                                        | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__w_round_bit) 
                                                           & ((~ (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__w_LOPD_24BIT_zero_flag)) 
                                                              & ((vlSelf->__VdfgRegularize_hd87f99a1_0_20 
                                                                  >> 1U) 
                                                                 | vlSelf->__VdfgRegularize_hd87f99a1_0_20)))))))))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__ROUNDING_UNIT__DOT__INCREASE_ROUNDING__DOT__w_c 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_FPU_unit___024root___act_comb__TOP__44(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___act_comb__TOP__44\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((8U & (((0xfffffff8U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                           << 1U) & 
                                          ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                           << 2U)))) 
                         | (((IData)((6U == (6U & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                             & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g)) 
                            << 3U)) | (((IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p)))) 
                                        & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              << 2U)) 
                                                          & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                           | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                              & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__w_C))));
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c 
        = __Vtemp_1;
    vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT____Vcellout__CLA_4BIT_UNIT_1__o_g 
        = (1U & (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                  >> 3U) | ((((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                              >> 3U) & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                    & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT____VdfgRegularize_h7e120794_0_1) 
                                                       & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                          >> 1U)) 
                                                      & ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_g) 
                                                         | ((IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_p) 
                                                            & (IData)(vlSelf->tb_FPU_unit__DOT__DUT__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1__DOT__w_c))))))));
}

void Vtb_FPU_unit___024root___eval_nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_nba\n"); );
}

void Vtb_FPU_unit___024root___timing_resume(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_resume\n"); );
    // Body
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hef0ac919__0.resume("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hef0ac1e8__0.resume("@(negedge tb_FPU_unit.i_clk)");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_FPU_unit___024root___timing_commit(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___timing_commit\n"); );
    // Body
    if ((! (0x200000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hef0ac919__0.commit("@(posedge tb_FPU_unit.i_clk)");
    }
    if ((! (0x400000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hef0ac1e8__0.commit("@(negedge tb_FPU_unit.i_clk)");
    }
}

void Vtb_FPU_unit___024root___eval_triggers__act(Vtb_FPU_unit___024root* vlSelf);

bool Vtb_FPU_unit___024root___eval_phase__act(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<35> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_FPU_unit___024root___eval_triggers__act(vlSelf);
    Vtb_FPU_unit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_FPU_unit___024root___timing_resume(vlSelf);
        Vtb_FPU_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_FPU_unit___024root___eval_phase__nba(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_FPU_unit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__nba(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_FPU_unit___024root___dump_triggers__act(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_FPU_unit___024root___eval(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_FPU_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_FPU_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/tb_FPU_unit.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_FPU_unit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_FPU_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_FPU_unit___024root___eval_debug_assertions(Vtb_FPU_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_FPU_unit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
