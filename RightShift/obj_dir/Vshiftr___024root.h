// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshiftr.h for the primary calling header

#ifndef VERILATED_VSHIFTR___024ROOT_H_
#define VERILATED_VSHIFTR___024ROOT_H_  // guard

#include "verilated.h"

class Vshiftr__Syms;
VL_MODULE(Vshiftr___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(alu_op_i,3,0);
    VL_IN(alu_a_i,31,0);
    VL_IN(alu_b_i,31,0);
    VL_OUT(alu_p_o,31,0);

    // INTERNAL VARIABLES
    Vshiftr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshiftr___024root(Vshiftr__Syms* symsp, const char* name);
    ~Vshiftr___024root();
    VL_UNCOPYABLE(Vshiftr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
