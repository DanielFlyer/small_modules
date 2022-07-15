// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfht.h for the primary calling header

#ifndef VERILATED_VFHT___024ROOT_H_
#define VERILATED_VFHT___024ROOT_H_  // guard

#include "verilated.h"

class Vfht__Syms;
VL_MODULE(Vfht___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    CData/*7:0*/ fht__DOT__data_d;
    CData/*7:0*/ fht__DOT__comp_d;
    CData/*7:0*/ fht__DOT__temp_d;
    CData/*7:0*/ fht__DOT__temp;
    CData/*1:0*/ fht__DOT__cnt;
    CData/*0:0*/ fht__DOT__data_valid;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vfht__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfht___024root(Vfht__Syms* symsp, const char* name);
    ~Vfht___024root();
    VL_UNCOPYABLE(Vfht___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
