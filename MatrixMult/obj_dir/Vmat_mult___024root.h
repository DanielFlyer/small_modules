// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmat_mult.h for the primary calling header

#ifndef VERILATED_VMAT_MULT___024ROOT_H_
#define VERILATED_VMAT_MULT___024ROOT_H_  // guard

#include "verilated.h"

class Vmat_mult__Syms;
VL_MODULE(Vmat_mult___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_80,0,0);
    VL_IN8(rst_80,0,0);
    VL_IN8(B00_80,7,0);
    VL_IN8(B01_80,7,0);
    VL_IN8(B02_80,7,0);
    VL_IN8(B03_80,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk_80;
    CData/*0:0*/ __Vclklast__TOP__rst_80;
    VL_IN16(A00_80,8,0);
    VL_IN16(A01_80,8,0);
    VL_IN16(A02_80,8,0);
    VL_IN16(A03_80,8,0);
    VL_OUT16(AB00_80,10,0);
    SData/*10:0*/ mat_mult__DOT__a2_in_80;

    // INTERNAL VARIABLES
    Vmat_mult__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmat_mult___024root(Vmat_mult__Syms* symsp, const char* name);
    ~Vmat_mult___024root();
    VL_UNCOPYABLE(Vmat_mult___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
