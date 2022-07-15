// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFHT__SYMS_H_
#define VERILATED_VFHT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfht.h"

// INCLUDE MODULE CLASSES
#include "Vfht___024root.h"

// SYMS CLASS (contains all model state)
class Vfht__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfht* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfht___024root                 TOP;

    // CONSTRUCTORS
    Vfht__Syms(VerilatedContext* contextp, const char* namep, Vfht* modelp);
    ~Vfht__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
