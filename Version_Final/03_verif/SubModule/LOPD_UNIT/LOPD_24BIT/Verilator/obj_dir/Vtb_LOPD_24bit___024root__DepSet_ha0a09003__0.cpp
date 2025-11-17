// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_24bit.h for the primary calling header

#include "Vtb_LOPD_24bit__pch.h"
#include "Vtb_LOPD_24bit__Syms.h"
#include "Vtb_LOPD_24bit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_LOPD_24bit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                           35);
        vlSelf->tb_LOPD_24bit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk)));
        ++(vlSymsp->__Vcoverage[39]);
    }
    ++(vlSymsp->__Vcoverage[40]);
}

VL_INLINE_OPT VlCoroutine Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__1(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_LOPD_24bit__DOT____Vrepeat1;
    tb_LOPD_24bit__DOT____Vrepeat1 = 0;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_name;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__result;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag = 0;
    IData/*31:0*/ __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_name;
    IData/*23:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_data = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_zero = 0;
    CData/*4:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos = 0;
    CData/*0:0*/ __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero = 0;
    std::string __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__result;
    // Body
    VL_WRITEF_NX("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n\n",0);
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = 0U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag = 0U;
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    ++(vlSymsp->__Vcoverage[47]);
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_name = 
        std::string{"Zero"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__1__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = 1U;
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel2;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel3;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel4;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel5;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel6;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel7;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel8;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel9;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel10;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel11;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel12;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel12: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel13;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel13: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel14;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel14: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel15;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel15: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel16;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel16: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel17;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel18;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel18: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel19;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel19: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel20;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel20: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel21;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel21: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel22;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel22: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel23;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel23: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    ++(vlSymsp->__Vcoverage[47]);
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel24;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel24: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
        ++(vlSymsp->__Vcoverage[45]);
    } else {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos = 0x17U;
        {
            while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) {
                if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos)) 
                     && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
                               >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos))))) {
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one 
                        = (0x1fU & ((IData)(0x17U) 
                                    - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos));
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 0U;
                    goto __Vlabel25;
                } else {
                    ++(vlSymsp->__Vcoverage[43]);
                }
                ++(vlSymsp->__Vcoverage[44]);
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel25: ;
        }
        ++(vlSymsp->__Vcoverage[46]);
    }
    ++(vlSymsp->__Vcoverage[47]);
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero 
        = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
        = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
        = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
        std::string{"Direcly"};
    __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result 
        = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos) 
                                == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos)) 
                               & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero) 
                                  == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero)))
                               ? 0x50415353U : 0x4641494cU));
    VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name),
                 24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero,
                 5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos),
                 1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero,
                 -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result));
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
        ++(vlSymsp->__Vcoverage[48]);
    } else {
        ++(vlSymsp->__Vcoverage[49]);
    }
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    ++(vlSymsp->__Vcoverage[50]);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    ++(vlSymsp->__Vcoverage[51]);
    tb_LOPD_24bit__DOT____Vrepeat1 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_LOPD_24bit__DOT____Vrepeat1)) {
        vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                              & VL_URANDOM_RANGE_I(0U, 0xffffffU));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                           111);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data)) {
            __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one = 0U;
            __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag = 1U;
            ++(vlSymsp->__Vcoverage[45]);
        } else {
            __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos = 0x17U;
            {
                while (VL_LTES_III(32, 0U, __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos)) {
                    if (((0x17U >= (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos)) 
                         && (1U & (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data 
                                   >> (0x1fU & __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos))))) {
                        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one 
                            = (0x1fU & ((IData)(0x17U) 
                                        - __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos));
                        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag = 0U;
                        goto __Vlabel26;
                    } else {
                        ++(vlSymsp->__Vcoverage[43]);
                    }
                    ++(vlSymsp->__Vcoverage[44]);
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos 
                        = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos 
                           - (IData)(1U));
                }
                __Vlabel26: ;
            }
            ++(vlSymsp->__Vcoverage[46]);
        }
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one;
        vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero 
            = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos 
            = vlSelf->tb_LOPD_24bit__DOT__o_pos_one;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_name = 
            std::string{"Random"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__result 
            = VL_CVT_PACK_STR_NI(((((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_pos) 
                                    == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos)) 
                                   & ((IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_zero) 
                                      == (IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero)))
                                   ? 0x50415353U : 0x4641494cU));
        VL_WRITEF_NX("[%@] data=%b => expect(pos=%0#, zero=%b), dut(pos=%0#, zero=%b) => %@\n",0,
                     -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_name),
                     24,__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__t_data,
                     5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_pos),
                     1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__exp_zero,
                     5,(IData)(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos),
                     1,__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero,
                     -1,&(__Vtask_tb_LOPD_24bit__DOT__Check_Result__5__result));
        vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                                  + vlSelf->tb_LOPD_24bit__DOT__test_count);
        if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__result)) {
            vlSelf->tb_LOPD_24bit__DOT__test_pass = 
                ((IData)(1U) + vlSelf->tb_LOPD_24bit__DOT__test_pass);
            ++(vlSymsp->__Vcoverage[48]);
        } else {
            ++(vlSymsp->__Vcoverage[49]);
        }
        ++(vlSymsp->__Vcoverage[50]);
        ++(vlSymsp->__Vcoverage[52]);
        tb_LOPD_24bit__DOT____Vrepeat1 = (tb_LOPD_24bit__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n==================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n==================================\n\n",0,
                 32,vlSelf->tb_LOPD_24bit__DOT__test_count,
                 32,vlSelf->tb_LOPD_24bit__DOT__test_pass,
                 32,(vlSelf->tb_LOPD_24bit__DOT__test_count 
                     - vlSelf->tb_LOPD_24bit__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_LOPD_24bit__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_LOPD_24bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 127, "");
    ++(vlSymsp->__Vcoverage[53]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__act(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_24bit___024root___eval_triggers__act(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0 
        = vlSelf->tb_LOPD_24bit__DOT__i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_LOPD_24bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_LOPD_24bit___024root___act_sequent__TOP__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_clk 
            = vlSelf->tb_LOPD_24bit__DOT__i_clk;
    }
}

VL_INLINE_OPT void Vtb_LOPD_24bit___024root___act_comb__TOP__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___act_comb__TOP__0\n"); );
    // Init
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
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_6;
    __VdfgRegularize_hd87f99a1_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_7;
    __VdfgRegularize_hd87f99a1_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_9;
    __VdfgRegularize_hd87f99a1_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_10;
    __VdfgRegularize_hd87f99a1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
    __VdfgRegularize_hd87f99a1_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_12;
    __VdfgRegularize_hd87f99a1_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_19;
    __VdfgRegularize_hd87f99a1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_20;
    __VdfgRegularize_hd87f99a1_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_21;
    __VdfgRegularize_hd87f99a1_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_22;
    __VdfgRegularize_hd87f99a1_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_23;
    __VdfgRegularize_hd87f99a1_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_24;
    __VdfgRegularize_hd87f99a1_0_24 = 0;
    // Body
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_zero) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_zero))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos 
            = ((0x1eU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos 
            = ((0x1dU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos 
            = ((0x1bU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos 
            = ((0x17U & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)) 
               | (8U & (IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos) 
                  ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos 
            = ((0xfU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__w_expect_pos)) 
               | (0x10U & (IData)(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos)));
    }
    if ((1U & (vlSelf->tb_LOPD_24bit__DOT__i_data ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_LOPD_24bit__DOT__i_data ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_LOPD_24bit__DOT__i_data ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_LOPD_24bit__DOT__i_data ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                  ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                  ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                  ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                  ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                   ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                   ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                   ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                   ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                    ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                    ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                    ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                    ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                     ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                     ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                     ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                     ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                      ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                      ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                      ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                      ^ vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_LOPD_24bit__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_LOPD_24bit__DOT__i_data));
    }
    __VdfgRegularize_hd87f99a1_0_14 = (IData)(((0U 
                                                == 
                                                (0xcU 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                               & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                  | (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                     >> 1U))));
    __VdfgRegularize_hd87f99a1_0_15 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 3U)) 
                                             & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 2U) 
                                                | (IData)(
                                                          (1U 
                                                           == 
                                                           (3U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_16 = (IData)(((0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                               & (0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_17 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 7U)) 
                                             & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 6U) 
                                                | (IData)(
                                                          (0x10U 
                                                           == 
                                                           (0x30U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_zero_flag_0 
        = (1U & (~ (IData)((0U != (0xfU & vlSelf->tb_LOPD_24bit__DOT__i_data)))));
    __VdfgRegularize_hd87f99a1_0_4 = (IData)(((0U == 
                                               (0xc00U 
                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                              & (0U 
                                                 != 
                                                 (0x300U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_5 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 0xbU)) 
                                            & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 0xaU) 
                                               | (IData)(
                                                         (0x100U 
                                                          == 
                                                          (0x300U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_6 = (IData)(((0U == 
                                               (0xc000U 
                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                              & (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_7 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 0xfU)) 
                                            & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 0xeU) 
                                               | (IData)(
                                                         (0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_9 = (IData)(((0U == 
                                               (0xc0000U 
                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                              & (0U 
                                                 != 
                                                 (0x30000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_10 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 0x13U)) 
                                             & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 0x12U) 
                                                | (IData)(
                                                          (0x10000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    __VdfgRegularize_hd87f99a1_0_11 = (IData)(((0U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                               & (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    __VdfgRegularize_hd87f99a1_0_12 = (1U & ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 0x17U)) 
                                             & ((vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                 >> 0x16U) 
                                                | (IData)(
                                                          (0x100000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_18 = (IData)(
                                                      (0U 
                                                       != 
                                                       (0xf0U 
                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0 
        = (1U & (~ (IData)((0U != (0xf00U & vlSelf->tb_LOPD_24bit__DOT__i_data)))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0 
        = (1U & (~ (IData)((0U != (0xf0000U & vlSelf->tb_LOPD_24bit__DOT__i_data)))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = (IData)(
                                                     (0U 
                                                      != 
                                                      (0xf000U 
                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_13 = (IData)(
                                                      (0U 
                                                       != 
                                                       (0xf00000U 
                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_0 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_14) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_15));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_1 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_16) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_17));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_4) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_5));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_6) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_7));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_9) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_10));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_11) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_12));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_18) {
        __VdfgRegularize_hd87f99a1_0_19 = __VdfgRegularize_hd87f99a1_0_17;
        __VdfgRegularize_hd87f99a1_0_20 = __VdfgRegularize_hd87f99a1_0_16;
    } else {
        __VdfgRegularize_hd87f99a1_0_19 = __VdfgRegularize_hd87f99a1_0_15;
        __VdfgRegularize_hd87f99a1_0_20 = __VdfgRegularize_hd87f99a1_0_14;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0;
    }
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0;
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_8) {
        __VdfgRegularize_hd87f99a1_0_23 = __VdfgRegularize_hd87f99a1_0_7;
        __VdfgRegularize_hd87f99a1_0_24 = __VdfgRegularize_hd87f99a1_0_6;
    } else {
        __VdfgRegularize_hd87f99a1_0_23 = __VdfgRegularize_hd87f99a1_0_5;
        __VdfgRegularize_hd87f99a1_0_24 = __VdfgRegularize_hd87f99a1_0_4;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)));
    if ((1U ^ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_zero_flag_1 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_13) {
        __VdfgRegularize_hd87f99a1_0_21 = __VdfgRegularize_hd87f99a1_0_12;
        __VdfgRegularize_hd87f99a1_0_22 = __VdfgRegularize_hd87f99a1_0_11;
    } else {
        __VdfgRegularize_hd87f99a1_0_21 = __VdfgRegularize_hd87f99a1_0_10;
        __VdfgRegularize_hd87f99a1_0_22 = __VdfgRegularize_hd87f99a1_0_9;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_zero_flag_0) 
           & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)));
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1 
            = ((1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)));
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one 
        = ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)) 
                  << 2U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_20) 
                              << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_19)));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_zero_flag 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one 
        = ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)) 
                  << 2U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_24) 
                              << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_23)));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_0 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0;
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one 
        = ((4U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
                  << 2U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_22) 
                              << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_21)));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_zero_flag_1 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1;
    }
    if (vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) {
        __VdfgRegularize_hd87f99a1_0_1 = (1U & ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                                & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8))));
        __VdfgRegularize_hd87f99a1_0_2 = ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                          & (IData)(__VdfgRegularize_hd87f99a1_0_24));
        __VdfgRegularize_hd87f99a1_0_3 = ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)) 
                                          & (IData)(__VdfgRegularize_hd87f99a1_0_23));
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1 = 0U;
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0;
    } else {
        __VdfgRegularize_hd87f99a1_0_1 = (1U & ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                                & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13))));
        __VdfgRegularize_hd87f99a1_0_2 = ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                          & (IData)(__VdfgRegularize_hd87f99a1_0_22));
        __VdfgRegularize_hd87f99a1_0_3 = ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                                          & (IData)(__VdfgRegularize_hd87f99a1_0_21));
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one;
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag = 0U;
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag)
            ? 0U : (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT__w_o_pos_one));
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_0)
            ? 0U : (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT__w_o_pos_one));
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one 
        = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1) 
            << 3U) | (((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                       << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                  << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3))));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_zero_flag 
            = vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag;
    }
    vlSelf->tb_LOPD_24bit__DOT__o_zero_flag = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                                               & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position 
        = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
            << 4U) | ((((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                        & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_zero_flag_1)) 
                       << 3U) | ((4U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                          ? ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18)))
                                          : ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                             & (IData)(__VdfgRegularize_hd87f99a1_0_1))) 
                                        << 2U)) | (
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                      ? 
                                                     ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                                                      & (IData)(__VdfgRegularize_hd87f99a1_0_20))
                                                      : 
                                                     ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                      & (IData)(__VdfgRegularize_hd87f99a1_0_2))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                       ? 
                                                      ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag)) 
                                                       & (IData)(__VdfgRegularize_hd87f99a1_0_19))
                                                       : 
                                                      ((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                       & (IData)(__VdfgRegularize_hd87f99a1_0_3)))))));
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD8_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_pos_one)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_0)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_0)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((6U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((5U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1 
            = ((3U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_pos_one_1)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_pos_one_1)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT____Vtogcov__w_o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one)));
    }
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
            ? 0U : (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__w_o_pos_one));
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__o_zero_flag) 
         ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_zero_flag))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_zero_flag 
            = vlSelf->tb_LOPD_24bit__DOT__o_zero_flag;
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position 
            = ((0x1eU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position 
            = ((0x1dU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position 
            = ((0x1bU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position 
            = ((0x17U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)) 
               | (8U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position) 
                  ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position 
            = ((0xfU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__w_o_one_position)) 
               | (0x10U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position)));
    }
    vlSelf->tb_LOPD_24bit__DOT__o_pos_one = ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_zero_flag)
                                              ? 0U : (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__w_o_one_position));
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xeU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xdU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((0xbU & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one 
            = ((7U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT____Vtogcov__LOPD16_o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_pos_one)));
    }
    if ((1U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one 
            = ((0x1eU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)) 
               | (1U & (IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one)));
    }
    if ((2U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one 
            = ((0x1dU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)) 
               | (2U & (IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one)));
    }
    if ((4U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one 
            = ((0x1bU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)) 
               | (4U & (IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one)));
    }
    if ((8U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one) 
               ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one 
            = ((0x17U & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)) 
               | (8U & (IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one) 
                  ^ (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one 
            = ((0xfU & (IData)(vlSelf->tb_LOPD_24bit__DOT____Vtogcov__o_pos_one)) 
               | (0x10U & (IData)(vlSelf->tb_LOPD_24bit__DOT__o_pos_one)));
    }
}
