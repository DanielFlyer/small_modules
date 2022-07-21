// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAT_MULT__SYMS_H_
#define VERILATED_VMAT_MULT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmat_mult.h"

// INCLUDE MODULE CLASSES
#include "Vmat_mult___024root.h"

// SYMS CLASS (contains all model state)
class Vmat_mult__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmat_mult* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmat_mult___024root            TOP;

    // CONSTRUCTORS
    Vmat_mult__Syms(VerilatedContext* contextp, const char* namep, Vmat_mult* modelp);
    ~Vmat_mult__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
