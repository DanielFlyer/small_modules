// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVEDIC8X8__SYMS_H_
#define VERILATED_VVEDIC8X8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvedic8x8.h"

// INCLUDE MODULE CLASSES
#include "Vvedic8x8___024root.h"

// SYMS CLASS (contains all model state)
class Vvedic8x8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvedic8x8* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvedic8x8___024root            TOP;

    // CONSTRUCTORS
    Vvedic8x8__Syms(VerilatedContext* contextp, const char* namep, Vvedic8x8* modelp);
    ~Vvedic8x8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
