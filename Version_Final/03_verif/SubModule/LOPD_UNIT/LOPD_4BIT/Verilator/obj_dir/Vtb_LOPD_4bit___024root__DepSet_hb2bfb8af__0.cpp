// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_4bit.h for the primary calling header

#include "Vtb_LOPD_4bit__pch.h"
#include "Vtb_LOPD_4bit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_4bit___024root___eval_initial__TOP(Vtb_LOPD_4bit___024root* vlSelf);
VlCoroutine Vtb_LOPD_4bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_4bit___024root* vlSelf);

void Vtb_LOPD_4bit___024root___eval_initial(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_initial\n"); );
    // Body
    Vtb_LOPD_4bit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_LOPD_4bit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_LOPD_4bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 0;
    std::string __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name;
    CData/*3:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero = 0;
    std::string __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result;
    CData/*3:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 0;
    std::string __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name;
    CData/*3:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero = 0;
    CData/*1:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero = 0;
    std::string __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result;
    // Body
    VL_WRITEF_NX("\n=== START 4-bit LEADING ONE POSITION DETECTOR TEST ===\n\n",0);
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel1;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 1U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel2;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 2U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel3;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 3U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel4;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 4U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel5;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 5U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel6;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 6U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel7;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 7U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel8;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 8U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel9;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 9U;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel10;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xaU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel11;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xbU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel12;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel12: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xcU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel13;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel13: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xdU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel14;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel14: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xeU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel15;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel15: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->tb_LOPD_4bit__DOT__i_data = 0xfU;
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel16;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel16: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name = 
        std::string{"Fixed"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result));
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    vlSelf->tb_LOPD_4bit__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel17;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel18;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel18: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel19;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel19: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel20;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel20: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel21;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel21: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel22;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel22: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel23;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel23: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel24;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel24: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel25;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel25: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__i_data = (0xfU & VL_URANDOM_RANGE_I(0U, 0xfU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
    } else {
        __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos = 3U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (3U & __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (3U & ((IData)(3U) - __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel26;
                }
                __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel26: ;
        }
    }
    vlSelf->tb_LOPD_4bit__DOT__w_expect_pos = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_4bit__DOT__w_expect_zero = __Vtask_tb_LOPD_4bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_4bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_4bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_4bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_4bit__DOT__i_data;
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_name),
                 4,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__t_data),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__exp_zero),
                 2,__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result));
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_4bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_4bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_4bit__DOT__test_pass);
    }
    vlSelf->tb_LOPD_4bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_4bit__DOT__test_count);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n================================\n\n",0,
                 32,vlSelf->tb_LOPD_4bit__DOT__test_count,
                 32,vlSelf->tb_LOPD_4bit__DOT__test_pass,
                 32,(vlSelf->tb_LOPD_4bit__DOT__test_count 
                     - vlSelf->tb_LOPD_4bit__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_LOPD_4bit__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_LOPD_4bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 105, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_LOPD_4bit___024root___act_sequent__TOP__0(Vtb_LOPD_4bit___024root* vlSelf);

void Vtb_LOPD_4bit___024root___eval_act(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_4bit___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_LOPD_4bit___024root___act_sequent__TOP__0(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_LOPD_4bit__DOT__o_pos_one = (((IData)(
                                                     ((0U 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data))) 
                                                      & ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                         | ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                            >> 1U)))) 
                                             << 1U) 
                                            | (1U & 
                                               ((~ 
                                                 ((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                  >> 3U)) 
                                                & (((IData)(vlSelf->tb_LOPD_4bit__DOT__i_data) 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data))))))));
    vlSelf->tb_LOPD_4bit__DOT__o_zero_flag = (1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->tb_LOPD_4bit__DOT__i_data)))));
}

void Vtb_LOPD_4bit___024root___eval_nba(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_4bit___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_LOPD_4bit___024root___timing_resume(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_LOPD_4bit___024root___eval_triggers__act(Vtb_LOPD_4bit___024root* vlSelf);

bool Vtb_LOPD_4bit___024root___eval_phase__act(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_LOPD_4bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_LOPD_4bit___024root___timing_resume(vlSelf);
        Vtb_LOPD_4bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_LOPD_4bit___024root___eval_phase__nba(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_LOPD_4bit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_4bit___024root___dump_triggers__nba(Vtb_LOPD_4bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_4bit___024root___dump_triggers__act(Vtb_LOPD_4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_4bit___024root___eval(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_LOPD_4bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_LOPD_4bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_4BIT/tb_LOPD_4bit.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_LOPD_4bit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_LOPD_4bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_LOPD_4bit___024root___eval_debug_assertions(Vtb_LOPD_4bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_4bit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
