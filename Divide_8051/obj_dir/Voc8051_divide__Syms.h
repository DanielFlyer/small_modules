// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOC8051_DIVIDE__SYMS_H_
#define VERILATED_VOC8051_DIVIDE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Voc8051_divide.h"

// INCLUDE MODULE CLASSES
#include "Voc8051_divide___024root.h"

// SYMS CLASS (contains all model state)
class Voc8051_divide__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Voc8051_divide* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Voc8051_divide___024root       TOP;

    // CONSTRUCTORS
    Voc8051_divide__Syms(VerilatedContext* contextp, const char* namep, Voc8051_divide* modelp);
    ~Voc8051_divide__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
