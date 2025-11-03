// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit__Syms.h"
#include "Vtb_COMP_28bit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_COMP_28bit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                           18);
        vlSelf->tb_COMP_28bit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_COMP_28bit__DOT__i_clk)));
        ++(vlSymsp->__Vcoverage[62]);
    }
    ++(vlSymsp->__Vcoverage[63]);
}

VL_INLINE_OPT VlCoroutine Vtb_COMP_28bit___024root___eval_initial__TOP__Vtiming__1(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
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
    VL_WRITEF_NX("\n=== START 28-bit COMPARATOR TEST ===\n\n",0);
    vlSelf->tb_COMP_28bit__DOT__i_data_a = 0U;
    vlSelf->tb_COMP_28bit__DOT__i_data_b = 0U;
    tb_COMP_28bit__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_COMP_28bit__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h32b8485f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_COMP_28bit.i_clk)", 
                                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                                           66);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_COMP_28bit__DOT__i_data_a = (0xfffffffU 
                                                & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        vlSelf->tb_COMP_28bit__DOT__i_data_b = (0xfffffffU 
                                                & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                           69);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b 
            = vlSelf->tb_COMP_28bit__DOT__i_data_b;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a 
            = vlSelf->tb_COMP_28bit__DOT__i_data_a;
        __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout 
            = (__Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__a 
               < __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__b);
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_COMP_28bit__DOT__w_expect = __Vfunc_tb_COMP_28bit__DOT__f_expected_less__0__Vfuncout;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less 
            = vlSelf->tb_COMP_28bit__DOT__o_less;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b 
            = vlSelf->tb_COMP_28bit__DOT__i_data_b;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a 
            = vlSelf->tb_COMP_28bit__DOT__i_data_a;
        __Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_type = 
            std::string{"Random"};
        VL_WRITEF_NX("[%@] a=%0# (%b), b=%0# (%b) => o_less=%b\n",0,
                     -1,&(__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_type),
                     28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a,
                     28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_a,
                     28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b,
                     28,__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_b,
                     1,(IData)(__Vtask_tb_COMP_28bit__DOT__Display_Result__1__t_less));
        ++(vlSymsp->__Vcoverage[66]);
        VL_WRITEF_NX("=> %s: expect=%b, dut=%b\n",0,
                     32,(((IData)(vlSelf->tb_COMP_28bit__DOT__w_expect) 
                          == (IData)(vlSelf->tb_COMP_28bit__DOT__o_less))
                          ? 0x50415353U : 0x4641494cU),
                     1,(IData)(vlSelf->tb_COMP_28bit__DOT__w_expect),
                     1,vlSelf->tb_COMP_28bit__DOT__o_less);
        vlSelf->tb_COMP_28bit__DOT__test_count = ((IData)(1U) 
                                                  + vlSelf->tb_COMP_28bit__DOT__test_count);
        if (((IData)(vlSelf->tb_COMP_28bit__DOT__w_expect) 
             == (IData)(vlSelf->tb_COMP_28bit__DOT__o_less))) {
            vlSelf->tb_COMP_28bit__DOT__test_pass = 
                ((IData)(1U) + vlSelf->tb_COMP_28bit__DOT__test_pass);
            ++(vlSymsp->__Vcoverage[67]);
        } else {
            ++(vlSymsp->__Vcoverage[68]);
        }
        ++(vlSymsp->__Vcoverage[69]);
        tb_COMP_28bit__DOT____Vrepeat0 = (tb_COMP_28bit__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("\n================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n================================\n\n",0,
                 32,vlSelf->tb_COMP_28bit__DOT__test_count,
                 32,vlSelf->tb_COMP_28bit__DOT__test_pass,
                 32,(vlSelf->tb_COMP_28bit__DOT__test_count 
                     - vlSelf->tb_COMP_28bit__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_COMP_28bit__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_COMP_28bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 89, "");
    ++(vlSymsp->__Vcoverage[70]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__act(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_COMP_28bit___024root___eval_triggers__act(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_COMP_28bit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_COMP_28bit__DOT__i_clk__0 
        = vlSelf->tb_COMP_28bit__DOT__i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_COMP_28bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_COMP_28bit___024root___act_sequent__TOP__0(Vtb_COMP_28bit___024root* vlSelf);
void Vtb_COMP_28bit___024root___act_comb__TOP__0(Vtb_COMP_28bit___024root* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit___024root___act_comb__TOP__1(Vtb_COMP_28bit___024root* vlSelf);

void Vtb_COMP_28bit___024root___eval_act(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6));
        Vtb_COMP_28bit___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit___024root___act_sequent__TOP__0(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_COMP_28bit__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_clk 
            = vlSelf->tb_COMP_28bit__DOT__i_clk;
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit___024root___act_comb__TOP__0(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_COMP_28bit__DOT__w_expect) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT____Vtogcov__w_expect))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__w_expect 
            = vlSelf->tb_COMP_28bit__DOT__w_expect;
    }
    if ((1U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffffeU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (1U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((2U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffffdU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (2U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((4U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffffbU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (4U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((8U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffff7U & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (8U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x10U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffffefU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x10U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x20U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffffdfU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x20U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x40U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffffbfU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x40U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x80U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffff7fU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x80U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x100U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffeffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x100U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x200U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffdffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x200U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x400U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffffbffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x400U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x800U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffff7ffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x800U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x1000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffefffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x1000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x2000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffdfffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x2000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x4000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfffbfffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x4000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x8000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfff7fffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x8000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x10000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffeffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x10000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x20000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffdffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x20000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x40000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xffbffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x40000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x80000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xff7ffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x80000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x100000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfefffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x100000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x200000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfdfffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x200000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x400000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xfbfffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x400000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x800000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xf7fffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x800000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x1000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xeffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x1000000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x2000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xdffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x2000000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x4000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0xbffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x4000000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((0x8000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_a 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a 
            = ((0x7ffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_a) 
               | (0x8000000U & vlSelf->tb_COMP_28bit__DOT__i_data_a));
    }
    if ((1U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffffeU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (1U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((2U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffffdU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (2U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((4U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffffbU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (4U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((8U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
               ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffff7U & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (8U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x10U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffffefU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x10U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x20U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffffdfU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x20U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x40U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffffbfU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x40U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x80U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                  ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffff7fU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x80U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x100U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffeffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x100U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x200U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffdffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x200U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x400U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffffbffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x400U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x800U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                   ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffff7ffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x800U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x1000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffefffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x1000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x2000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffdfffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x2000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x4000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfffbfffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x4000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x8000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                    ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfff7fffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x8000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x10000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffeffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x10000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x20000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffdffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x20000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x40000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xffbffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x40000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x80000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                     ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xff7ffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x80000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x100000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfefffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x100000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x200000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfdfffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x200000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x400000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xfbfffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x400000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x800000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                      ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xf7fffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x800000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x1000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xeffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x1000000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x2000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xdffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x2000000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x4000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0xbffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x4000000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
    if ((0x8000000U & (vlSelf->tb_COMP_28bit__DOT__i_data_b 
                       ^ vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b 
            = ((0x7ffffffU & vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_data_b) 
               | (0x8000000U & vlSelf->tb_COMP_28bit__DOT__i_data_b));
    }
}

VL_INLINE_OPT void Vtb_COMP_28bit___024root___act_comb__TOP__1(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_0;
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_0 = 0;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_1;
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_1 = 0;
    CData/*0:0*/ tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_3;
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_3 = 0;
    // Body
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_0))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_0 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_0))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_0 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_1))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_1 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_1))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_1 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_2))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_2 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_2))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_2 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_3))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_3 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_3))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_3 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_4))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_4 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_4))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_4 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_5))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_5 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_5))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_5 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_equal;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_6))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_less_0_6 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_less;
    }
    if (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_6))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_COMP_28bit__DOT__DUT__DOT____Vtogcov__w_equal_0_6 
            = vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal;
    }
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_3 
        = ((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_equal) 
           & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal));
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_0 
        = ((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
           & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_equal));
    tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_1 
        = ((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
           & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_equal));
    vlSelf->tb_COMP_28bit__DOT__o_less = ((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_less) 
                                          | (((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.o_equal) 
                                              & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.o_less)) 
                                             | (((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_3) 
                                                 & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.o_less)) 
                                                | (((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_0) 
                                                    & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.o_less)) 
                                                   | (((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                                       & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_less)) 
                                                      | (((IData)(tb_COMP_28bit__DOT__DUT__DOT____VdfgRegularize_h70f6fa5f_2_1) 
                                                          & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.o_equal)) 
                                                         & ((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_less) 
                                                            | ((IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.o_equal) 
                                                               & (IData)(vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.o_less)))))))));
    if (((IData)(vlSelf->tb_COMP_28bit__DOT__o_less) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT____Vtogcov__o_less))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__o_less 
            = vlSelf->tb_COMP_28bit__DOT__o_less;
    }
}

void Vtb_COMP_28bit___024root___eval_nba(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5));
        Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0((&vlSymsp->TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6));
        Vtb_COMP_28bit___024root___act_comb__TOP__1(vlSelf);
    }
}
