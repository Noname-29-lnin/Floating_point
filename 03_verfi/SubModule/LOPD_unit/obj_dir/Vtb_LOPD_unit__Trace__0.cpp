// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_LOPD_unit__Syms.h"


void Vtb_LOPD_unit___024root__trace_chg_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_LOPD_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_chg_0\n"); );
    // Init
    Vtb_LOPD_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_unit___024root*>(voidSelf);
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_LOPD_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_LOPD_unit___024root__trace_chg_0_sub_0(Vtb_LOPD_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_LOPD_unit__DOT__o_addr),32);
        bufp->chgCData(oldp+1,(vlSelf->tb_LOPD_unit__DOT__o_one_position),5);
        bufp->chgBit(oldp+2,(vlSelf->tb_LOPD_unit__DOT__o_zero_flag));
        bufp->chgIData(oldp+3,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_addr),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data),32);
        bufp->chgIData(oldp+5,((0xffffU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),17);
        bufp->chgCData(oldp+6,((0xffU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),8);
        bufp->chgCData(oldp+7,((0xfU & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data)),4);
        bufp->chgCData(oldp+8,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                        >> 4U))),4);
        bufp->chgCData(oldp+9,((0xffU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 8U))),8);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 8U))),4);
        bufp->chgCData(oldp+11,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 0xcU))),4);
        bufp->chgIData(oldp+12,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                 >> 0x10U)),17);
        bufp->chgCData(oldp+13,((0xffU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+14,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+15,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+16,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+17,((0xfU & (vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+18,((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                 >> 0x1cU)),4);
    }
    bufp->chgBit(oldp+19,(vlSelf->tb_LOPD_unit__DOT__i_clk));
    bufp->chgBit(oldp+20,(vlSelf->tb_LOPD_unit__DOT__i_rst_n));
    bufp->chgIData(oldp+21,(vlSelf->tb_LOPD_unit__DOT__i_addr),32);
    bufp->chgIData(oldp+22,(vlSelf->tb_LOPD_unit__DOT__i_data),32);
    bufp->chgCData(oldp+23,(((0x10U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)) 
                                       << 4U)) | ((8U 
                                                   & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                        ? 
                                                       (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))
                                                        : 
                                                       (~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1))) 
                                                      << 3U)) 
                                                  | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))
                                                        : 
                                                       ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                         ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                         : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                              ? 
                                                             ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                               ? 
                                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                                ? 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                                >> 1U))
                                                               : 
                                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                                ? 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                                >> 1U)))
                                                              : 
                                                             ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                               ? 
                                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                                ? 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                                >> 1U))
                                                               : 
                                                              ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                                ? 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                                >> 1U)))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1)
                                                               ? 
                                                              ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                                ? 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                                 ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                                 : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                                 ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                                 : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))
                                                               : 
                                                              ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                                ? 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                                 ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                                 : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                                 ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                                 : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))))),5);
    bufp->chgBit(oldp+24,(((((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                  >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                             >> 1U) 
                                            | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                             & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                            & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                           & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1))));
    bufp->chgCData(oldp+25,(((8U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)) 
                                    << 3U)) | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)) 
                                                << 2U) 
                                               | ((2U 
                                                   & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                         ? 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                         >> 1U))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                         ? 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                         >> 1U))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                          ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                          : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                          ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                          : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))),4);
    bufp->chgBit(oldp+26,((((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                 >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                            >> 1U) 
                                           | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                            & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))) 
                           & (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1))));
    bufp->chgCData(oldp+27,(((8U & ((~ (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)) 
                                    << 3U)) | ((((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                  ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)) 
                                                << 2U) 
                                               | ((2U 
                                                   & (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                         ? 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                         >> 1U))
                                                        : 
                                                       ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                         ? 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                         >> 1U))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1)
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                          ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                          : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0))
                                                         : 
                                                        ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                          ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                          : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))))),4);
    bufp->chgBit(oldp+28,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__w_zero_flag_1));
    bufp->chgCData(oldp+29,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
                              << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                 ? 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                 >> 1U)
                                                 : 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                 >> 1U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)
                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->chgBit(oldp+30,((1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                                 >> 1U) 
                                                | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))) 
                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6))))));
    bufp->chgCData(oldp+31,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                              << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                 ? 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                 >> 1U)
                                                 : 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                 >> 1U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)
                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))),3);
    bufp->chgBit(oldp+32,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__w_zero_flag_1));
    bufp->chgBit(oldp+33,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     >> 1U) | ((vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data 
                                                >> 1U) 
                                               | vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))));
    bufp->chgCData(oldp+34,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6)))));
    bufp->chgCData(oldp+36,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgBit(oldp+37,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     >> 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0x300U 
                                                        & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->chgCData(oldp+38,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))));
    bufp->chgCData(oldp+40,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_0__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
    bufp->chgCData(oldp+41,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16) 
                              << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                 ? 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1) 
                                                 >> 1U)
                                                 : 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                                 >> 1U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)
                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1)
                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0)))))),3);
    bufp->chgBit(oldp+42,((1U & ((~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                      >> 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000U 
                                                         & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))) 
                                 & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16))))));
    bufp->chgCData(oldp+43,((((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                              << 2U) | ((2U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                 ? 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1) 
                                                 >> 1U)
                                                 : 
                                                ((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                                 >> 1U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)
                                                  ? (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1)
                                                  : (IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0)))))),3);
    bufp->chgBit(oldp+44,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__w_zero_flag_1));
    bufp->chgBit(oldp+45,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0) 
                                     >> 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->chgCData(oldp+46,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+47,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16)))));
    bufp->chgCData(oldp+48,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_0__DOT__w_pos_one_1),2);
    bufp->chgBit(oldp+49,((1U & (~ (((IData)(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0) 
                                     >> 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->tb_LOPD_unit__DOT__DUT__DOT__w_i_data))))))));
    bufp->chgCData(oldp+50,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_0),2);
    bufp->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)))));
    bufp->chgCData(oldp+52,(vlSelf->tb_LOPD_unit__DOT__DUT__DOT__genblk1__DOT__DUT__DOT__LOPD_16bit_unit_1__DOT__LOPD_8bit_unit_1__DOT__w_pos_one_1),2);
}

void Vtb_LOPD_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_LOPD_unit___024root__trace_cleanup\n"); );
    // Init
    Vtb_LOPD_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_LOPD_unit___024root*>(voidSelf);
    Vtb_LOPD_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
