// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_LOPD_24bit.h for the primary calling header

#include "Vtb_LOPD_24bit__pch.h"
#include "Vtb_LOPD_24bit___024root.h"

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_static__TOP(Vtb_LOPD_24bit___024root* vlSelf);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_static(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_static\n"); );
    // Body
    Vtb_LOPD_24bit___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_static__TOP(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_LOPD_24bit__DOT__test_count = 0U;
    vlSelf->tb_LOPD_24bit__DOT__test_pass = 0U;
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_final(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__stl(Vtb_LOPD_24bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_LOPD_24bit___024root___eval_phase__stl(Vtb_LOPD_24bit___024root* vlSelf);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_settle(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_LOPD_24bit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../02_rtl/LOPD_4bit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_LOPD_24bit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__stl(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___stl_sequent__TOP__0(Vtb_LOPD_24bit___024root* vlSelf);

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_stl(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_LOPD_24bit___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___stl_sequent__TOP__0(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___eval_triggers__stl(Vtb_LOPD_24bit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_LOPD_24bit___024root___eval_phase__stl(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_LOPD_24bit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_LOPD_24bit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__ico(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__act(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_LOPD_24bit.i_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_LOPD_24bit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_LOPD_24bit___024root___dump_triggers__nba(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_LOPD_24bit.i_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_LOPD_24bit.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_LOPD_24bit___024root___ctor_var_reset(Vtb_LOPD_24bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_data = VL_RAND_RESET_I(4);
    vlSelf->o_pos_one = VL_RAND_RESET_I(2);
    vlSelf->o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__i_data = VL_RAND_RESET_I(24);
    vlSelf->tb_LOPD_24bit__DOT__w_expect_pos = VL_RAND_RESET_I(5);
    vlSelf->tb_LOPD_24bit__DOT__w_expect_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__test_count = 0;
    vlSelf->tb_LOPD_24bit__DOT__test_pass = 0;
    vlSelf->tb_LOPD_24bit__DOT__bit_pos = 0;
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD8_o_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_1 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_4 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_6 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_7 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_8 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_1_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_LOPD_24bit__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
