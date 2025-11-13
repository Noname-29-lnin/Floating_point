// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_UART_Rx_Data.h for the primary calling header

#ifndef VERILATED_VTB_UART_RX_DATA___024ROOT_H_
#define VERILATED_VTB_UART_RX_DATA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_UART_Rx_Data__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_UART_Rx_Data___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(UART_Rx_Test__02Ei_clk,0,0);
        VL_IN8(UART_Rx_Test__02Ei_rst_n,0,0);
        VL_IN8(UART_Tx_Data__02Ei_clk,0,0);
        VL_IN8(UART_Tx_Data__02Ei_rst_n,0,0);
        CData/*0:0*/ tb_UART_Rx_Data__DOT__i_clk;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__i_rst_n;
        VL_IN8(UART_Rx_Test__02Ei_stick,0,0);
        VL_IN8(i_rx_en,0,0);
        VL_IN8(i_fifo_full,0,0);
        VL_IN8(i_rx_data,0,0);
        VL_OUT8(o_rx_done,0,0);
        VL_IN8(UART_Tx_Data__02Ei_stick,0,0);
        VL_IN8(i_tx_en,0,0);
        VL_OUT8(o_tx_data,0,0);
        VL_OUT8(o_tx_done,0,0);
        CData/*0:0*/ tb_UART_Rx_Data__DOT__i_stick;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__i_sel_data;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__i_tx_en;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__o_tx_data;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__o_tx_done;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__o_done_a;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__o_done_b;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__o_rx_done;
        CData/*7:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_i_data;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__w_done_tx;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_enable;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__w_update;
        CData/*1:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd;
        CData/*1:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ptr_rd_n;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__w_start_save;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal;
        CData/*2:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__state;
        CData/*2:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_state;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__index;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_index;
        CData/*4:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__count;
        CData/*4:0*/ tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__UART_TX_UNIT__DOT__n_count;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_wr_fifo_mem;
        CData/*7:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__w_data_fifo_mem;
        CData/*2:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__state;
        CData/*2:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_state;
        CData/*4:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__count;
        CData/*4:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_count;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__index;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__n_index;
        CData/*7:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__w_o_rx_data;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr;
        CData/*3:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__ptr_wr_n;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__w_en_a;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__w_start_save;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit__DOT__w_n_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
        CData/*0:0*/ tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_DETECT_DONE__DOT__SS_DETECT_START_A__DOT__SS_detect_edge_unit_2__DOT__w_n_signal;
        CData/*0:0*/ UART_Rx_Test__DOT__w_done_rx;
        CData/*7:0*/ UART_Rx_Test__DOT__w_o_rx_data;
        CData/*2:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__state;
        CData/*2:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_state;
        CData/*4:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__count;
    };
    struct {
        CData/*4:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_count;
        CData/*3:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__index;
        CData/*3:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__n_index;
        CData/*7:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__w_o_rx_data;
        CData/*0:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_p_signal;
        CData/*0:0*/ UART_Rx_Test__DOT__UART_RX_UNIT__DOT__UART_DETECT_NEG__DOT__w_n_signal;
        CData/*1:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr;
        CData/*1:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ptr_wr_n;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__w_enable;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__w_update;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__w_start_save;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_p_signal;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit__DOT__w_n_signal;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_p_signal;
        CData/*0:0*/ UART_Rx_Test__DOT__FIFO_RX__DOT__ENABLE_FIFO_WORK__DOT__SS_detect_edge_unit_2__DOT__w_n_signal;
        CData/*1:0*/ UART_Tx_Data__DOT__ptr_rd;
        CData/*1:0*/ UART_Tx_Data__DOT__ptr_rd_n;
        CData/*0:0*/ UART_Tx_Data__DOT__w_tx_done;
        CData/*2:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__state;
        CData/*2:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_state;
        CData/*3:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__index;
        CData/*3:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_index;
        CData/*4:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__count;
        CData/*4:0*/ UART_Tx_Data__DOT__UART_TX_UNIT__DOT__n_count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_UART_Rx_Data__DOT__i_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__UART_Rx_Test__02Ei_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__UART_Tx_Data__02Ei_rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(i_data,31,0);
        IData/*31:0*/ tb_UART_Rx_Data__DOT__o_data_a;
        IData/*31:0*/ tb_UART_Rx_Data__DOT__o_data_b;
        IData/*23:0*/ tb_UART_Rx_Data__DOT__UART_BND__DOT__bdr_count;
        IData/*23:0*/ tb_UART_Rx_Data__DOT__UART_BND__DOT__n_bdr_count;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4> tb_UART_Rx_Data__DOT__UART_TX_TEST__DOT__FIFO_TEST__DOT__ram;
        VlUnpacked<CData/*7:0*/, 16> tb_UART_Rx_Data__DOT__UART_RX_DATA__DOT__UART_MEM_UNIT__DOT__mem_reg;
        VlUnpacked<CData/*7:0*/, 4> UART_Rx_Test__DOT__FIFO_RX__DOT__ram;
        VlUnpacked<CData/*7:0*/, 4> UART_Tx_Data__DOT__mem;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2c5f5118__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_UART_Rx_Data__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_UART_Rx_Data___024root(Vtb_UART_Rx_Data__Syms* symsp, const char* v__name);
    ~Vtb_UART_Rx_Data___024root();
    VL_UNCOPYABLE(Vtb_UART_Rx_Data___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
