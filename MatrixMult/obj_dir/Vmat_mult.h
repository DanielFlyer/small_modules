// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMAT_MULT_H_
#define VERILATED_VMAT_MULT_H_  // guard

#include "verilated.h"

class Vmat_mult__Syms;
class Vmat_mult___024root;

// This class is the main interface to the Verilated model
class Vmat_mult VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmat_mult__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_80,0,0);
    VL_IN8(&rst_80,0,0);
    VL_IN8(&B00_80,7,0);
    VL_IN8(&B01_80,7,0);
    VL_IN8(&B02_80,7,0);
    VL_IN8(&B03_80,7,0);
    VL_IN16(&A00_80,8,0);
    VL_IN16(&A01_80,8,0);
    VL_IN16(&A02_80,8,0);
    VL_IN16(&A03_80,8,0);
    VL_OUT16(&AB00_80,10,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmat_mult___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmat_mult(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmat_mult(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmat_mult();
  private:
    VL_UNCOPYABLE(Vmat_mult);  ///< Copying not allowed

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
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
