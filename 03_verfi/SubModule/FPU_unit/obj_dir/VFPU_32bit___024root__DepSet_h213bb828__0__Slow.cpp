// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU_32bit.h for the primary calling header

#include "VFPU_32bit__pch.h"
#include "VFPU_32bit__Syms.h"
#include "VFPU_32bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU_32bit___024root___dump_triggers__stl(VFPU_32bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFPU_32bit___024root___eval_triggers__stl(VFPU_32bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU_32bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c__0)));
    vlSelf->__VstlTriggered.set(2U, vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data.neq(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data__0));
    vlSelf->__VstlTriggered.set(3U, ((((((((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0)) 
                                          | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0))) 
                                         | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0))) 
                                        | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0))) 
                                       | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0))) 
                                      | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0))) 
                                     | ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0))));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(5U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(6U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(7U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0)));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(9U, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(0xaU, ((IData)(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0)));
    vlSelf->__VstlTriggered.set(0xbU, vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data.neq(vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data__0));
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c__0 
        = vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__ALU_UNIT__DOT__ALU_COMM_UNIT__DOT__SUM_UNIT_CLA__DOT__w_c;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data__0.assign(vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__SHF_UNIT__DOT__stage_data);
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1__0 
        = vlSelf->FPU_32bit__DOT__FPU_NOR_UNIT__DOT__LOPD_unit__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1;
    vlSelf->__Vtrigprevexpr___TOP__FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data__0.assign(vlSelf->FPU_32bit__DOT__MANTISSA_UNTI__DOT__MANTISSA_UNIT__DOT__SHF_shift_right_unit__DOT__GEN_SHIFT_RIGHT__DOT__SHF_SHIFT_RIGHT__DOT__stage_data);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
        vlSelf->__VstlTriggered.set(9U, 1U);
        vlSelf->__VstlTriggered.set(0xaU, 1U);
        vlSelf->__VstlTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFPU_32bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
