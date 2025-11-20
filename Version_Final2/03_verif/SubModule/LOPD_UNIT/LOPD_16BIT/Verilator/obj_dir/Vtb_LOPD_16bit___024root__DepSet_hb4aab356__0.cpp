// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_16bit.h for the primary calling header

#include "Vtb_LOPD_16bit__pch.h"
#include "Vtb_LOPD_16bit__Syms.h"
#include "Vtb_LOPD_16bit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_LOPD_16bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    SData/*15:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_i_data;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_i_data = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos = 0;
    std::string __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_name;
    SData/*15:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_data = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_zero = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_zero = 0;
    std::string __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__result;
    SData/*15:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0;
    std::string __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name;
    SData/*15:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero = 0;
    CData/*3:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero = 0;
    std::string __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result;
    // Body
    VL_WRITEF_NX("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n\n",0);
    vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x10000U, vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU 
                                             & vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                           81);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_i_data 
            = vlSelf->tb_LOPD_8bit__DOT__i_data;
        if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_i_data))) {
            __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
            __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
            ++(vlSymsp->__Vcoverage[32]);
        } else {
            __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos = 0xfU;
            {
                while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos)) {
                    if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_i_data) 
                               >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos)))) {
                        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_pos_one 
                            = (0xfU & ((IData)(0xfU) 
                                       - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos));
                        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[30]);
                    }
                    ++(vlSymsp->__Vcoverage[31]);
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos 
                        = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__pos 
                           - (IData)(1U));
                }
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[33]);
        }
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_pos_one;
        vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__0__f_o_zero_flag;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_zero 
            = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_pos 
            = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_zero 
            = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_pos 
            = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_data 
            = vlSelf->tb_LOPD_8bit__DOT__i_data;
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_name = 
            std::string{"Fixed"};
        __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__result 
            = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_pos) 
                                    == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_pos)) 
                                   & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_zero) 
                                      == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_zero)))
                                   ? 0x50415353U : 0x4641494cU));
        VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                     -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_name),
                     16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__t_data),
                     4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_pos,
                     1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__exp_zero),
                     4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_pos,
                     1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__dut_zero),
                     -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__1__result));
        vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_8bit__DOT__test_count);
        if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__1__result)) {
            vlSelf->tb_LOPD_8bit__DOT__test_pass = 
                ((IData)(1U) + vlSelf->tb_LOPD_8bit__DOT__test_pass);
            ++(vlSymsp->__Vcoverage[35]);
        } else {
            ++(vlSymsp->__Vcoverage[36]);
        }
        ++(vlSymsp->__Vcoverage[37]);
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_LOPD_8bit__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel2;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel3;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel4;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel5;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel6;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel7;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel8;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel9;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[34]);
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel10;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__i_data = (0xffffU & 
                                         VL_URANDOM_RANGE_I(0U, 0xffffU));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    if ((0U == (IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data))) {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[32]);
    } else {
        __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos = 0xfU;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)) {
                if ((1U & ((IData)(__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_i_data) 
                           >> (0xfU & __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos)))) {
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0xfU & ((IData)(0xfU) - __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel11;
                } else {
                    ++(vlSymsp->__Vcoverage[30]);
                }
                ++(vlSymsp->__Vcoverage[31]);
                __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
        ++(vlSymsp->__Vcoverage[33]);
    }
    ++(vlSymsp->__Vcoverage[34]);
    vlSelf->tb_LOPD_8bit__DOT__w_expect_pos = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_8bit__DOT__w_expect_zero = __Vtask_tb_LOPD_8bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_8bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_8bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_8bit__DOT__i_data;
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name = 
        std::string{"Random"};
    __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_name),
                 16,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__t_data),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__exp_zero),
                 4,__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_pos,
                 1,(IData)(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__dut_zero),
                 -1,&(__Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result));
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_8bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_8bit__DOT__test_pass = ((IData)(1U) 
                                                + vlSelf->tb_LOPD_8bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[35]);
    } else {
        ++(vlSymsp->__Vcoverage[36]);
    }
    vlSelf->tb_LOPD_8bit__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_LOPD_8bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[37]);
    ++(vlSymsp->__Vcoverage[39]);
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n================================\n\n",0,
                 32,vlSelf->tb_LOPD_8bit__DOT__test_count,
                 32,vlSelf->tb_LOPD_8bit__DOT__test_pass,
                 32,(vlSelf->tb_LOPD_8bit__DOT__test_count 
                     - vlSelf->tb_LOPD_8bit__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_LOPD_8bit__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_LOPD_8bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_16BIT/tb_LOPD_16bit.sv", 105, "");
    ++(vlSymsp->__Vcoverage[40]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_16bit___024root___dump_triggers__act(Vtb_LOPD_16bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_16bit___024root___eval_triggers__act(Vtb_LOPD_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_16bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_LOPD_16bit___024root___act_sequent__TOP__0(Vtb_LOPD_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_16bit___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_5;
    __VdfgRegularize_hd87f99a1_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_6;
    __VdfgRegularize_hd87f99a1_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_7;
    __VdfgRegularize_hd87f99a1_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
    __VdfgRegularize_hd87f99a1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_10;
    __VdfgRegularize_hd87f99a1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
    __VdfgRegularize_hd87f99a1_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_12;
    __VdfgRegularize_hd87f99a1_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_13;
    __VdfgRegularize_hd87f99a1_0_13 = 0;
    // Body
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_zero) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_zero))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_zero 
            = vlSelf->tb_LOPD_8bit__DOT__w_expect_zero;
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos 
            = ((0xeU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos 
            = ((0xdU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos 
            = ((0xbU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos 
            = ((7U & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__w_expect_pos)) 
               | (8U & (IData)(vlSelf->tb_LOPD_8bit__DOT__w_expect_pos)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfffeU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfffdU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfffbU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfff7U & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (8U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                  ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xffefU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x10U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                  ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xffdfU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x20U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                  ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xffbfU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x40U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                  ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xff7fU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x80U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                   ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfeffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x100U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                   ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfdffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x200U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                   ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xfbffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x400U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                   ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xf7ffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x800U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                    ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xefffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x1000U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                    ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xdfffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x2000U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                    ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0xbfffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x4000U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                    ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data 
            = ((0x7fffU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__i_data)) 
               | (0x8000U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)));
    }
    __VdfgRegularize_hd87f99a1_0_0 = (IData)(((0U == 
                                               (0xcU 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                              & ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                 | ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                    >> 1U))));
    __VdfgRegularize_hd87f99a1_0_1 = (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 3U)) 
                                            & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 2U) 
                                               | (IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))));
    __VdfgRegularize_hd87f99a1_0_2 = (IData)(((0U == 
                                               (0xc0U 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                              & (0U 
                                                 != 
                                                 (0x30U 
                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))));
    __VdfgRegularize_hd87f99a1_0_3 = (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 7U)) 
                                            & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 6U) 
                                               | (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x30U 
                                                           & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))));
    __VdfgRegularize_hd87f99a1_0_5 = (IData)(((0U == 
                                               (0xc00U 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                              & (0U 
                                                 != 
                                                 (0x300U 
                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))));
    __VdfgRegularize_hd87f99a1_0_6 = (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 0xbU)) 
                                            & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 0xaU) 
                                               | (IData)(
                                                         (0x100U 
                                                          == 
                                                          (0x300U 
                                                           & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))));
    __VdfgRegularize_hd87f99a1_0_7 = (IData)(((0U == 
                                               (0xc000U 
                                                & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))) 
                                              & (0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))));
    __VdfgRegularize_hd87f99a1_0_8 = (1U & ((~ ((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 0xfU)) 
                                            & (((IData)(vlSelf->tb_LOPD_8bit__DOT__i_data) 
                                                >> 0xeU) 
                                               | (IData)(
                                                         (0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data)))))));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (IData)((0U != (0xfU & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (IData)((0U != (0xf00U & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = (IData)(
                                                     (0U 
                                                      != 
                                                      (0xf0U 
                                                       & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = (IData)(
                                                     (0U 
                                                      != 
                                                      (0xf000U 
                                                       & (IData)(vlSelf->tb_LOPD_8bit__DOT__i_data))));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_0) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_1));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_5) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_6));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_7) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_8));
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_4) {
        __VdfgRegularize_hd87f99a1_0_12 = __VdfgRegularize_hd87f99a1_0_3;
        __VdfgRegularize_hd87f99a1_0_13 = __VdfgRegularize_hd87f99a1_0_2;
    } else {
        __VdfgRegularize_hd87f99a1_0_12 = __VdfgRegularize_hd87f99a1_0_1;
        __VdfgRegularize_hd87f99a1_0_13 = __VdfgRegularize_hd87f99a1_0_0;
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0 
        = ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_9) {
        __VdfgRegularize_hd87f99a1_0_10 = __VdfgRegularize_hd87f99a1_0_8;
        __VdfgRegularize_hd87f99a1_0_11 = __VdfgRegularize_hd87f99a1_0_7;
    } else {
        __VdfgRegularize_hd87f99a1_0_10 = __VdfgRegularize_hd87f99a1_0_6;
        __VdfgRegularize_hd87f99a1_0_11 = __VdfgRegularize_hd87f99a1_0_5;
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1 
        = ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one 
        = ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)) 
                  << 2U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_13) 
                              << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_12)));
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0;
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one 
        = ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)) 
                  << 2U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_11) 
                              << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_10)));
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_zero_flag_1 
            = vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1;
    }
    vlSelf->tb_LOPD_8bit__DOT__o_zero_flag = ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0) 
                                              & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1));
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one 
        = (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1) 
            << 3U) | ((4U & (((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)
                               ? ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4)))
                               : ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))) 
                             << 2U)) | ((((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)
                                           ? ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0)) 
                                              & (IData)(__VdfgRegularize_hd87f99a1_0_13))
                                           : ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)) 
                                              & (IData)(__VdfgRegularize_hd87f99a1_0_11))) 
                                         << 1U) | ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)
                                                    ? 
                                                   ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0)) 
                                                    & (IData)(__VdfgRegularize_hd87f99a1_0_12))
                                                    : 
                                                   ((~ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)) 
                                                    & (IData)(__VdfgRegularize_hd87f99a1_0_10))))));
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0 
        = ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_0)
            ? 0U : (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one));
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1 
        = ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_zero_flag_1)
            ? 0U : (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one));
    if (((IData)(vlSelf->tb_LOPD_8bit__DOT__o_zero_flag) 
         ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_zero_flag 
            = vlSelf->tb_LOPD_8bit__DOT__o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_8bit__DOT__o_pos_one = ((IData)(vlSelf->tb_LOPD_8bit__DOT__o_zero_flag)
                                             ? 0U : (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_o_pos_one));
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0 
            = ((6U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0 
            = ((5U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0 
            = ((3U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_0)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1 
            = ((6U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1 
            = ((5U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1 
            = ((3U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT____Vtogcov__w_pos_one_1)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__DUT__DOT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one 
            = ((7U & (IData)(vlSelf->tb_LOPD_8bit__DOT____Vtogcov__o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_LOPD_8bit__DOT__o_pos_one)));
    }
}
