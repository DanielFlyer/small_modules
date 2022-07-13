// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvedic8x8.h for the primary calling header

#ifndef VERILATED_VVEDIC8X8___024ROOT_H_
#define VERILATED_VVEDIC8X8___024ROOT_H_  // guard

#include "verilated.h"

class Vvedic8x8__Syms;
VL_MODULE(Vvedic8x8___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    CData/*3:0*/ vedic8x8__DOT__VD0__DOT__sum0;
    CData/*5:0*/ vedic8x8__DOT__VD0__DOT__sum1;
    CData/*5:0*/ vedic8x8__DOT__VD0__DOT__sum2;
    CData/*3:0*/ vedic8x8__DOT__VD1__DOT__sum0;
    CData/*5:0*/ vedic8x8__DOT__VD1__DOT__sum1;
    CData/*5:0*/ vedic8x8__DOT__VD1__DOT__sum2;
    CData/*3:0*/ vedic8x8__DOT__VD2__DOT__sum0;
    CData/*5:0*/ vedic8x8__DOT__VD2__DOT__sum1;
    CData/*5:0*/ vedic8x8__DOT__VD2__DOT__sum2;
    CData/*3:0*/ vedic8x8__DOT__VD3__DOT__sum0;
    CData/*5:0*/ vedic8x8__DOT__VD3__DOT__sum1;
    CData/*5:0*/ vedic8x8__DOT__VD3__DOT__sum2;
    CData/*3:0*/ vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4;
    CData/*3:0*/ vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4;
    CData/*5:0*/ vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4;
    CData/*5:0*/ vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4;
    CData/*5:0*/ vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4;
    CData/*5:0*/ vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4;
    VL_OUT16(prod,15,0);

    // INTERNAL VARIABLES
    Vvedic8x8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvedic8x8___024root(Vvedic8x8__Syms* symsp, const char* name);
    ~Vvedic8x8___024root();
    VL_UNCOPYABLE(Vvedic8x8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
