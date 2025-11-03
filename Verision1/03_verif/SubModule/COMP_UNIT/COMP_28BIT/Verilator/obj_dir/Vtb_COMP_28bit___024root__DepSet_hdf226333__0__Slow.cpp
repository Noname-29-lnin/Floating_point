// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_COMP_28bit.h for the primary calling header

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit__Syms.h"
#include "Vtb_COMP_28bit___024root.h"

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_static__TOP(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_COMP_28bit__DOT__test_count = 0U;
    ++(vlSymsp->__Vcoverage[60]);
    vlSelf->tb_COMP_28bit__DOT__test_pass = 0U;
    ++(vlSymsp->__Vcoverage[61]);
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_initial__TOP(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x38626974U;
    __Vtemp_1[2U] = 0x4d505f32U;
    __Vtemp_1[3U] = 0x625f434fU;
    __Vtemp_1[4U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[64]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_COMP_28bit___024root___dump_triggers__stl(Vtb_COMP_28bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_triggers__stl(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_COMP_28bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_COMP_28bit___024root___stl_sequent__TOP__0(Vtb_COMP_28bit___024root* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit_COMP_4bit___act_comb__TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6__0(Vtb_COMP_28bit_COMP_4bit* vlSelf);
void Vtb_COMP_28bit___024root___act_comb__TOP__1(Vtb_COMP_28bit___024root* vlSelf);

VL_ATTR_COLD void Vtb_COMP_28bit___024root___eval_stl(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_COMP_28bit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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

VL_ATTR_COLD void Vtb_COMP_28bit___024root___stl_sequent__TOP__0(Vtb_COMP_28bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_COMP_28bit__DOT__i_clk) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_clk 
            = vlSelf->tb_COMP_28bit__DOT__i_clk;
    }
    if (((IData)(vlSelf->tb_COMP_28bit__DOT__i_rst_n) 
         ^ (IData)(vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_COMP_28bit__DOT____Vtogcov__i_rst_n 
            = vlSelf->tb_COMP_28bit__DOT__i_rst_n;
    }
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

VL_ATTR_COLD void Vtb_COMP_28bit___024root___configure_coverage(Vtb_COMP_28bit___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_COMP_28bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_COMP_28bit___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 6, 11, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 6, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 7, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 8, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "i_data_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 9, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 10, 18, ".tb_COMP_28bit", "v_toggle/tb_COMP_28bit", "w_expect", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 12, 22, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 13, 22, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 18, 9, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 16, 5, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 29, 5, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "29-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 35, 30, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "35,39-40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 45, 20, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "45,51-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 76, 13, ".tb_COMP_28bit", "v_branch/tb_COMP_28bit", "if", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 76, 14, ".tb_COMP_28bit", "v_branch/tb_COMP_28bit", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 65, 9, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "65-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/SubModule/COMP_UNIT/COMP_28BIT/tb_COMP_28bit.sv", 59, 5, ".tb_COMP_28bit", "v_line/tb_COMP_28bit", "block", "59-62,65,80-86,88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 4, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 5, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "i_data_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 6, 34, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "o_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 11, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 23, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 35, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 47, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 59, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_4", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 71, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_5", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 10, 83, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_less_0_6", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 11, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 24, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 37, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 50, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 63, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_4", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 76, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_5", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/noname/Documents/project_tiny/Floating_point/Verision1/02_rlt/COMP_28bit.sv", 11, 89, ".tb_COMP_28bit.DUT", "v_toggle/COMP_28bit", "w_equal_0_6", "");
}
