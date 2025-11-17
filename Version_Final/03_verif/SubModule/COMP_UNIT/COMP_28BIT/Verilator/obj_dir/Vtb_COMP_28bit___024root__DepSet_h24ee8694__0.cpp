// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit___024root.h"

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_initial__TOP(Vtb_COMP_28bit___024root* vlSelf);
VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0(Vtb_COMP_28bit___024root* vlSelf);
VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__1(Vtb_COMP_28bit___024root* vlSelf);

void Vtb_COMP_28bit___024root___eval_initial(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial\n"); );
    // Body
    Vtb_COMP_28bit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__0 
        = vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow;
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__DUT__DOT__w_borrow__1 
        = vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow;
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0 
        = vlSelf->tb_COMP_28bit__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_COMP_28bit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                           18);
        vlSelf->tb_COMP_28bit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_COMP_28bit__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__1(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_COMP_28bit__DOT____Vrepeat0;
    tb_COMP_28bit__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout;
    __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a;
    __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a = 0;
    IData/*27:0*/ __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b;
    __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b = 0;
    std::string __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_type;
    IData/*27:0*/ __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a;
    __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a = 0;
    IData/*27:0*/ __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b;
    __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b = 0;
    CData/*0:0*/ __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less;
    __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less = 0;
    // Body
    VL_WRITEF("\n=== START 28-bit COMPARATOR TEST ===\n\n");
    vlSelf->tb_COMP_28bit__DOT__i_data_a = 0U;
    vlSelf->tb_COMP_28bit__DOT__i_data_b = 0U;
    tb_COMP_28bit__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_COMP_28bit__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_haa211b96__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_COMP_28bit.i_clk)", 
                                                           "../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                                           66);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_COMP_28bit__DOT__i_data_a = (0xfffffffU 
                                                & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        vlSelf->tb_COMP_28bit__DOT__i_data_b = (0xfffffffU 
                                                & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                           69);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b 
            = vlSelf->tb_COMP_28bit__DOT__i_data_b;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a 
            = vlSelf->tb_COMP_28bit__DOT__i_data_a;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout 
            = (__Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a 
               < __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b);
        vlSelf->tb_COMP_28bit__DOT__w_expect = __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less 
            = (1U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                     >> 0x1bU));
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b 
            = vlSelf->tb_COMP_28bit__DOT__i_data_b;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a 
            = vlSelf->tb_COMP_28bit__DOT__i_data_a;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_type = 
            std::string{"Random"};
        VL_WRITEF("[%@] a=%0# (%b), b=%0# (%b) => o_less=%b\n=> %s: expect=%b, dut=%b\n",
                  -1,&(__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_type),
                  28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a,
                  28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a,
                  28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b,
                  28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b,
                  1,(IData)(__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less),
                  32,(((IData)(vlSelf->tb_COMP_28bit__DOT__w_expect) 
                       == (1U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                 >> 0x1bU))) ? 0x50415353U
                       : 0x4641494cU),1,(IData)(vlSelf->tb_COMP_28bit__DOT__w_expect),
                  1,(1U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                           >> 0x1bU)));
        vlSelf->tb_COMP_28bit__DOT__test_count = ((IData)(1U) 
                                                  + vlSelf->tb_COMP_28bit__DOT__test_count);
        if (((IData)(vlSelf->tb_COMP_28bit__DOT__w_expect) 
             == (1U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                       >> 0x1bU)))) {
            vlSelf->tb_COMP_28bit__DOT__test_pass = 
                ((IData)(1U) + vlSelf->tb_COMP_28bit__DOT__test_pass);
        }
        tb_COMP_28bit__DOT____Vrepeat0 = (tb_COMP_28bit__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_WRITEF("\n==================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n==================================\n\n",
              32,vlSelf->tb_COMP_28bit__DOT__test_count,
              32,vlSelf->tb_COMP_28bit__DOT__test_pass,
              32,(vlSelf->tb_COMP_28bit__DOT__test_count 
                  - vlSelf->tb_COMP_28bit__DOT__test_pass),
              64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_COMP_28bit__DOT__test_pass)) 
                  / VL_ISTOR_D_I(32, vlSelf->tb_COMP_28bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 89, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_COMP_28bit___024root___act_comb__TOP__0(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g = ((~ vlSelf->tb_COMP_28bit__DOT__i_data_a) 
                                                 & vlSelf->tb_COMP_28bit__DOT__i_data_b);
    vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p = (0xfffffffU 
                                                 & (~ 
                                                    ((~ vlSelf->tb_COMP_28bit__DOT__i_data_b) 
                                                     & vlSelf->tb_COMP_28bit__DOT__i_data_a)));
}

VL_INLINE_OPT void Vtb_COMP_28bit___024root___act_comb__TOP__1(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___act_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x8000000U & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                   & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                      << 1U)))) | (
                                                   (0x4000000U 
                                                    & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                       | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                          & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                             << 1U)))) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                          | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                             & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                << 1U)))) 
                                                      | ((0x1000000U 
                                                          & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                             | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                   << 1U)))) 
                                                         | ((0x800000U 
                                                             & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                   & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                      << 1U)))) 
                                                            | ((0x400000U 
                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                   | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                      & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                         << 1U)))) 
                                                               | ((0x200000U 
                                                                   & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                      | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                         & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                            << 1U)))) 
                                                                  | ((0x100000U 
                                                                      & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                         | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                            & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                               << 1U)))) 
                                                                     | ((0x80000U 
                                                                         & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                            | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                               & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                        | ((0x40000U 
                                                                            & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                               | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                           | ((0x20000U 
                                                                               & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                              | ((0x10000U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((8U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((4U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | ((2U 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g 
                                                                                | (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_p 
                                                                                & (vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_g))))))))))))))))))))))))))));
    vlSelf->tb_COMP_28bit__DOT__DUT__DOT__w_borrow 
        = __Vtemp_1;
}

void Vtb_COMP_28bit___024root___eval_act(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vtb_COMP_28bit___024root___eval_nba(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_nba\n"); );
}

void Vtb_COMP_28bit___024root___timing_resume(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_haa211b96__0.resume("@(posedge tb_COMP_28bit.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_COMP_28bit___024root___timing_commit(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_haa211b96__0.commit("@(posedge tb_COMP_28bit.i_clk)");
    }
}

void Vtb_COMP_28bit___024root___eval_triggers__act(Vtb_COMP_28bit___024root* vlSelf);

bool Vtb_COMP_28bit___024root___eval_phase__act(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_COMP_28bit___024root___eval_triggers__act(vlSelf);
    Vtb_COMP_28bit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_COMP_28bit___024root___timing_resume(vlSelf);
        Vtb_COMP_28bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_COMP_28bit___024root___eval_phase__nba(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_COMP_28bit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__nba(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__act(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_COMP_28bit___024root___eval(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_COMP_28bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_COMP_28bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_COMP_28bit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_COMP_28bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_COMP_28bit___024root___eval_debug_assertions(Vtb_COMP_28bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
