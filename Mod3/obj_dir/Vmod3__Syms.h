// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMOD3__SYMS_H_
#define VERILATED_VMOD3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmod3.h"

// INCLUDE MODULE CLASSES
#include "Vmod3___024root.h"

// SYMS CLASS (contains all model state)
class Vmod3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmod3* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmod3___024root                TOP;

    // CONSTRUCTORS
    Vmod3__Syms(VerilatedContext* contextp, const char* namep, Vmod3* modelp);
    ~Vmod3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
