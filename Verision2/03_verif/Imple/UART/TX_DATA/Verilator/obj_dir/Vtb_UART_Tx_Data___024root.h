// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_UART_Tx_Data.h for the primary calling header

#ifndef VERILATED_VTB_UART_TX_DATA___024ROOT_H_
#define VERILATED_VTB_UART_TX_DATA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_UART_Tx_Data__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_UART_Tx_Data___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    CData/*0:0*/ tb_UART_Tx_Data__DOT__i_clk;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__i_rst_n;
    VL_IN8(i_start,0,0);
    VL_IN8(i_done,0,0);
    VL_OUT8(o_w_start,0,0);
    CData/*0:0*/ tb_UART_Tx_Data__DOT__o_stick;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__i_tx_en;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__o_tx_data;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__o_tx_done;
    CData/*1:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd;
    CData/*1:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__ptr_rd_n;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__w_tx_done;
    CData/*2:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__state;
    CData/*2:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_state;
    CData/*3:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__index;
    CData/*3:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_index;
    CData/*4:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__count;
    CData/*4:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__n_count;
    CData/*0:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_update_start;
    CData/*7:0*/ tb_UART_Tx_Data__DOT__DUT__DOT__UART_TX_UNIT__DOT__w_i_data;
    CData/*0:0*/ UART_SS_detect_start__DOT__w_start_save;
    CData/*0:0*/ UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_p_signal;
    CData/*0:0*/ UART_SS_detect_start__DOT__SS_detect_edge_unit__DOT__w_n_signal;
    CData/*0:0*/ UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
    CData/*0:0*/ UART_SS_detect_start__DOT__SS_detect_edge_unit_2__DOT__w_n_signal;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_UART_Tx_Data__DOT__i_rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_UART_Tx_Data__DOT__i_data;
    IData/*23:0*/ tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__bdr_count;
    IData/*23:0*/ tb_UART_Tx_Data__DOT__UART_BAUD_GEN_UNIT__DOT__n_bdr_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> tb_UART_Tx_Data__DOT__DUT__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha3f78262__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_UART_Tx_Data__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_UART_Tx_Data___024root(Vtb_UART_Tx_Data__Syms* symsp, const char* v__name);
    ~Vtb_UART_Tx_Data___024root();
    VL_UNCOPYABLE(Vtb_UART_Tx_Data___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
