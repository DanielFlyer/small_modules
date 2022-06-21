// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTL__SYMS_H_
#define VERILATED_VSHIFTL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshiftl.h"

// INCLUDE MODULE CLASSES
#include "Vshiftl___024root.h"

// SYMS CLASS (contains all model state)
class Vshiftl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshiftl* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshiftl___024root              TOP;

    // CONSTRUCTORS
    Vshiftl__Syms(VerilatedContext* contextp, const char* namep, Vshiftl* modelp);
    ~Vshiftl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
