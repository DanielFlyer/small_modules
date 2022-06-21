// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshiftl.h for the primary calling header

#ifndef VERILATED_VSHIFTL___024ROOT_H_
#define VERILATED_VSHIFTL___024ROOT_H_  // guard

#include "verilated.h"

class Vshiftl__Syms;
VL_MODULE(Vshiftl___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(alu_op_i,3,0);
    VL_IN(alu_a_i,31,0);
    VL_IN(alu_b_i,31,0);
    VL_OUT(alu_p_o,31,0);

    // INTERNAL VARIABLES
    Vshiftl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshiftl___024root(Vshiftl__Syms* symsp, const char* name);
    ~Vshiftl___024root();
    VL_UNCOPYABLE(Vshiftl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
