// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmod3.h for the primary calling header

#ifndef VERILATED_VMOD3___024ROOT_H_
#define VERILATED_VMOD3___024ROOT_H_  // guard

#include "verilated.h"

class Vmod3__Syms;
VL_MODULE(Vmod3___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(dat_i,7,0);
    VL_OUT8(reminder,1,0);

    // INTERNAL VARIABLES
    Vmod3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmod3___024root(Vmod3__Syms* symsp, const char* name);
    ~Vmod3___024root();
    VL_UNCOPYABLE(Vmod3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
