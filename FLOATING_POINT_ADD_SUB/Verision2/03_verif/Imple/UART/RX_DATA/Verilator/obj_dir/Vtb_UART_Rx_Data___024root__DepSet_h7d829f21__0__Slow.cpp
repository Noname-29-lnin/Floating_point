// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_UART_Rx_Data.h for the primary calling header

#include "Vtb_UART_Rx_Data__pch.h"
#include "Vtb_UART_Rx_Data___024root.h"

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_static(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_static\n"); );
}

extern const VlWide<25>/*799:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h5241f51a_0;
extern const VlWide<25>/*799:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h5fa3ccf9_0;

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_initial__TOP(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_initial__TOP\n"); );
    // Body
    if (vlSelf->tb_UART_Rx_Data__DOT__i_sel_data) {
        VL_WRITEF_NX("Initial load memory contents from /home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/Data_B.txt\n",0);
        VL_READMEM_N(true, 8, 4, 0, VL_CVT_PACK_STR_NW(25, Vtb_UART_Rx_Data__ConstPool__CONST_h5241f51a_0)
                     ,  &(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram)
                     , 0, ~0ULL);
    } else {
        VL_WRITEF_NX("Initial load memory contents from /home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/Data_A.txt\n",0);
        VL_READMEM_N(true, 8, 4, 0, VL_CVT_PACK_STR_NW(25, Vtb_UART_Rx_Data__ConstPool__CONST_h5fa3ccf9_0)
                     ,  &(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_final__TOP(Vtb_UART_Rx_Data___024root* vlSelf);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_final(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_final\n"); );
    // Body
    Vtb_UART_Rx_Data___024root___eval_final__TOP(vlSelf);
}

extern const VlWide<13>/*415:0*/ Vtb_UART_Rx_Data__ConstPool__CONST_h85c9f158_0;

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_final__TOP(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF_NX("Dumping memory contents to /home/noname/Document/project_tiny/Floating_point\n",0);
    VL_WRITEMEM_N(true, 8, 4, 0, VL_CVT_PACK_STR_NW(13, Vtb_UART_Rx_Data__ConstPool__CONST_h85c9f158_0)
                  ,  &(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram)
                  , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__stl(Vtb_UART_Rx_Data___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_UART_Rx_Data___024root___eval_phase__stl(Vtb_UART_Rx_Data___024root* vlSelf);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_settle(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_settle\n"); );
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
            Vtb_UART_Rx_Data___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/tb_UART_Rx_Data.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_UART_Rx_Data___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__stl(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___stl_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf);

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_stl(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_UART_Rx_Data___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___stl_sequent__TOP__0(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr_n 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr)));
    vlSelf->UART_Tx_Data__DOT__ptr_rd_n = (3U & ((IData)(vlSelf->UART_Tx_Data__DOT__ptr_rd) 
                                                 + (IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__n_bdr_count 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
            ? 0U : (0xffffffU & ((IData)(1U) + vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count)));
    if ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state 
                = ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                             ? 1U : 0U));
        } else {
            if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))) {
                    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & 0U);
                    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)));
                    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 4U;
            }
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index));
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                            ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))
                                : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 2U;
            } else {
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state 
                = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en)
                    ? 1U : 0U);
        }
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
    }
    if ((4U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))
                            ? 0U : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)));
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))) {
                    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index));
                    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                     : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)));
                    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index));
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                            ? (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))
                                : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))));
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index 
            = (0xfU & 0U);
        if ((1U & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state))) {
            if ((7U == (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state 
                    = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__o_tx_data)
                        ? 0U : 2U);
            } else {
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->tb_UART_Rx_Data__DOT__i_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state 
                = ((((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                     & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                    & (IData)(vlSelf->tb_UART_Rx_Data__DOT__i_tx_en))
                    ? 1U : 0U);
        }
    }
    if ((4U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))
                            ? 0U : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                     : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                            ? (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))
                                : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index))));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))));
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index 
            = (0xfU & 0U);
        if ((1U & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state))) {
            if ((7U == (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))) {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                    = ((IData)(vlSelf->i_rx_data) ? 0U
                        : 2U);
            } else {
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Rx_Test__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count)));
                vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state 
                = ((((~ (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal)) 
                     & (IData)(vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal)) 
                    & (IData)(vlSelf->i_rx_en)) ? 1U
                    : 0U);
        }
    }
    if ((4U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))
                    ? 0U : (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                             | (IData)(vlSelf->i_tx_en))
                             ? 1U : 0U));
        } else {
            if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & 0U);
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 6U;
                } else {
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                        = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                     : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
                }
            } else if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 5U;
            } else {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 4U;
            }
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index));
        }
    } else if ((2U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
        if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 0U;
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                             ? 0U : ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                      : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
                = (0xfU & ((7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                            ? (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)
                            : ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))
                                : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index))));
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = (((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)) 
                    & (7U == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index)))
                    ? 4U : 2U);
        }
    } else {
        if ((1U & (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state))) {
            if ((0xfU == (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))) {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & 0U);
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 2U;
            } else {
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                    = (0x1fU & ((IData)(vlSelf->UART_Tx_Data__02Ei_stick)
                                 ? ((IData)(1U) + (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count))
                                 : (IData)(vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count)));
                vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = 1U;
            }
        } else {
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count 
                = (0x1fU & 0U);
            vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state 
                = (((IData)(vlSelf->UART_Tx_Data__DOT__w_tx_done) 
                    | (IData)(vlSelf->i_tx_en)) ? 1U
                    : 0U);
        }
        vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index 
            = (0xfU & 0U);
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a 
        = ((~ ((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable 
        = ((~ ((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save)));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable 
        = ((~ ((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal)) 
               & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal))) 
           & (((~ (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal)) 
               & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal)) 
              | (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save)));
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update 
        = ((IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx) 
           & (IData)(vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update 
        = ((IData)(vlSelf->UART_Rx_Test__DOT__w_done_rx) 
           & (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable));
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr_n 
        = (3U & ((IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr) 
                 + (IData)(vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update)));
}

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___eval_triggers__stl(Vtb_UART_Rx_Data___024root* vlSelf);

VL_ATTR_COLD bool Vtb_UART_Rx_Data___024root___eval_phase__stl(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_UART_Rx_Data___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_UART_Rx_Data___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__ico(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__act(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_UART_Rx_Data.i_clk or negedge tb_UART_Rx_Data.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge UART_Rx_Test.i_clk or negedge UART_Rx_Test.i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge UART_Rx_Test.i_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge UART_Tx_Data.i_clk or negedge UART_Tx_Data.i_rst_n)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tb_UART_Rx_Data.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___dump_triggers__nba(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_UART_Rx_Data.i_clk or negedge tb_UART_Rx_Data.i_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge UART_Rx_Test.i_clk or negedge UART_Rx_Test.i_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge UART_Rx_Test.i_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge UART_Tx_Data.i_clk or negedge UART_Tx_Data.i_rst_n)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tb_UART_Rx_Data.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_UART_Rx_Data___024root___ctor_var_reset(Vtb_UART_Rx_Data___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_UART_Rx_Data__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_UART_Rx_Data___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->UART_Rx_Test__02Ei_clk = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__02Ei_rst_n = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__02Ei_stick = VL_RAND_RESET_I(1);
    vlSelf->i_rx_en = VL_RAND_RESET_I(1);
    vlSelf->i_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->i_rx_data = VL_RAND_RESET_I(1);
    vlSelf->o_rx_done = VL_RAND_RESET_I(1);
    vlSelf->UART_Tx_Data__02Ei_clk = VL_RAND_RESET_I(1);
    vlSelf->UART_Tx_Data__02Ei_rst_n = VL_RAND_RESET_I(1);
    vlSelf->UART_Tx_Data__02Ei_stick = VL_RAND_RESET_I(1);
    vlSelf->i_tx_en = VL_RAND_RESET_I(1);
    vlSelf->i_data = VL_RAND_RESET_I(32);
    vlSelf->o_tx_data = VL_RAND_RESET_I(1);
    vlSelf->o_tx_done = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__i_stick = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__i_sel_data = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__i_tx_en = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__o_tx_data = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__o_tx_done = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__o_data_a = VL_RAND_RESET_I(32);
    vlSelf->tb_UART_Rx_Data__DOT__o_data_b = VL_RAND_RESET_I(32);
    vlSelf->tb_UART_Rx_Data__DOT__o_done_a = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__o_done_b = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__o_rx_done = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count = VL_RAND_RESET_I(24);
    vlSelf->tb_UART_Rx_Data__DOT__UART_BND__DOT__n_bdr_count = VL_RAND_RESET_I(24);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data = VL_RAND_RESET_I(8);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd = VL_RAND_RESET_I(2);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd_n = VL_RAND_RESET_I(2);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem = VL_RAND_RESET_I(8);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count = VL_RAND_RESET_I(5);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr = VL_RAND_RESET_I(4);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr_n = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__w_done_rx = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__w_o_rx_data = VL_RAND_RESET_I(8);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count = VL_RAND_RESET_I(5);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index = VL_RAND_RESET_I(4);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data = VL_RAND_RESET_I(8);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr = VL_RAND_RESET_I(2);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr_n = VL_RAND_RESET_I(2);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__w_update = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->UART_Tx_Data__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->UART_Tx_Data__DOT__ptr_rd = VL_RAND_RESET_I(2);
    vlSelf->UART_Tx_Data__DOT__ptr_rd_n = VL_RAND_RESET_I(2);
    vlSelf->UART_Tx_Data__DOT__w_tx_done = VL_RAND_RESET_I(1);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index = VL_RAND_RESET_I(4);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
