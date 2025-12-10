// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_24bit.h for the primary calling header

#include "Vtb_LOPD_24bit__pch.h"
#include "Vtb_LOPD_24bit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_initial__TOP(Vtb_LOPD_24bit___024root* vlSelf);
VlCoroutine Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_24bit___024root* vlSelf);
VlCoroutine Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__1(Vtb_LOPD_24bit___024root* vlSelf);

void Vtb_LOPD_24bit___024root___eval_initial(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_initial\n"); );
    // Body
    Vtb_LOPD_24bit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0 
        = vlSelf->tb_LOPD_24bit__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_LOPD_24bit__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                           35);
        vlSelf->tb_LOPD_24bit__DOT__i_clk = (1U & (~ (IData)(vlSelf->tb_LOPD_24bit__DOT__i_clk)));
    }
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
    VL_WRITEF_NX("\n=== WELCOM MY TESTBENCH FOR DONG's ===\n\n\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n\n",0);
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = 0U;
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__pos 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__0__f_o_zero_flag;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_name = 
            std::string{"Zero"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__t_name = 
            std::string{"Zero"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__1__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    }
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = 1U;
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel12: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel13: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel14: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel15: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel16: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel18: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel19: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel20: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel21: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel22: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel23: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel24: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_zero 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_zero;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__exp_pos 
            = vlSelf->tb_LOPD_24bit__DOT__w_expect_pos;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__t_name = 
            std::string{"Direcly"};
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
    }
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
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    if ((std::string{"PASS"} == __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__result)) {
        vlSelf->tb_LOPD_24bit__DOT__test_pass = ((IData)(1U) 
                                                 + vlSelf->tb_LOPD_24bit__DOT__test_pass);
    }
    co_await vlSelf->__VtrigSched_hf70d7fc2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                          & vlSelf->tb_LOPD_24bit__DOT__bit_pos);
    co_await vlSelf->__VtrigSched_hf70d7f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_LOPD_24bit.i_clk)", 
                                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data 
        = vlSelf->tb_LOPD_24bit__DOT__i_data;
    if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_i_data)) {
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one = 0U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag = 1U;
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
                }
                __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                    = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__pos 
                       - (IData)(1U));
            }
            __Vlabel25: ;
        }
    }
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_pos_one;
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__2__f_o_zero_flag;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       106);
    if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
         & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos = 0x1fU;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 1U;
    } else {
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_pos 
            = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                  & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                 << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                               ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                               : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                  : 
                                                 ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                   : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_LOPD_24bit__DOT__Check_Result__3__dut_zero = 0U;
    }
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
    }
    vlSelf->tb_LOPD_24bit__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_LOPD_24bit__DOT__test_count);
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = (vlSelf->tb_LOPD_24bit__DOT__bit_pos 
                                           << 1U);
    tb_LOPD_24bit__DOT____Vrepeat1 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_LOPD_24bit__DOT____Vrepeat1)) {
        vlSelf->tb_LOPD_24bit__DOT__i_data = (0xffffffU 
                                              & VL_URANDOM_RANGE_I(0U, 0xffffffU));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                           114);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data 
            = vlSelf->tb_LOPD_24bit__DOT__i_data;
        if ((0U == __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_i_data)) {
            __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one = 0U;
            __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag = 1U;
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
                    }
                    __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos 
                        = (__Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__pos 
                           - (IData)(1U));
                }
                __Vlabel26: ;
            }
        }
        vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_pos_one;
        vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = __Vtask_tb_LOPD_24bit__DOT__f_find_LOPD__4__f_o_zero_flag;
        if (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag) 
             & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))) {
            __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero = 1U;
            __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos = 0x1fU;
        } else {
            __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_zero = 0U;
            __Vtask_tb_LOPD_24bit__DOT__Check_Result__5__dut_pos 
                = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                    << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                      & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3))) 
                                     << 3U)) | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_2)
                                                   : 
                                                  ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_6)
                                                    : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_9))) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                      ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_1)
                                                      : 
                                                     ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_5)
                                                       : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_8))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                       ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_0)
                                                       : 
                                                      ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_3)
                                                        ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_4)
                                                        : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_1_7)))))));
        }
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
        }
        tb_LOPD_24bit__DOT____Vrepeat1 = (tb_LOPD_24bit__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n==================================\n========== TEST SUMMARY ==========\nTotal test cases: %6d\nPassed          : %6d\nFailed          : %6d\nPass rate       : %0.2f%%\n==================================\n\n",0,
                 32,vlSelf->tb_LOPD_24bit__DOT__test_count,
                 32,vlSelf->tb_LOPD_24bit__DOT__test_pass,
                 32,(vlSelf->tb_LOPD_24bit__DOT__test_count 
                     - vlSelf->tb_LOPD_24bit__DOT__test_pass),
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelf->tb_LOPD_24bit__DOT__test_pass)) 
                     / VL_ISTOR_D_I(32, vlSelf->tb_LOPD_24bit__DOT__test_count)));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 
                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../SubModule/LOPD_UNIT/LOPD_24BIT/tb_LOPD_24bit.sv", 130, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_LOPD_24bit___024root___ico_sequent__TOP__0(Vtb_LOPD_24bit___024root* vlSelf);

void Vtb_LOPD_24bit___024root___eval_ico(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_LOPD_24bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_LOPD_24bit___024root___ico_sequent__TOP__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_pos_one = (((IData)(((0U == (0xcU & (IData)(vlSelf->i_data))) 
                                   & ((IData)(vlSelf->i_data) 
                                      | ((IData)(vlSelf->i_data) 
                                         >> 1U)))) 
                          << 1U) | (1U & ((~ ((IData)(vlSelf->i_data) 
                                              >> 3U)) 
                                          & (((IData)(vlSelf->i_data) 
                                              >> 2U) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->i_data))))))));
    vlSelf->o_zero_flag = (1U & (~ (IData)((0U != (IData)(vlSelf->i_data)))));
}

void Vtb_LOPD_24bit___024root___eval_triggers__ico(Vtb_LOPD_24bit___024root* vlSelf);

bool Vtb_LOPD_24bit___024root___eval_phase__ico(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_LOPD_24bit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_LOPD_24bit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_LOPD_24bit___024root___act_comb__TOP__0(Vtb_LOPD_24bit___024root* vlSelf);

void Vtb_LOPD_24bit___024root___eval_act(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_LOPD_24bit___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_LOPD_24bit___024root___act_comb__TOP__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag 
        = (1U & ((~ (IData)((0U != (0xff00U & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                 & (~ (IData)((0U != (0xff0000U & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag 
        = (1U & (~ (IData)((0U != (0xffU & vlSelf->tb_LOPD_24bit__DOT__i_data)))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_3 = (IData)(
                                                     (0U 
                                                      != 
                                                      (0xff0000U 
                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xa000U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xa00000U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4 
        = (IData)((0U == (0xa0U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xc000U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xc00000U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12 
        = (IData)((0U == (0xc0U & vlSelf->tb_LOPD_24bit__DOT__i_data)));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data >> 0xbU)) 
           & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data >> 0x13U)) 
           & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15 
        = ((~ (vlSelf->tb_LOPD_24bit__DOT__i_data >> 3U)) 
           & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4));
    vlSelf->__VdfgRegularize_hd87f99a1_1_9 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                               & (IData)(
                                                         (0U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xf00U 
                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xc00U & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_6 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                               & (IData)(
                                                         (0U 
                                                          == 
                                                          (0x300000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xf0000U 
                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xc0000U & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_2 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                               & (IData)(
                                                         (0U 
                                                          == 
                                                          (0x30U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xfU 
                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14 
        = ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
           & (IData)((0U == (0xcU & vlSelf->tb_LOPD_24bit__DOT__i_data))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_7 = (1U & 
                                              (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                & (IData)(
                                                          (0x100U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                               | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                      >> 0xaU)) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 0xcU)) 
                                                     | (IData)(
                                                               (0x4000U 
                                                                == 
                                                                (0xc000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_4 = (1U & 
                                              (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                & (IData)(
                                                          (0x10000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                               | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                      >> 0x12U)) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 0x14U)) 
                                                     | (IData)(
                                                               (0x400000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_0 = (1U & 
                                              (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                & (IData)(
                                                          (1U 
                                                           == 
                                                           (3U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                               | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
                                                   & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4) 
                                                      & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                         >> 4U)) 
                                                     | (IData)(
                                                               (0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_8 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                  >> 8U)) 
                                              | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                     >> 9U)) 
                                                 | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_5 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                  >> 0x10U)) 
                                              | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                     >> 0x11U)) 
                                                 | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x300000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
    vlSelf->__VdfgRegularize_hd87f99a1_1_1 = (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                              | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                     >> 1U)) 
                                                 | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data))))));
}

void Vtb_LOPD_24bit___024root___eval_nba(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_nba\n"); );
    // Body
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_LOPD_24bit___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_LOPD_24bit___024root___timing_resume(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf70d7fc2__0.resume("@(posedge tb_LOPD_24bit.i_clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf70d7f83__0.resume("@(negedge tb_LOPD_24bit.i_clk)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_LOPD_24bit___024root___timing_commit(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf70d7fc2__0.commit("@(posedge tb_LOPD_24bit.i_clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf70d7f83__0.commit("@(negedge tb_LOPD_24bit.i_clk)");
    }
}

void Vtb_LOPD_24bit___024root___eval_triggers__act(Vtb_LOPD_24bit___024root* vlSelf);

bool Vtb_LOPD_24bit___024root___eval_phase__act(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_LOPD_24bit___024root___eval_triggers__act(vlSelf);
    Vtb_LOPD_24bit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_LOPD_24bit___024root___timing_resume(vlSelf);
        Vtb_LOPD_24bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_LOPD_24bit___024root___eval_phase__nba(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_LOPD_24bit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__ico(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__nba(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__act(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_LOPD_24bit___024root___eval(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_LOPD_24bit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../02_rtl/LOPD_4bit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_LOPD_24bit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_LOPD_24bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../02_rtl/LOPD_4bit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_LOPD_24bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../02_rtl/LOPD_4bit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_LOPD_24bit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_LOPD_24bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_LOPD_24bit___024root___eval_debug_assertions(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_data & 0xf0U))) {
        Verilated::overWidthError("i_data");}
}
#endif  // VL_DEBUG
