// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivider.h for the primary calling header

#ifndef VERILATED_VDIVIDER___024ROOT_H_
#define VERILATED_VDIVIDER___024ROOT_H_  // guard

#include "verilated.h"

class Vdivider__Syms;
VL_MODULE(Vdivider___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(src1,7,0);
    VL_IN8(src2,7,0);
    VL_OUT8(desOv,0,0);
    VL_OUT8(des1,7,0);
    VL_OUT8(des2,7,0);
    CData/*7:0*/ divider__DOT__rem0;
    CData/*7:0*/ divider__DOT__div_out;
    CData/*1:0*/ divider__DOT__cycle;
    CData/*5:0*/ divider__DOT__tmp_div;
    CData/*7:0*/ divider__DOT__tmp_rem;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vdivider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdivider___024root(Vdivider__Syms* symsp, const char* name);
    ~Vdivider___024root();
    VL_UNCOPYABLE(Vdivider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
