// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_24bit__Syms.h"


void Vtb_LOPD_24bit___024root__trace_chg_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_LOPD_24bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_chg_0\n"); );
    // Init
    Vtb_LOPD_24bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_24bit___024root*>(voidSelf);
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_LOPD_24bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_LOPD_24bit___024root__trace_chg_0_sub_0(Vtb_LOPD_24bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_LOPD_24bit__DOT__i_data),24);
        bufp->chgCData(oldp+1,(vlSelf->tb_LOPD_24bit__DOT__w_expect_pos),5);
        bufp->chgBit(oldp+2,(vlSelf->tb_LOPD_24bit__DOT__w_expect_zero));
        bufp->chgIData(oldp+3,(vlSelf->tb_LOPD_24bit__DOT__test_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_LOPD_24bit__DOT__test_pass),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_LOPD_24bit__DOT__bit_pos),32);
        bufp->chgSData(oldp+6,((0xffffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                           >> 8U))),16);
        bufp->chgCData(oldp+7,((0xffU & vlSelf->tb_LOPD_24bit__DOT__i_data)),8);
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0U != 
                                               (0xffU 
                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
        bufp->chgBit(oldp+9,((1U & (~ (IData)((0U != 
                                               (0xff00U 
                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
        bufp->chgBit(oldp+10,((1U & (~ (IData)((0U 
                                                != 
                                                (0xff0000U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))))));
        bufp->chgCData(oldp+11,((0xffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                          >> 8U))),8);
        bufp->chgCData(oldp+12,((0xffU & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                          >> 0x10U))),8);
    }
    bufp->chgCData(oldp+13,(vlSelf->i_data),4);
    bufp->chgCData(oldp+14,(vlSelf->o_pos_one),2);
    bufp->chgBit(oldp+15,(vlSelf->o_zero_flag));
    bufp->chgBit(oldp+16,(vlSelf->tb_LOPD_24bit__DOT__i_clk));
    bufp->chgCData(oldp+17,((((~ (IData)((0U != (0xffU 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                              & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))
                              ? 0x1fU : (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                                          << 4U) | 
                                         ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xff0000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                                 << 3U)) 
                                          | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                ? (
                                                   ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (0x30U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                : ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xff0000U 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                    ? 
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                     & (IData)(
                                                               (0U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xf0000U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                    : 
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                     & (IData)(
                                                               (0U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xf00U 
                                                                & vlSelf->tb_LOPD_24bit__DOT__i_data)))))) 
                                              << 2U) 
                                             | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                   ? 
                                                  (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                                   | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                       & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                          >> 1U)) 
                                                      | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                   : 
                                                  ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xff0000U 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                    ? 
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                      & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                    : 
                                                   (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                      & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                       ? 
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
                                                                         & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                != 
                                                                (0xff0000U 
                                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                        ? 
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
                                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                        : 
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
                                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data))))))))))))))),5);
    bufp->chgBit(oldp+18,(((~ (IData)((0U != (0xffU 
                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                           & (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag))));
    bufp->chgCData(oldp+19,(((8U & ((~ (IData)((0U 
                                                != 
                                                (0xff0000U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                    << 3U)) | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xff0000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                  ? 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf0000U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                  : 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf00U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                                << 2U) 
                                               | ((((IData)(
                                                            (0U 
                                                             != 
                                                             (0xff0000U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                     ? 
                                                    (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                     : 
                                                    (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data))))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xff0000U 
                                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                         ? 
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
                                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                         : 
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
                                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))))),4);
    bufp->chgBit(oldp+20,(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag));
    bufp->chgCData(oldp+21,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                & (IData)((0U == (0x30U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               & (IData)((0U != (0xfU 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                              << 2U) | (((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                           & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                          << 1U) | 
                                         ((0xfffffffeU 
                                           & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                               << 1U) 
                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)) 
                                          | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                             << 1U))) 
                                        | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_15) 
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
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
    bufp->chgCData(oldp+22,((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag) 
                              << 4U) | ((8U & (((~ (IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xff0000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data))))) 
                                               << 3U)) 
                                        | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                              ? (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0x30U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                              : ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xff0000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                  ? 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf0000U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data))))
                                                  : 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xf00U 
                                                              & vlSelf->tb_LOPD_24bit__DOT__i_data)))))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                 ? 
                                                (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data) 
                                                 | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                     & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                        >> 1U)) 
                                                    | ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_8bit_UNIT_LSB__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30U 
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                 : 
                                                ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xff0000U 
                                                           & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                  ? 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                  : 
                                                 (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
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
                                                                    & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD16_o_zero_flag)
                                                     ? 
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
                                                                       & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              != 
                                                              (0xff0000U 
                                                               & vlSelf->tb_LOPD_24bit__DOT__i_data)))
                                                      ? 
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
                                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data))))))
                                                      : 
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
                                                                        & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))))))),5);
    bufp->chgCData(oldp+23,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                & (IData)((0U == (0x3000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               & (IData)((0U != (0xf00U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                              << 2U) | (((0x1fffffeU 
                                          & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                              << 1U) 
                                             & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 7U))) 
                                         | ((0xfffffeU 
                                             & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                 << 1U) 
                                                & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                   >> 8U))) 
                                            | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                               << 1U))) 
                                        | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_0__DOT____VdfgRegularize_hd7b53407_0_15) 
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
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
    bufp->chgCData(oldp+24,((((((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                & (IData)((0U == (0x300000U 
                                                  & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                               & (IData)((0U != (0xf0000U 
                                                 & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                              << 2U) | (((0x1fffeU 
                                          & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                              << 1U) 
                                             & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                >> 0xfU))) 
                                         | ((0xfffeU 
                                             & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_14) 
                                                 << 1U) 
                                                & (vlSelf->tb_LOPD_24bit__DOT__i_data 
                                                   >> 0x10U))) 
                                            | (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_12) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300000U 
                                                            & vlSelf->tb_LOPD_24bit__DOT__i_data)))) 
                                               << 1U))) 
                                        | (1U & (((IData)(vlSelf->tb_LOPD_24bit__DOT__DUT__DOT__LOPD_16bit_UNIT_MSB__DOT__LOPD_8bit_unit_1__DOT____VdfgRegularize_hd7b53407_0_15) 
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
                                                                   & vlSelf->tb_LOPD_24bit__DOT__i_data)))))))))),3);
}

void Vtb_LOPD_24bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_24bit___024root__trace_cleanup\n"); );
    // Init
    Vtb_LOPD_24bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_24bit___024root*>(voidSelf);
    Vtb_LOPD_24bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
