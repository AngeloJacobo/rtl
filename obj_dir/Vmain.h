// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMAIN_H_
#define VERILATED_VMAIN_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vmain__Syms;
class Vmain___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vmain VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmain__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&i_clk,0,0);
    VL_IN8(&i_reset,0,0);
    VL_IN8(&i_ddr3_controller_idelayctrl_rdy,0,0);
    VL_OUT8(&o_ddr3_controller_dqs_tri_control,0,0);
    VL_OUT8(&o_ddr3_controller_dq_tri_control,0,0);
    VL_OUT8(&o_ddr3_controller_toggle_dqs,0,0);
    VL_OUT8(&o_ddr3_controller_odelay_data_cntvaluein,4,0);
    VL_OUT8(&o_ddr3_controller_odelay_dqs_cntvaluein,4,0);
    VL_OUT8(&o_ddr3_controller_idelay_data_cntvaluein,4,0);
    VL_OUT8(&o_ddr3_controller_idelay_dqs_cntvaluein,4,0);
    VL_OUT8(&o_ddr3_controller_odelay_data_ld,7,0);
    VL_OUT8(&o_ddr3_controller_odelay_dqs_ld,7,0);
    VL_OUT8(&o_ddr3_controller_idelay_data_ld,7,0);
    VL_OUT8(&o_ddr3_controller_idelay_dqs_ld,7,0);
    VL_OUT8(&o_ddr3_controller_bitslip,7,0);
    VL_OUT8(&o_sirefclk_word,7,0);
    VL_OUT8(&o_sirefclk_ce,0,0);
    VL_IN8(&i_fan_sda,0,0);
    VL_IN8(&i_fan_scl,0,0);
    VL_OUT8(&o_fan_sda,0,0);
    VL_OUT8(&o_fan_scl,0,0);
    VL_OUT8(&o_fpga_pwm,0,0);
    VL_OUT8(&o_sys_pwm,0,0);
    VL_IN8(&i_fan_tach,0,0);
    VL_IN8(&i_i2c_sda,0,0);
    VL_IN8(&i_i2c_scl,0,0);
    VL_OUT8(&o_i2c_sda,0,0);
    VL_OUT8(&o_i2c_scl,0,0);
    VL_IN8(&cpu_sim_cyc,0,0);
    VL_IN8(&cpu_sim_stb,0,0);
    VL_IN8(&cpu_sim_we,0,0);
    VL_IN8(&cpu_sim_addr,6,0);
    VL_OUT8(&cpu_sim_stall,0,0);
    VL_OUT8(&cpu_sim_ack,0,0);
    VL_OUT8(&cpu_prof_stb,0,0);
    VL_IN8(&i_cpu_reset,0,0);
    VL_IN8(&i_clk200,0,0);
    VL_IN8(&i_wbu_uart_rx,0,0);
    VL_OUT8(&o_wbu_uart_tx,0,0);
    VL_OUT8(&o_wbu_uart_cts_n,0,0);
    VL_OUT8(&o_gpio,7,0);
    VL_IN8(&i_sw,7,0);
    VL_IN8(&i_btn,4,0);
    VL_OUT8(&o_led,7,0);
    VL_IN16(&i_gpio,15,0);
    VL_INW(&i_ddr3_controller_iserdes_data,511,0,16);
    VL_OUTW(&o_ddr3_controller_cmd,95,0,3);
    VL_OUTW(&o_ddr3_controller_data,511,0,16);
    VL_IN(&cpu_sim_data,31,0);
    VL_OUT(&cpu_sim_idata,31,0);
    VL_OUT(&cpu_prof_addr,30,0);
    VL_OUT(&cpu_prof_ticks,31,0);
    VL_IN64(&i_ddr3_controller_iserdes_dqs,63,0);
    VL_IN64(&i_ddr3_controller_iserdes_bitslip_reference,63,0);
    VL_OUT64(&o_ddr3_controller_dm,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmain___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmain(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmain(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmain();
  private:
    VL_UNCOPYABLE(Vmain);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
