// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_unit.h for the primary calling header

#include "Vtb_LOPD_unit__pch.h"
#include "Vtb_LOPD_unit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_unit___024root___eval_initial__TOP(Vtb_LOPD_unit___024root* vlSelf);
VlCoroutine Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_unit___024root* vlSelf);
VlCoroutine Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_LOPD_unit___024root* vlSelf);

void Vtb_LOPD_unit___024root___eval_initial(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_initial\n"); );
    // Body
    Vtb_LOPD_unit___024root___eval_initial__TOP(vlSelf);
    Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__1 
        = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_clk__0 
        = vlSelf->tb_LOPD_unit__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_unit__DOT__i_rst_n__0 
        = vlSelf->tb_LOPD_unit__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "LOPD_unit/tb_LOPD_unit.sv", 
                                           31);
        vlSelf->tb_LOPD_unit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_LOPD_unit__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__i_rst_n = 0U;
    vlSelf->tb_LOPD_unit__DOT__i_addr = 0U;
    vlSelf->tb_LOPD_unit__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "LOPD_unit/tb_LOPD_unit.sv", 
                                       44);
    vlSelf->tb_LOPD_unit__DOT__i_rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "LOPD_unit/tb_LOPD_unit.sv", 
                                       47);
    co_await vlSelf->__VtrigSched_h196fd084__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_unit.i_clk)", 
                                                       "LOPD_unit/tb_LOPD_unit.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "LOPD_unit/tb_LOPD_unit.sv", 
                                       51);
    vlSelf->tb_LOPD_unit__DOT__i_addr = 3U;
    vlSelf->tb_LOPD_unit__DOT__i_data = VL_URANDOM_RANGE_I(0U, 0x20U);
    co_await vlSelf->__VtrigSched_h196fd084__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_unit.i_clk)", 
                                                       "LOPD_unit/tb_LOPD_unit.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "LOPD_unit/tb_LOPD_unit.sv", 
                                       51);
    vlSelf->tb_LOPD_unit__DOT__i_addr = 3U;
    vlSelf->tb_LOPD_unit__DOT__i_data = VL_URANDOM_RANGE_I(0U, 0x20U);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "LOPD_unit/tb_LOPD_unit.sv", 
                                       55);
    VL_FINISH_MT("LOPD_unit/tb_LOPD_unit.sv", 56, "");
}

void Vtb_LOPD_unit___024root___act_sequent__TOP__0(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__0(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__1(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__2(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__3(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__4(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__5(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__6(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_sequent__TOP__7(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__1(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__2(Vtb_LOPD_unit___024root* vlSelf);
void Vtb_LOPD_unit___024root___act_comb__TOP__3(Vtb_LOPD_unit___024root* vlSelf);

void Vtb_LOPD_unit___024root___eval_act(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_act\n"); );
    // Body
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x600ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x44ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x65ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__0(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xcU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 1U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 3U))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__1(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc0U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 5U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 7U))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = (IData)(
                                                     (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__2(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc00U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 9U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0xbU))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__3(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc0000U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 0x11U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0x13U))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__4(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc000U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 0xdU)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0xfU))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = (IData)(
                                                     (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                       >> 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__5(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc00000U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 0x15U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0x17U))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_16 = (IData)(
                                                      (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                        >> 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x300000U 
                                                           & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__6(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)((0U != (0xc000000U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 0x19U)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0x1bU))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_sequent__TOP__7(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)((0U != (0xc0000000U & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
            << 1U) | (1U & (((~ ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                 >> 1U)) & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 0x1dU)) 
                            | (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                               >> 0x1fU))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_19 = (IData)(
                                                      (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                        >> 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x30000000U 
                                                           & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_comb__TOP__1(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1 
        = (1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                      >> 1U) | (IData)((0U != (0x300U 
                                               & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_comb__TOP__2(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1 
        = (1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                      >> 1U) | (IData)((0U != (0x3000000U 
                                               & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))) 
                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19))));
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___act_comb__TOP__3(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1 
        = (((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                 >> 1U) | (IData)((0U != (0x30000U 
                                          & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))) 
            & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16))) 
           & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1));
}

void Vtb_LOPD_unit___024root___nba_sequent__TOP__0(Vtb_LOPD_unit___024root* vlSelf);

void Vtb_LOPD_unit___024root___eval_nba(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_nba\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x700ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x108ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x102ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x110ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x120ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x104ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x140ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x112ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x144ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x165ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_unit___024root___act_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_LOPD_unit___024root___nba_sequent__TOP__0(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_LOPD_unit__DOT__o_zero_flag = ((IData)(vlSelf->tb_LOPD_unit__DOT__i_rst_n) 
                                              && ((((~ 
                                                     (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                       >> 1U) 
                                                      | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                                          >> 1U) 
                                                         | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                                                    & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                                                   & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                                                  & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)));
    if (vlSelf->tb_LOPD_unit__DOT__i_rst_n) {
        vlSelf->tb_LOPD_unit__DOT__o_addr = vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr;
        vlSelf->tb_LOPD_unit__DOT__o_one_position = 
            ((0x10U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)) 
                       << 4U)) | ((8U & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                           ? (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))
                                           : (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1))) 
                                         << 3U)) | 
                                  ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                      ? ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                      : ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                          ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                          : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19))) 
                                    << 2U) | ((2U & 
                                               (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                  ? 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                    ? 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                    >> 1U))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                    ? 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                    >> 1U)))
                                                  : 
                                                 ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                   ? 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                    ? 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                    >> 1U))
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                    ? 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                    >> 1U)))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                     ? 
                                                    ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                       ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                       : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                       ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                       : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))
                                                     : 
                                                    ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                       ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                       : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                       ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                       : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))));
        vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr 
            = vlSelf->tb_LOPD_unit__DOT__i_addr;
        vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
            = vlSelf->tb_LOPD_unit__DOT__i_data;
    } else {
        vlSelf->tb_LOPD_unit__DOT__o_addr = 0U;
        vlSelf->tb_LOPD_unit__DOT__o_one_position = 0U;
        vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr = 0U;
        vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data = 0U;
    }
}

void Vtb_LOPD_unit___024root___timing_resume(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___timing_resume\n"); );
    // Body
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h196fd084__0.resume("@(posedge tb_LOPD_unit.i_clk)");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_LOPD_unit___024root___timing_commit(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___timing_commit\n"); );
    // Body
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h196fd084__0.commit("@(posedge tb_LOPD_unit.i_clk)");
    }
}

void Vtb_LOPD_unit___024root___eval_triggers__act(Vtb_LOPD_unit___024root* vlSelf);

bool Vtb_LOPD_unit___024root___eval_phase__act(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_LOPD_unit___024root___eval_triggers__act(vlSelf);
    Vtb_LOPD_unit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_LOPD_unit___024root___timing_resume(vlSelf);
        Vtb_LOPD_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_LOPD_unit___024root___eval_phase__nba(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_LOPD_unit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__nba(Vtb_LOPD_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_unit___024root___dump_triggers__act(Vtb_LOPD_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_unit___024root___eval(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_LOPD_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("LOPD_unit/tb_LOPD_unit.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_LOPD_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("LOPD_unit/tb_LOPD_unit.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_LOPD_unit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_LOPD_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_LOPD_unit___024root___eval_debug_assertions(Vtb_LOPD_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
