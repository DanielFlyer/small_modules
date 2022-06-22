// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTR__SYMS_H_
#define VERILATED_VSHIFTR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshiftr.h"

// INCLUDE MODULE CLASSES
#include "Vshiftr___024root.h"

// SYMS CLASS (contains all model state)
class Vshiftr__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshiftr* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshiftr___024root              TOP;

    // CONSTRUCTORS
    Vshiftr__Syms(VerilatedContext* contextp, const char* namep, Vshiftr* modelp);
    ~Vshiftr__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
