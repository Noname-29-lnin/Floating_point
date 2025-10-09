// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SHF_unit.h for the primary calling header

#include "Vtb_SHF_unit__pch.h"
#include "Vtb_SHF_unit__Syms.h"
#include "Vtb_SHF_unit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_SHF_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF_NX("============================================\n>>> TEST SHIFT LEFT UNIT <<<\n",0);
    ++(vlSymsp->__Vcoverage[79]);
    VL_WRITEF_NX("============================================\n",0);
    vlSelf->tb_SHF_unit__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3e8U, vlSelf->tb_SHF_unit__DOT__i)) {
        vlSelf->tb_SHF_unit__DOT__i_data = (0xffffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0xffffffU));
        vlSelf->tb_SHF_unit__DOT__i_shift_number = 
            (0x1fU & VL_URANDOM_RANGE_I(0U, 0x17U));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "SHF_unit/tb_SHF_unit.sv", 
                                           47);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_SHF_unit__DOT__expected_data = (0xffffffU 
                                                   & (vlSelf->tb_SHF_unit__DOT__i_data 
                                                      << (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
        ++(vlSymsp->__Vcoverage[81]);
        if ((vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
             [5U] == vlSelf->tb_SHF_unit__DOT__expected_data)) {
            vlSelf->tb_SHF_unit__DOT__pass_count = 
                ((IData)(1U) + vlSelf->tb_SHF_unit__DOT__pass_count);
            VL_WRITEF_NX("Test %0d: PASS | data=%x | shift=%0# | out=%x\n",0,
                         32,vlSelf->tb_SHF_unit__DOT__i,
                         24,vlSelf->tb_SHF_unit__DOT__i_data,
                         5,(IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number),
                         24,vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]);
            ++(vlSymsp->__Vcoverage[83]);
        } else {
            vlSelf->tb_SHF_unit__DOT__fail_count = 
                ((IData)(1U) + vlSelf->tb_SHF_unit__DOT__fail_count);
            VL_WRITEF_NX("Test %0d: FAIL | data=%x | shift=%0# | DUT=%x | EXP=%x\n",0,
                         32,vlSelf->tb_SHF_unit__DOT__i,
                         24,vlSelf->tb_SHF_unit__DOT__i_data,
                         5,(IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number),
                         24,vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U],24,vlSelf->tb_SHF_unit__DOT__expected_data);
            ++(vlSymsp->__Vcoverage[84]);
        }
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_SHF_unit__DOT__i = ((IData)(1U) 
                                       + vlSelf->tb_SHF_unit__DOT__i);
    }
    VL_WRITEF_NX("============================================\nTotal Tests : 1000\nPASS         : %0d\nFAIL         : %0d\n============================================\n",0,
                 32,vlSelf->tb_SHF_unit__DOT__pass_count,
                 32,vlSelf->tb_SHF_unit__DOT__fail_count);
    if ((0U == vlSelf->tb_SHF_unit__DOT__fail_count)) {
        VL_WRITEF_NX("\342\234\205 ALL TESTS PASSED!\n",0);
        ++(vlSymsp->__Vcoverage[86]);
    } else {
        VL_WRITEF_NX("\342\235\214 SOME TESTS FAILED!\n",0);
        ++(vlSymsp->__Vcoverage[87]);
    }
    VL_FINISH_MT("SHF_unit/tb_SHF_unit.sv", 79, "");
    ++(vlSymsp->__Vcoverage[88]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SHF_unit___024root___dump_triggers__act(Vtb_SHF_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_SHF_unit___024root___eval_triggers__act(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data.neq(vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__1));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data__1.assign(vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_SHF_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_SHF_unit___024root___act_sequent__TOP__0(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((1U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[233]);
    }
    if ((1U & (~ (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[234]);
    }
    if ((2U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[236]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[237]);
    }
    if ((4U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[239]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[240]);
    }
    if ((8U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[242]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[243]);
    }
    if ((0x10U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[245]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[246]);
    }
    if ((1U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1eU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (1U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((2U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1dU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (2U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((4U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1bU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (4U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((8U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x17U & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (8U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0xfU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (0x10U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (1U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (2U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (4U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (8U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x10U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x20U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x40U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x80U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x100U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x200U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x400U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x800U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x1000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x2000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x4000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x8000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x10000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x20000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x40000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x80000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x100000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x200000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x400000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x800000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[0U] 
        = vlSelf->tb_SHF_unit__DOT__i_data;
}

VL_INLINE_OPT void Vtb_SHF_unit___024root___act_comb__TOP__0(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[1U] 
        = ((1U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))
            ? (0xfffffeU & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [0U] << 1U)) : vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
           [0U]);
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[2U] 
        = ((2U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))
            ? (0xfffffcU & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [1U] << 2U)) : vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
           [1U]);
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[3U] 
        = ((4U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))
            ? (0xfffff0U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [2U] << 4U)) : vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
           [2U]);
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[4U] 
        = ((8U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))
            ? (0xffff00U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [3U] << 8U)) : vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
           [3U]);
    vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data[5U] 
        = ((0x10U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))
            ? (0xff0000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                            [4U] << 0x10U)) : vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
           [4U]);
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__o_data) 
               | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [0U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[0U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [0U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [0U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [1U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [1U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[1U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [1U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [1U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [2U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [2U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[2U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [2U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [2U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [3U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [3U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[3U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [3U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [3U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [4U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [4U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [4U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [4U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [4U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [4U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[4U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [4U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [4U]));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (1U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (2U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (4U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
               [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
               [5U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (8U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x10U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x20U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x40U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                  [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x80U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x100U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x200U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x400U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                   [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                   [5U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x800U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x1000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x2000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x4000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                    [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                    [5U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x8000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x10000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x20000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x40000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                     [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                     [5U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x80000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x100000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x200000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x400000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                      [5U] ^ vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                      [5U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data[5U] 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT____Vtogcov__stage_data
                [5U]) | (0x800000U & vlSelf->tb_SHF_unit__DOT__DUT__DOT__GEN_SHIFT_LEFT__DOT__SHF_SHIFT_LEFT__DOT__stage_data
                         [5U]));
    }
}

VL_INLINE_OPT void Vtb_SHF_unit___024root___nba_sequent__TOP__0(Vtb_SHF_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SHF_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SHF_unit___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[233]);
    }
    if ((1U & (~ (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[234]);
    }
    if ((2U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[236]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[237]);
    }
    if ((4U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[239]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[240]);
    }
    if ((8U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[242]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[243]);
    }
    if ((0x10U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number))) {
        ++(vlSymsp->__Vcoverage[245]);
    }
    if ((1U & (~ ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[246]);
    }
    if ((1U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1eU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (1U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((2U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1dU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (2U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((4U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x1bU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (4U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((8U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
               ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0x17U & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (8U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number) 
                  ^ (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number 
            = ((0xfU & (IData)(vlSelf->tb_SHF_unit__DOT____Vtogcov__i_shift_number)) 
               | (0x10U & (IData)(vlSelf->tb_SHF_unit__DOT__i_shift_number)));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (1U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (2U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (4U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__i_data ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (8U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x10U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x20U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x40U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__i_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x80U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x100U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x200U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x400U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__i_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x800U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x1000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x2000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x4000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x8000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x10000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x20000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x40000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x80000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x100000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x200000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x400000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__i_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__i_data) 
               | (0x800000U & vlSelf->tb_SHF_unit__DOT__i_data));
    }
    if ((1U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffeU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (1U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((2U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffdU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (2U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((4U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffffbU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (4U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((8U & (vlSelf->tb_SHF_unit__DOT__expected_data 
               ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffff7U & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (8U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x10U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffefU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x10U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x20U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffdfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x20U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x40U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffffbfU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x40U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x80U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                  ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffff7fU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x80U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x100U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffeffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x100U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x200U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffdffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x200U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x400U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfffbffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x400U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x800U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                   ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfff7ffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x800U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x1000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffefffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x1000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x2000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffdfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x2000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x4000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xffbfffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x4000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x8000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                    ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xff7fffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x8000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x10000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfeffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x10000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x20000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfdffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x20000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x40000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xfbffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x40000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x80000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                     ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xf7ffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x80000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x100000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xefffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x100000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x200000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xdfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x200000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x400000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0xbfffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x400000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
    if ((0x800000U & (vlSelf->tb_SHF_unit__DOT__expected_data 
                      ^ vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data 
            = ((0x7fffffU & vlSelf->tb_SHF_unit__DOT____Vtogcov__expected_data) 
               | (0x800000U & vlSelf->tb_SHF_unit__DOT__expected_data));
    }
}
