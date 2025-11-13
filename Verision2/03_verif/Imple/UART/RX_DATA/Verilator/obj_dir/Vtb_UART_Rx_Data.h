// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_UART_RX_DATA_H_
#define VERILATED_VTB_UART_RX_DATA_H_  // guard

#include "verilated.h"

class Vtb_UART_Rx_Data__Syms;
class Vtb_UART_Rx_Data___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_UART_Rx_Data VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_UART_Rx_Data__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&UART_Rx_Test__02Ei_clk,0,0);
    VL_IN8(&UART_Rx_Test__02Ei_rst_n,0,0);
    VL_IN8(&UART_Tx_Data__02Ei_clk,0,0);
    VL_IN8(&UART_Tx_Data__02Ei_rst_n,0,0);
    VL_IN8(&UART_Rx_Test__02Ei_stick,0,0);
    VL_IN8(&i_rx_en,0,0);
    VL_IN8(&i_fifo_full,0,0);
    VL_IN8(&i_rx_data,0,0);
    VL_OUT8(&o_rx_done,0,0);
    VL_IN8(&UART_Tx_Data__02Ei_stick,0,0);
    VL_IN8(&i_tx_en,0,0);
    VL_OUT8(&o_tx_data,0,0);
    VL_OUT8(&o_tx_done,0,0);
    VL_IN(&i_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_UART_Rx_Data___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_UART_Rx_Data(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_UART_Rx_Data(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_UART_Rx_Data();
  private:
    VL_UNCOPYABLE(Vtb_UART_Rx_Data);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
