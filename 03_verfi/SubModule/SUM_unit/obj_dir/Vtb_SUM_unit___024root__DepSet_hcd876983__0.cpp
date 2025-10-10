// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SUM_unit.h for the primary calling header

#include "Vtb_SUM_unit__pch.h"
#include "Vtb_SUM_unit__Syms.h"
#include "Vtb_SUM_unit___024root.h"

VL_ATTR_COLD void Vtb_SUM_unit___024root___eval_initial__TOP(Vtb_SUM_unit___024root* vlSelf);
VlCoroutine Vtb_SUM_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0(Vtb_SUM_unit_CLA_4bit* vlSelf);

void Vtb_SUM_unit___024root___eval_initial(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_initial\n"); );
    // Body
    Vtb_SUM_unit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_SUM_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
    Vtb_SUM_unit_CLA_4bit___eval_initial__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__0 
        = vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__1 
        = vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c;
}

VL_INLINE_OPT VlCoroutine Vtb_SUM_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF_NX("============================================\n>>> TEST SUM UNIT (28-bit) <<<\n============================================\n",0);
    vlSelf->tb_SUM_unit__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1f4U, vlSelf->tb_SUM_unit__DOT__i)) {
        vlSelf->tb_SUM_unit__DOT__i_data_a = (0xfffffffU 
                                              & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        vlSelf->tb_SUM_unit__DOT__i_data_b = (0xfffffffU 
                                              & VL_URANDOM_RANGE_I(0U, 0xfffffffU));
        vlSelf->tb_SUM_unit__DOT__i_carry = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "SUM_unit/tb_SUM_unit.sv", 
                                           52);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_SUM_unit__DOT__expected_carry = 
            (1U & (((vlSelf->tb_SUM_unit__DOT__i_data_a 
                     + vlSelf->tb_SUM_unit__DOT__i_data_b) 
                    + (IData)(vlSelf->tb_SUM_unit__DOT__i_carry)) 
                   >> 0x1cU));
        vlSelf->tb_SUM_unit__DOT__expected_sum = (0xfffffffU 
                                                  & ((vlSelf->tb_SUM_unit__DOT__i_data_a 
                                                      + vlSelf->tb_SUM_unit__DOT__i_data_b) 
                                                     + (IData)(vlSelf->tb_SUM_unit__DOT__i_carry)));
        if (((vlSelf->tb_SUM_unit__DOT__o_sum == vlSelf->tb_SUM_unit__DOT__expected_sum) 
             & ((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                       >> 7U)) == (IData)(vlSelf->tb_SUM_unit__DOT__expected_carry)))) {
            vlSelf->tb_SUM_unit__DOT__pass_count = 
                ((IData)(1U) + vlSelf->tb_SUM_unit__DOT__pass_count);
            VL_WRITEF_NX("Test %0d: PASS | A=%x | B=%x | Cin=%b | SUM=%x | Cout=%b\n",0,
                         32,vlSelf->tb_SUM_unit__DOT__i,
                         28,vlSelf->tb_SUM_unit__DOT__i_data_a,
                         28,vlSelf->tb_SUM_unit__DOT__i_data_b,
                         1,(IData)(vlSelf->tb_SUM_unit__DOT__i_carry),
                         28,vlSelf->tb_SUM_unit__DOT__o_sum,
                         1,(1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 7U)));
            ++(vlSymsp->__Vcoverage[118]);
        } else {
            vlSelf->tb_SUM_unit__DOT__fail_count = 
                ((IData)(1U) + vlSelf->tb_SUM_unit__DOT__fail_count);
            VL_WRITEF_NX("Test %0d: FAIL | A=%x | B=%x | Cin=%b | DUT_SUM=%x | EXP_SUM=%x | DUT_Cout=%b | EXP_Cout=%b\n",0,
                         32,vlSelf->tb_SUM_unit__DOT__i,
                         28,vlSelf->tb_SUM_unit__DOT__i_data_a,
                         28,vlSelf->tb_SUM_unit__DOT__i_data_b,
                         1,(IData)(vlSelf->tb_SUM_unit__DOT__i_carry),
                         28,vlSelf->tb_SUM_unit__DOT__o_sum,
                         28,vlSelf->tb_SUM_unit__DOT__expected_sum,
                         1,(1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                  >> 7U)),1,(IData)(vlSelf->tb_SUM_unit__DOT__expected_carry));
            ++(vlSymsp->__Vcoverage[119]);
        }
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->tb_SUM_unit__DOT__i = ((IData)(1U) 
                                       + vlSelf->tb_SUM_unit__DOT__i);
    }
    VL_WRITEF_NX("============================================\nTotal Tests : 500\nPASS         : %0d\nFAIL         : %0d\n============================================\n",0,
                 32,vlSelf->tb_SUM_unit__DOT__pass_count,
                 32,vlSelf->tb_SUM_unit__DOT__fail_count);
    if ((0U == vlSelf->tb_SUM_unit__DOT__fail_count)) {
        VL_WRITEF_NX("\342\234\205 ALL TESTS PASSED!\n",0);
        ++(vlSymsp->__Vcoverage[121]);
    } else {
        VL_WRITEF_NX("\342\235\214 SOME TESTS FAILED!\n",0);
        ++(vlSymsp->__Vcoverage[122]);
    }
    VL_FINISH_MT("SUM_unit/tb_SUM_unit.sv", 82, "");
    ++(vlSymsp->__Vcoverage[123]);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SUM_unit___024root___dump_triggers__act(Vtb_SUM_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_SUM_unit___024root___eval_triggers__act(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__1)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c__1 
        = vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_SUM_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_SUM_unit___024root___act_sequent__TOP__0(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit___024root___act_sequent__TOP__1(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit___024root___act_comb__TOP__0(Vtb_SUM_unit___024root* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit___024root___act_comb__TOP__1(Vtb_SUM_unit___024root* vlSelf);

void Vtb_SUM_unit___024root___eval_act(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_SUM_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_SUM_unit___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___act_comb__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_SUM_unit___024root___act_sequent__TOP__0(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_SUM_unit__DOT__i_carry) 
         ^ (IData)(vlSelf->tb_SUM_unit__DOT____Vtogcov__i_carry))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_carry 
            = vlSelf->tb_SUM_unit__DOT__i_carry;
    }
    if (((IData)(vlSelf->tb_SUM_unit__DOT__expected_carry) 
         ^ (IData)(vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_carry))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_carry 
            = vlSelf->tb_SUM_unit__DOT__expected_carry;
    }
    if ((1U & (vlSelf->tb_SUM_unit__DOT__i_data_a ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffffeU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (1U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((2U & (vlSelf->tb_SUM_unit__DOT__i_data_a ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffffdU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (2U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((4U & (vlSelf->tb_SUM_unit__DOT__i_data_a ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffffbU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (4U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((8U & (vlSelf->tb_SUM_unit__DOT__i_data_a ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffff7U & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (8U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x10U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffffefU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x10U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x20U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffffdfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x20U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x40U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffffbfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x40U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x80U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffff7fU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x80U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x100U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffeffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x100U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x200U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffdffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x200U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x400U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffffbffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x400U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x800U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffff7ffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x800U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x1000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffefffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x1000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x2000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffdfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x2000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x4000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfffbfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x4000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x8000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfff7fffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x8000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x10000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffeffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x10000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x20000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffdffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x20000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x40000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xffbffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x40000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x80000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xff7ffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x80000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x100000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfefffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x100000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x200000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfdfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x200000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x400000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xfbfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x400000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x800000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xf7fffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x800000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x1000000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xeffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x1000000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x2000000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xdffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x2000000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x4000000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0xbffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x4000000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((0x8000000U & (vlSelf->tb_SUM_unit__DOT__i_data_a 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a 
            = ((0x7ffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_a) 
               | (0x8000000U & vlSelf->tb_SUM_unit__DOT__i_data_a));
    }
    if ((1U & (vlSelf->tb_SUM_unit__DOT__i_data_b ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffffeU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (1U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((2U & (vlSelf->tb_SUM_unit__DOT__i_data_b ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffffdU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (2U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((4U & (vlSelf->tb_SUM_unit__DOT__i_data_b ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffffbU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (4U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((8U & (vlSelf->tb_SUM_unit__DOT__i_data_b ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffff7U & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (8U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x10U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffffefU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x10U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x20U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffffdfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x20U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x40U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffffbfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x40U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x80U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffff7fU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x80U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x100U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffeffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x100U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x200U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffdffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x200U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x400U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffffbffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x400U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x800U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffff7ffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x800U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x1000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffefffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x1000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x2000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffdfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x2000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x4000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfffbfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x4000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x8000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfff7fffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x8000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x10000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffeffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x10000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x20000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffdffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x20000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x40000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xffbffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x40000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x80000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xff7ffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x80000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x100000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfefffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x100000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x200000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfdfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x200000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x400000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xfbfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x400000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x800000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xf7fffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x800000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x1000000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xeffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x1000000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x2000000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xdffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x2000000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x4000000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0xbffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x4000000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((0x8000000U & (vlSelf->tb_SUM_unit__DOT__i_data_b 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b 
            = ((0x7ffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__i_data_b) 
               | (0x8000000U & vlSelf->tb_SUM_unit__DOT__i_data_b));
    }
    if ((1U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
               ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffffeU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (1U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((2U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
               ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffffdU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (2U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((4U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
               ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffffbU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (4U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((8U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
               ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffff7U & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (8U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x10U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffffefU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x10U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x20U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffffdfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x20U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x40U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffffbfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x40U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x80U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                  ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffff7fU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x80U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x100U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffeffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x100U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x200U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffdffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x200U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x400U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffffbffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x400U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x800U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffff7ffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x800U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x1000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffefffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x1000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x2000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffdfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x2000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x4000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfffbfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x4000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x8000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfff7fffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x8000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x10000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffeffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x10000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x20000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffdffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x20000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x40000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xffbffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x40000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x80000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xff7ffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x80000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x100000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfefffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x100000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x200000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfdfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x200000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x400000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xfbfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x400000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x800000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xf7fffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x800000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x1000000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xeffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x1000000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x2000000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xdffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x2000000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x4000000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0xbffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x4000000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
    if ((0x8000000U & (vlSelf->tb_SUM_unit__DOT__expected_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum 
            = ((0x7ffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__expected_sum) 
               | (0x8000000U & vlSelf->tb_SUM_unit__DOT__expected_sum));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit___024root___act_sequent__TOP__1(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p 
        = (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
            << 6U) | (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                       << 5U) | (((IData)((0xfU == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                  << 4U) | (((IData)(
                                                     (0xfU 
                                                      == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.__PVT__w_p))) 
                                                   << 1U) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.__PVT__w_p))))))));
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g 
        = (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
            << 6U) | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                       << 5U) | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                  << 4U) | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.o_g) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.o_g)))))));
    if ((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x7eU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (1U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((2U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x7dU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (2U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((4U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x7bU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (4U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((8U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x77U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (8U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x6fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (0x10U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x5fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (0x20U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p 
            = ((0x3fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_p)) 
               | (0x40U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p)));
    }
    if ((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x7eU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (1U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((2U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x7dU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (2U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((4U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x7bU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (4U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((8U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x77U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (8U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x6fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (0x10U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x5fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (0x20U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g 
            = ((0x3fU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_g)) 
               | (0x40U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit___024root___act_comb__TOP__0(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                            | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                               & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                           << 1U)) | ((0x40U & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                      | ((0x20U & (
                                                   ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                         | ((0x10U 
                                             & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                 | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                    & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                << 1U)) 
                                            | ((8U 
                                                & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                    | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                       & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                       | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                          & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_g) 
                                                          | ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_p) 
                                                             & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c))) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->tb_SUM_unit__DOT__i_carry))))))));
    vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c 
        = __Vtemp_1;
    if ((IData)((((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                  >> 7U) ^ (IData)(vlSelf->tb_SUM_unit__DOT____Vtogcov__o_carry)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_carry 
            = (1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xfeU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (1U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((2U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xfdU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (2U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((4U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xfbU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (4U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((8U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
               ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xf7U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (8U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xefU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (0x10U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xdfU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (0x20U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c) 
                  ^ (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c 
            = ((0xbfU & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT____Vtogcov__w_c)) 
               | (0x40U & (IData)(vlSelf->tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__w_c)));
    }
}

VL_INLINE_OPT void Vtb_SUM_unit___024root___act_comb__TOP__1(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_SUM_unit__DOT__o_sum = (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                        << 0x18U) | 
                                       (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                         << 0x14U) 
                                        | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                            << 0x10U) 
                                           | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                               << 0xcU) 
                                              | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                  << 8U) 
                                                 | (((IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1.sum) 
                                                     << 4U) 
                                                    | (IData)(vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0.sum)))))));
    if ((1U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffffeU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (1U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((2U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffffdU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (2U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((4U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffffbU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (4U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((8U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffff7U & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (8U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x10U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffffefU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x10U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x20U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffffdfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x20U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x40U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffffbfU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x40U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x80U & (vlSelf->tb_SUM_unit__DOT__o_sum ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffff7fU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x80U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x100U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffeffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x100U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x200U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffdffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x200U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x400U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffffbffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x400U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x800U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                   ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffff7ffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x800U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x1000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffefffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x1000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x2000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffdfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x2000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x4000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfffbfffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x4000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x8000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                    ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfff7fffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x8000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x10000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffeffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x10000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x20000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffdffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x20000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x40000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xffbffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x40000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x80000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                     ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xff7ffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x80000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x100000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfefffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x100000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x200000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfdfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x200000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x400000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xfbfffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x400000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x800000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                      ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xf7fffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x800000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x1000000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xeffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x1000000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x2000000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xdffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x2000000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x4000000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0xbffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x4000000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
    if ((0x8000000U & (vlSelf->tb_SUM_unit__DOT__o_sum 
                       ^ vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum 
            = ((0x7ffffffU & vlSelf->tb_SUM_unit__DOT____Vtogcov__o_sum) 
               | (0x8000000U & vlSelf->tb_SUM_unit__DOT__o_sum));
    }
}

void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);
void Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0(Vtb_SUM_unit_CLA_4bit* vlSelf);

void Vtb_SUM_unit___024root___eval_nba(Vtb_SUM_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_SUM_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SUM_unit___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SUM_unit___024root___act_sequent__TOP__0(vlSelf);
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_4BIT_UNIT_0));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit_CLA_4bit___nba_sequent__TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1__0((&vlSymsp->TOP__tb_SUM_unit__DOT__DUT__DOT__CLA_28BIT_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1));
        Vtb_SUM_unit___024root___act_comb__TOP__1(vlSelf);
    }
}
