// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvedic8x8.h for the primary calling header

#include "verilated.h"

#include "Vvedic8x8___024root.h"

VL_INLINE_OPT void Vvedic8x8___024root___combo__TOP__0(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___combo__TOP__0\n"); );
    // Init
    CData/*7:0*/ vedic8x8__DOT__mult0;
    CData/*7:0*/ vedic8x8__DOT__mult1;
    CData/*7:0*/ vedic8x8__DOT__mult2;
    CData/*7:0*/ vedic8x8__DOT__mult3;
    CData/*7:0*/ vedic8x8__DOT__sum0;
    SData/*11:0*/ vedic8x8__DOT__sum1;
    SData/*11:0*/ vedic8x8__DOT__sum2;
    CData/*3:0*/ vedic8x8__DOT__VD0__DOT__mult0;
    CData/*3:0*/ vedic8x8__DOT__VD0__DOT__mult1;
    CData/*3:0*/ vedic8x8__DOT__VD0__DOT__mult2;
    CData/*3:0*/ vedic8x8__DOT__VD0__DOT__mult3;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD0__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD0__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD1__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD1__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD2__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD2__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD3__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__VD3__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA1__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD0__DOT__RA2__DOT__FA4__DOT__sum1;
    CData/*3:0*/ vedic8x8__DOT__VD1__DOT__mult0;
    CData/*3:0*/ vedic8x8__DOT__VD1__DOT__mult1;
    CData/*3:0*/ vedic8x8__DOT__VD1__DOT__mult2;
    CData/*3:0*/ vedic8x8__DOT__VD1__DOT__mult3;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD0__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD0__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD1__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD1__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD2__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD2__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD3__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__VD3__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA1__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD1__DOT__RA2__DOT__FA4__DOT__sum1;
    CData/*3:0*/ vedic8x8__DOT__VD2__DOT__mult0;
    CData/*3:0*/ vedic8x8__DOT__VD2__DOT__mult1;
    CData/*3:0*/ vedic8x8__DOT__VD2__DOT__mult2;
    CData/*3:0*/ vedic8x8__DOT__VD2__DOT__mult3;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD0__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD0__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD1__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD1__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD2__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD2__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD3__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__VD3__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA1__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD2__DOT__RA2__DOT__FA4__DOT__sum1;
    CData/*3:0*/ vedic8x8__DOT__VD3__DOT__mult0;
    CData/*3:0*/ vedic8x8__DOT__VD3__DOT__mult1;
    CData/*3:0*/ vedic8x8__DOT__VD3__DOT__mult2;
    CData/*3:0*/ vedic8x8__DOT__VD3__DOT__mult3;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD0__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD0__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD1__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD1__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD2__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD2__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD3__DOT__a0b1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b0;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__VD3__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA1__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__VD3__DOT__RA2__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA0__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__FA0__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA0__DOT__RA1__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA0__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA0__DOT__FA5__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__FA0__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA1__DOT__RA1__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__carry;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA0__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA4__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA0__DOT__FA5__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__carry1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__carry2;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__carry3;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__carry4;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__carry5;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__FA0__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__FA1__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__FA2__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__FA3__DOT__sum1;
    CData/*0:0*/ vedic8x8__DOT__RA2__DOT__RA1__DOT__FA4__DOT__sum1;
    // Body
    vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 1U)));
    vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 3U)));
    vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 3U));
    vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 5U)));
    vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 7U));
    vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 1U));
    vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 5U));
    vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 3U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 5U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 1U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD2__DOT__VD2__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b0 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & (IData)(vlSelf->b)));
    vedic8x8__DOT__VD2__DOT__VD3__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b0 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 2U)));
    vedic8x8__DOT__VD0__DOT__VD2__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->b)));
    vedic8x8__DOT__VD0__DOT__VD3__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)));
    vedic8x8__DOT__VD3__DOT__VD2__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b0 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 4U)));
    vedic8x8__DOT__VD3__DOT__VD3__DOT__a0b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 6U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b0 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 6U)));
    vedic8x8__DOT__VD2__DOT__VD0__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & (IData)(vlSelf->b)));
    vedic8x8__DOT__VD0__DOT__VD0__DOT__a0b1 = (1U & 
                                               ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)));
    vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->b)));
    vedic8x8__DOT__VD3__DOT__VD0__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)));
    vedic8x8__DOT__VD1__DOT__VD2__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)));
    vedic8x8__DOT__VD1__DOT__VD3__DOT__a0b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    vedic8x8__DOT__VD1__DOT__VD0__DOT__a0b1 = (1U & 
                                               ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 5U)));
    vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)));
    vedic8x8__DOT__VD2__DOT__VD1__DOT__a0b1 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)));
    vedic8x8__DOT__VD0__DOT__VD1__DOT__a0b1 = (1U & 
                                               ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)));
    vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)));
    vedic8x8__DOT__VD3__DOT__VD1__DOT__a0b1 = (IData)(
                                                      (((IData)(vlSelf->a) 
                                                        >> 4U) 
                                                       & ((IData)(vlSelf->b) 
                                                          >> 7U)));
    vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 5U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    vedic8x8__DOT__VD1__DOT__VD1__DOT__a0b1 = ((IData)(vlSelf->a) 
                                               & ((IData)(vlSelf->b) 
                                                  >> 7U));
    vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b0 = (1U & 
                                               (((IData)(vlSelf->a) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)));
    vedic8x8__DOT__VD2__DOT__VD2__DOT__carry = ((IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b0));
    vedic8x8__DOT__VD2__DOT__VD3__DOT__carry = ((IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b0));
    vedic8x8__DOT__VD0__DOT__VD2__DOT__carry = ((IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b0));
    vedic8x8__DOT__VD0__DOT__VD3__DOT__carry = ((IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b0));
    vedic8x8__DOT__VD3__DOT__VD2__DOT__carry = ((IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b0));
    vedic8x8__DOT__VD3__DOT__VD3__DOT__carry = ((IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b0));
    vedic8x8__DOT__VD2__DOT__VD0__DOT__carry = ((IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b0));
    vedic8x8__DOT__VD0__DOT__VD0__DOT__carry = ((IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b0));
    vedic8x8__DOT__VD3__DOT__VD0__DOT__carry = ((IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b0));
    vedic8x8__DOT__VD1__DOT__VD2__DOT__carry = ((IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b0));
    vedic8x8__DOT__VD1__DOT__VD3__DOT__carry = ((IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b0));
    vedic8x8__DOT__VD1__DOT__VD0__DOT__carry = ((IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b0));
    vedic8x8__DOT__VD2__DOT__VD1__DOT__carry = ((IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b0));
    vedic8x8__DOT__VD0__DOT__VD1__DOT__carry = ((IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b0));
    vedic8x8__DOT__VD3__DOT__VD1__DOT__carry = ((IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b0));
    vedic8x8__DOT__VD1__DOT__VD1__DOT__carry = ((IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a0b1) 
                                                & (IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b0));
    vedic8x8__DOT__VD2__DOT__mult2 = (((((IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD2__DOT__VD2__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & (IData)(vlSelf->b)))));
    vedic8x8__DOT__VD2__DOT__mult3 = (((((IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD2__DOT__VD3__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)))));
    vedic8x8__DOT__VD0__DOT__mult2 = (((((IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD0__DOT__VD2__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->b)))));
    vedic8x8__DOT__VD0__DOT__mult3 = (((((IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD0__DOT__VD3__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 2U))));
    vedic8x8__DOT__VD3__DOT__mult2 = (((((IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD3__DOT__VD2__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 6U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)))));
    vedic8x8__DOT__VD3__DOT__mult3 = (((((IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD3__DOT__VD3__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 6U))));
    vedic8x8__DOT__VD2__DOT__mult0 = (((((IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD2__DOT__VD0__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & (IData)(vlSelf->b)))));
    vedic8x8__DOT__VD0__DOT__mult0 = (((((IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD0__DOT__VD0__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelf->a) 
                                                & (IData)(vlSelf->b)))));
    vedic8x8__DOT__VD3__DOT__mult0 = (((((IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD3__DOT__VD0__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 4U))));
    vedic8x8__DOT__VD1__DOT__mult2 = (((((IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD1__DOT__VD2__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)))));
    vedic8x8__DOT__VD1__DOT__mult3 = (((((IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD1__DOT__VD3__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)))));
    vedic8x8__DOT__VD1__DOT__mult0 = (((((IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD1__DOT__VD0__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 4U)))));
    vedic8x8__DOT__VD2__DOT__mult1 = (((((IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD2__DOT__VD1__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)))));
    vedic8x8__DOT__VD0__DOT__mult1 = (((((IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD0__DOT__VD1__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)))));
    vedic8x8__DOT__VD3__DOT__mult1 = (((((IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD3__DOT__VD1__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & (((IData)(vlSelf->a) 
                                                 >> 4U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)))));
    vedic8x8__DOT__VD1__DOT__mult1 = (((((IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b1) 
                                         & (IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__carry)) 
                                        << 3U) | (((IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b1) 
                                                   ^ (IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__carry)) 
                                                  << 2U)) 
                                      | ((((IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a0b1) 
                                           ^ (IData)(vedic8x8__DOT__VD1__DOT__VD1__DOT__a1b0)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelf->a) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 6U)))));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum0 = ((0xeU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0)) 
                                             | (1U 
                                                & ((3U 
                                                    & ((IData)(vedic8x8__DOT__VD2__DOT__mult0) 
                                                       >> 2U)) 
                                                   ^ (IData)(vedic8x8__DOT__VD2__DOT__mult2))));
    vedic8x8__DOT__VD2__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD2__DOT__mult2) 
                 >> 2U));
    vedic8x8__DOT__VD2__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & (((IData)(vedic8x8__DOT__VD2__DOT__mult0) 
                  >> 2U) & (IData)(vedic8x8__DOT__VD2__DOT__mult2)));
    vedic8x8__DOT__VD2__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD2__DOT__mult0) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD2__DOT__mult2) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum0 = ((0xeU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0)) 
                                             | (1U 
                                                & ((3U 
                                                    & ((IData)(vedic8x8__DOT__VD0__DOT__mult0) 
                                                       >> 2U)) 
                                                   ^ (IData)(vedic8x8__DOT__VD0__DOT__mult2))));
    vedic8x8__DOT__VD0__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD0__DOT__mult2) 
                 >> 2U));
    vedic8x8__DOT__VD0__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & (((IData)(vedic8x8__DOT__VD0__DOT__mult0) 
                  >> 2U) & (IData)(vedic8x8__DOT__VD0__DOT__mult2)));
    vedic8x8__DOT__VD0__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD0__DOT__mult0) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD0__DOT__mult2) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum0 = ((0xeU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0)) 
                                             | (1U 
                                                & ((3U 
                                                    & ((IData)(vedic8x8__DOT__VD3__DOT__mult0) 
                                                       >> 2U)) 
                                                   ^ (IData)(vedic8x8__DOT__VD3__DOT__mult2))));
    vedic8x8__DOT__VD3__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD3__DOT__mult2) 
                 >> 2U));
    vedic8x8__DOT__VD3__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & (((IData)(vedic8x8__DOT__VD3__DOT__mult0) 
                  >> 2U) & (IData)(vedic8x8__DOT__VD3__DOT__mult2)));
    vedic8x8__DOT__VD3__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD3__DOT__mult0) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD3__DOT__mult2) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum0 = ((0xeU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0)) 
                                             | (1U 
                                                & ((3U 
                                                    & ((IData)(vedic8x8__DOT__VD1__DOT__mult0) 
                                                       >> 2U)) 
                                                   ^ (IData)(vedic8x8__DOT__VD1__DOT__mult2))));
    vedic8x8__DOT__VD1__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD1__DOT__mult2) 
                 >> 2U));
    vedic8x8__DOT__VD1__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & (((IData)(vedic8x8__DOT__VD1__DOT__mult0) 
                  >> 2U) & (IData)(vedic8x8__DOT__VD1__DOT__mult2)));
    vedic8x8__DOT__VD1__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD1__DOT__mult0) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD1__DOT__mult2) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum1 = ((0x3cU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                             | (3U 
                                                & (IData)(vedic8x8__DOT__VD2__DOT__mult1)));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum1 = ((0x3bU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                             | (4U 
                                                & ((0xfffffffcU 
                                                    & (IData)(vedic8x8__DOT__VD2__DOT__mult1)) 
                                                   ^ 
                                                   ((IData)(vedic8x8__DOT__VD2__DOT__mult3) 
                                                    << 2U))));
    vedic8x8__DOT__VD2__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD2__DOT__mult3) 
                 >> 2U));
    vedic8x8__DOT__VD2__DOT__RA1__DOT__carry3 = (1U 
                                                 & (((IData)(vedic8x8__DOT__VD2__DOT__mult1) 
                                                     >> 2U) 
                                                    & (IData)(vedic8x8__DOT__VD2__DOT__mult3)));
    vedic8x8__DOT__VD2__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD2__DOT__mult1) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD2__DOT__mult3) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum1 = ((0x3cU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                             | (3U 
                                                & (IData)(vedic8x8__DOT__VD0__DOT__mult1)));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum1 = ((0x3bU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                             | (4U 
                                                & ((0xfffffffcU 
                                                    & (IData)(vedic8x8__DOT__VD0__DOT__mult1)) 
                                                   ^ 
                                                   ((IData)(vedic8x8__DOT__VD0__DOT__mult3) 
                                                    << 2U))));
    vedic8x8__DOT__VD0__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD0__DOT__mult3) 
                 >> 2U));
    vedic8x8__DOT__VD0__DOT__RA1__DOT__carry3 = (1U 
                                                 & (((IData)(vedic8x8__DOT__VD0__DOT__mult1) 
                                                     >> 2U) 
                                                    & (IData)(vedic8x8__DOT__VD0__DOT__mult3)));
    vedic8x8__DOT__VD0__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD0__DOT__mult1) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD0__DOT__mult3) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum1 = ((0x3cU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                             | (3U 
                                                & (IData)(vedic8x8__DOT__VD3__DOT__mult1)));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum1 = ((0x3bU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                             | (4U 
                                                & ((0xfffffffcU 
                                                    & (IData)(vedic8x8__DOT__VD3__DOT__mult1)) 
                                                   ^ 
                                                   ((IData)(vedic8x8__DOT__VD3__DOT__mult3) 
                                                    << 2U))));
    vedic8x8__DOT__VD3__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD3__DOT__mult3) 
                 >> 2U));
    vedic8x8__DOT__VD3__DOT__RA1__DOT__carry3 = (1U 
                                                 & (((IData)(vedic8x8__DOT__VD3__DOT__mult1) 
                                                     >> 2U) 
                                                    & (IData)(vedic8x8__DOT__VD3__DOT__mult3)));
    vedic8x8__DOT__VD3__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD3__DOT__mult1) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD3__DOT__mult3) 
                            >> 1U)));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum1 = ((0x3cU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                             | (3U 
                                                & (IData)(vedic8x8__DOT__VD1__DOT__mult1)));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum1 = ((0x3bU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                             | (4U 
                                                & ((0xfffffffcU 
                                                    & (IData)(vedic8x8__DOT__VD1__DOT__mult1)) 
                                                   ^ 
                                                   ((IData)(vedic8x8__DOT__VD1__DOT__mult3) 
                                                    << 2U))));
    vedic8x8__DOT__VD1__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__VD1__DOT__mult3) 
                 >> 2U));
    vedic8x8__DOT__VD1__DOT__RA1__DOT__carry3 = (1U 
                                                 & (((IData)(vedic8x8__DOT__VD1__DOT__mult1) 
                                                     >> 2U) 
                                                    & (IData)(vedic8x8__DOT__VD1__DOT__mult3)));
    vedic8x8__DOT__VD1__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__VD1__DOT__mult1) 
                  >> 3U) ^ ((IData)(vedic8x8__DOT__VD1__DOT__mult3) 
                            >> 1U)));
    vedic8x8__DOT__VD2__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((IData)(
                                                            (((IData)(vedic8x8__DOT__VD2__DOT__mult0) 
                                                              >> 3U) 
                                                             & ((IData)(vedic8x8__DOT__VD2__DOT__mult2) 
                                                                >> 1U))) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD0__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((IData)(
                                                            (((IData)(vedic8x8__DOT__VD0__DOT__mult0) 
                                                              >> 3U) 
                                                             & ((IData)(vedic8x8__DOT__VD0__DOT__mult2) 
                                                                >> 1U))) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD3__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((IData)(
                                                            (((IData)(vedic8x8__DOT__VD3__DOT__mult0) 
                                                              >> 3U) 
                                                             & ((IData)(vedic8x8__DOT__VD3__DOT__mult2) 
                                                                >> 1U))) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD1__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((IData)(
                                                            (((IData)(vedic8x8__DOT__VD1__DOT__mult0) 
                                                              >> 3U) 
                                                             & ((IData)(vedic8x8__DOT__VD1__DOT__mult2) 
                                                                >> 1U))) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD2__DOT__RA1__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__VD2__DOT__mult1) 
                                                      >> 3U) 
                                                     & ((IData)(vedic8x8__DOT__VD2__DOT__mult3) 
                                                        >> 1U)) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__FA3__DOT__sum1))));
    vedic8x8__DOT__VD0__DOT__RA1__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__VD0__DOT__mult1) 
                                                      >> 3U) 
                                                     & ((IData)(vedic8x8__DOT__VD0__DOT__mult3) 
                                                        >> 1U)) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__FA3__DOT__sum1))));
    vedic8x8__DOT__VD3__DOT__RA1__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__VD3__DOT__mult1) 
                                                      >> 3U) 
                                                     & ((IData)(vedic8x8__DOT__VD3__DOT__mult3) 
                                                        >> 1U)) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__FA3__DOT__sum1))));
    vedic8x8__DOT__VD1__DOT__RA1__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__VD1__DOT__mult1) 
                                                      >> 3U) 
                                                     & ((IData)(vedic8x8__DOT__VD1__DOT__mult3) 
                                                        >> 1U)) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum0 = ((9U & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0)) 
                                             | ((((IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__carry2) 
                                                  ^ (IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA2__DOT__sum1)) 
                                                 << 2U) 
                                                | (((IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                    ^ (IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA1__DOT__sum1)) 
                                                   << 1U)));
    vedic8x8__DOT__VD2__DOT__RA0__DOT__carry3 = ((IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__FA2__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum0 = ((9U & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0)) 
                                             | ((((IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__carry2) 
                                                  ^ (IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA2__DOT__sum1)) 
                                                 << 2U) 
                                                | (((IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                    ^ (IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA1__DOT__sum1)) 
                                                   << 1U)));
    vedic8x8__DOT__VD0__DOT__RA0__DOT__carry3 = ((IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__FA2__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum0 = ((9U & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0)) 
                                             | ((((IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__carry2) 
                                                  ^ (IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA2__DOT__sum1)) 
                                                 << 2U) 
                                                | (((IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                    ^ (IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA1__DOT__sum1)) 
                                                   << 1U)));
    vedic8x8__DOT__VD3__DOT__RA0__DOT__carry3 = ((IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__FA2__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum0 = ((9U & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0)) 
                                             | ((((IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__carry2) 
                                                  ^ (IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA2__DOT__sum1)) 
                                                 << 2U) 
                                                | (((IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                    ^ (IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA1__DOT__sum1)) 
                                                   << 1U)));
    vedic8x8__DOT__VD1__DOT__RA0__DOT__carry3 = ((IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__FA2__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum1 = ((0x27U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                             | ((((IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__carry4) 
                                                  ^ (IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__FA4__DOT__sum1)) 
                                                 << 4U) 
                                                | (((IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__carry3) 
                                                    ^ (IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__FA3__DOT__sum1)) 
                                                   << 3U)));
    vedic8x8__DOT__VD2__DOT__RA1__DOT__carry5 = ((IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__carry4) 
                                                 & (IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__FA4__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum1 = ((0x27U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                             | ((((IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__carry4) 
                                                  ^ (IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__FA4__DOT__sum1)) 
                                                 << 4U) 
                                                | (((IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__carry3) 
                                                    ^ (IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__FA3__DOT__sum1)) 
                                                   << 3U)));
    vedic8x8__DOT__VD0__DOT__RA1__DOT__carry5 = ((IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__carry4) 
                                                 & (IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__FA4__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum1 = ((0x27U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                             | ((((IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__carry4) 
                                                  ^ (IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__FA4__DOT__sum1)) 
                                                 << 4U) 
                                                | (((IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__carry3) 
                                                    ^ (IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__FA3__DOT__sum1)) 
                                                   << 3U)));
    vedic8x8__DOT__VD3__DOT__RA1__DOT__carry5 = ((IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__carry4) 
                                                 & (IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__FA4__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum1 = ((0x27U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                             | ((((IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__carry4) 
                                                  ^ (IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__FA4__DOT__sum1)) 
                                                 << 4U) 
                                                | (((IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__carry3) 
                                                    ^ (IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__FA3__DOT__sum1)) 
                                                   << 3U)));
    vedic8x8__DOT__VD1__DOT__RA1__DOT__carry5 = ((IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__carry4) 
                                                 & (IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__FA4__DOT__sum1));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum0 = ((7U & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0)) 
                                             | (((IData)(vedic8x8__DOT__VD2__DOT__RA0__DOT__carry3) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD2__DOT__mult2) 
                                                  >> 3U)) 
                                                << 3U));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum0 = ((7U & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0)) 
                                             | (((IData)(vedic8x8__DOT__VD0__DOT__RA0__DOT__carry3) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD0__DOT__mult2) 
                                                  >> 3U)) 
                                                << 3U));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum0 = ((7U & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0)) 
                                             | (((IData)(vedic8x8__DOT__VD3__DOT__RA0__DOT__carry3) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD3__DOT__mult2) 
                                                  >> 3U)) 
                                                << 3U));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum0 = ((7U & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0)) 
                                             | (((IData)(vedic8x8__DOT__VD1__DOT__RA0__DOT__carry3) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD1__DOT__mult2) 
                                                  >> 3U)) 
                                                << 3U));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum1 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                             | (((IData)(vedic8x8__DOT__VD2__DOT__RA1__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD2__DOT__mult3) 
                                                  >> 3U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum1 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                             | (((IData)(vedic8x8__DOT__VD0__DOT__RA1__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD0__DOT__mult3) 
                                                  >> 3U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum1 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                             | (((IData)(vedic8x8__DOT__VD3__DOT__RA1__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD3__DOT__mult3) 
                                                  >> 3U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum1 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                             | (((IData)(vedic8x8__DOT__VD1__DOT__RA1__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vedic8x8__DOT__VD1__DOT__mult3) 
                                                  >> 3U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum2 = ((0x3eU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum2)) 
                                             | (1U 
                                                & ((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                                                   ^ (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1))));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                 >> 4U));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                 >> 3U));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                 >> 2U));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__FA0__DOT__carry1 
        = (1U & ((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                 & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                 >> 1U));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum2 = ((0x3eU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum2)) 
                                             | (1U 
                                                & ((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                                                   ^ (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1))));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                 >> 4U));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                 >> 3U));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                 >> 2U));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__FA0__DOT__carry1 
        = (1U & ((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                 & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                 >> 1U));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum2 = ((0x3eU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum2)) 
                                             | (1U 
                                                & ((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                                                   ^ (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1))));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                 >> 4U));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                 >> 3U));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                 >> 2U));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__FA0__DOT__carry1 
        = (1U & ((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                 & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                 >> 1U));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum2 = ((0x3eU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum2)) 
                                             | (1U 
                                                & ((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                                                   ^ (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1))));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                 >> 4U));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                 >> 3U));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                 >> 2U));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__FA0__DOT__carry1 
        = (1U & ((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                 & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                  ^ (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                 >> 1U));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__carry2 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                                     >> 1U) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__carry2 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                                     >> 1U) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__carry2 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                                     >> 1U) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__carry2 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                                     >> 1U) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__carry3 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                                     >> 2U) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA2__DOT__sum1))));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__carry3 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                                     >> 2U) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA2__DOT__sum1))));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__carry3 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                                     >> 2U) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA2__DOT__sum1))));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__carry3 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                                     >> 2U) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA2__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum2 = ((0x31U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum2)) 
                                             | ((((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry3) 
                                                  ^ (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA3__DOT__sum1)) 
                                                 << 3U) 
                                                | ((((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry2) 
                                                     ^ (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA2__DOT__sum1)) 
                                                    << 2U) 
                                                   | (((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       ^ (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA1__DOT__sum1)) 
                                                      << 1U))));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__carry4 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                                     >> 3U) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum2 = ((0x31U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum2)) 
                                             | ((((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry3) 
                                                  ^ (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA3__DOT__sum1)) 
                                                 << 3U) 
                                                | ((((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry2) 
                                                     ^ (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA2__DOT__sum1)) 
                                                    << 2U) 
                                                   | (((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       ^ (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA1__DOT__sum1)) 
                                                      << 1U))));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__carry4 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                                     >> 3U) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum2 = ((0x31U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum2)) 
                                             | ((((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry3) 
                                                  ^ (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA3__DOT__sum1)) 
                                                 << 3U) 
                                                | ((((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry2) 
                                                     ^ (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA2__DOT__sum1)) 
                                                    << 2U) 
                                                   | (((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       ^ (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA1__DOT__sum1)) 
                                                      << 1U))));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__carry4 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                                     >> 3U) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum2 = ((0x31U 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum2)) 
                                             | ((((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry3) 
                                                  ^ (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA3__DOT__sum1)) 
                                                 << 3U) 
                                                | ((((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry2) 
                                                     ^ (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA2__DOT__sum1)) 
                                                    << 2U) 
                                                   | (((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA0__DOT__carry1) 
                                                       ^ (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA1__DOT__sum1)) 
                                                      << 1U))));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__carry4 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                                     >> 3U) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum2 = ((0x2fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry4) 
                                                 ^ (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA4__DOT__sum1)) 
                                                << 4U));
    vedic8x8__DOT__VD2__DOT__RA2__DOT__carry5 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1)) 
                                                     >> 4U) 
                                                    | ((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum2 = ((0x2fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry4) 
                                                 ^ (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA4__DOT__sum1)) 
                                                << 4U));
    vedic8x8__DOT__VD0__DOT__RA2__DOT__carry5 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1)) 
                                                     >> 4U) 
                                                    | ((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum2 = ((0x2fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry4) 
                                                 ^ (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA4__DOT__sum1)) 
                                                << 4U));
    vedic8x8__DOT__VD3__DOT__RA2__DOT__carry5 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1)) 
                                                     >> 4U) 
                                                    | ((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum2 = ((0x2fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry4) 
                                                 ^ (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA4__DOT__sum1)) 
                                                << 4U));
    vedic8x8__DOT__VD1__DOT__RA2__DOT__carry5 = (1U 
                                                 & ((((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum0) 
                                                      & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1)) 
                                                     >> 4U) 
                                                    | ((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__VD2__DOT__sum2 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD2__DOT__RA2__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum1) 
                                                  >> 5U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD0__DOT__sum2 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD0__DOT__RA2__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum1) 
                                                  >> 5U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD3__DOT__sum2 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD3__DOT__RA2__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum1) 
                                                  >> 5U)) 
                                                << 5U));
    vlSelf->vedic8x8__DOT__VD1__DOT__sum2 = ((0x1fU 
                                              & (IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum2)) 
                                             | (((IData)(vedic8x8__DOT__VD1__DOT__RA2__DOT__carry5) 
                                                 ^ 
                                                 ((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum1) 
                                                  >> 5U)) 
                                                << 5U));
    vedic8x8__DOT__mult2 = (((IData)(vlSelf->vedic8x8__DOT__VD2__DOT__sum2) 
                             << 2U) | (3U & (IData)(vedic8x8__DOT__VD2__DOT__mult0)));
    vedic8x8__DOT__mult0 = (((IData)(vlSelf->vedic8x8__DOT__VD0__DOT__sum2) 
                             << 2U) | (3U & (IData)(vedic8x8__DOT__VD0__DOT__mult0)));
    vedic8x8__DOT__mult3 = (((IData)(vlSelf->vedic8x8__DOT__VD3__DOT__sum2) 
                             << 2U) | (3U & (IData)(vedic8x8__DOT__VD3__DOT__mult0)));
    vedic8x8__DOT__mult1 = (((IData)(vlSelf->vedic8x8__DOT__VD1__DOT__sum2) 
                             << 2U) | (3U & (IData)(vedic8x8__DOT__VD1__DOT__mult0)));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult2) >> 6U));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__FA1__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult2) >> 5U));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__FA0__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult2) >> 4U));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult0) >> 7U) 
                 ^ ((IData)(vedic8x8__DOT__mult2) >> 3U)));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult0) >> 6U) 
                 ^ ((IData)(vedic8x8__DOT__mult2) >> 2U)));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & (((IData)(vedic8x8__DOT__mult0) >> 4U) 
                 & (IData)(vedic8x8__DOT__mult2)));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult0) >> 5U) 
                 ^ ((IData)(vedic8x8__DOT__mult2) >> 1U)));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4 
        = ((0x30U & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4)) 
           | (0xfU & (IData)(vedic8x8__DOT__mult1)));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4 
        = ((0x2fU & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4)) 
           | (0x10U & ((0xfffffff0U & (IData)(vedic8x8__DOT__mult1)) 
                       ^ ((IData)(vedic8x8__DOT__mult3) 
                          << 4U))));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult3) >> 6U));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult3) >> 5U));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__FA2__DOT__sum1 
        = (1U & ((IData)(vedic8x8__DOT__mult3) >> 4U));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult1) >> 7U) 
                 ^ ((IData)(vedic8x8__DOT__mult3) >> 3U)));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__FA0__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult1) >> 6U) 
                 ^ ((IData)(vedic8x8__DOT__mult3) >> 2U)));
    vedic8x8__DOT__RA1__DOT__RA0__DOT__carry5 = (1U 
                                                 & (((IData)(vedic8x8__DOT__mult1) 
                                                     >> 4U) 
                                                    & (IData)(vedic8x8__DOT__mult3)));
    vedic8x8__DOT__RA1__DOT__RA0__DOT__FA5__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__mult1) >> 5U) 
                 ^ ((IData)(vedic8x8__DOT__mult3) >> 1U)));
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4 
        = ((0xcU & (IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA0__DOT__carry1) 
                ^ (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA1__DOT__sum1)) 
               << 1U) | (1U & (((IData)(vedic8x8__DOT__mult0) 
                                >> 4U) ^ (IData)(vedic8x8__DOT__mult2)))));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__mult0) 
                                                      >> 5U) 
                                                     & ((IData)(vedic8x8__DOT__mult2) 
                                                        >> 1U)) 
                                                    | ((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA1__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4 
        = ((0x1fU & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4)) 
           | (((IData)(vedic8x8__DOT__RA1__DOT__RA0__DOT__carry5) 
               ^ (IData)(vedic8x8__DOT__RA1__DOT__RA0__DOT__FA5__DOT__sum1)) 
              << 5U));
    vedic8x8__DOT__RA1__DOT__carry = (1U & ((((IData)(vedic8x8__DOT__mult1) 
                                              >> 5U) 
                                             & ((IData)(vedic8x8__DOT__mult3) 
                                                >> 1U)) 
                                            | ((IData)(vedic8x8__DOT__RA1__DOT__RA0__DOT__carry5) 
                                               & (IData)(vedic8x8__DOT__RA1__DOT__RA0__DOT__FA5__DOT__sum1))));
    vedic8x8__DOT__RA0__DOT__RA0__DOT__carry3 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__mult0) 
                                                      >> 6U) 
                                                     & ((IData)(vedic8x8__DOT__mult2) 
                                                        >> 2U)) 
                                                    | ((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA2__DOT__sum1))));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__carry1 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__mult1) 
                                                      >> 6U) 
                                                     & ((IData)(vedic8x8__DOT__mult3) 
                                                        >> 2U)) 
                                                    | ((IData)(vedic8x8__DOT__RA1__DOT__carry) 
                                                       & (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA0__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4 
        = ((3U & (IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__carry3) 
                ^ (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA3__DOT__sum1)) 
               << 3U) | (((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__carry2) 
                          ^ (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA2__DOT__sum1)) 
                         << 2U)));
    vedic8x8__DOT__RA0__DOT__carry = (1U & ((((IData)(vedic8x8__DOT__mult0) 
                                              >> 7U) 
                                             & ((IData)(vedic8x8__DOT__mult2) 
                                                >> 3U)) 
                                            | ((IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__carry3) 
                                               & (IData)(vedic8x8__DOT__RA0__DOT__RA0__DOT__FA3__DOT__sum1))));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__carry2 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__mult1) 
                                                      >> 7U) 
                                                     & ((IData)(vedic8x8__DOT__mult3) 
                                                        >> 3U)) 
                                                    | ((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__carry1 = ((IData)(vedic8x8__DOT__RA0__DOT__carry) 
                                                 & (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA0__DOT__sum1));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4 
        = ((0x38U & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry2) 
                ^ (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA2__DOT__sum1)) 
               << 2U) | ((((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry1) 
                           ^ (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA1__DOT__sum1)) 
                          << 1U) | ((IData)(vedic8x8__DOT__RA1__DOT__carry) 
                                    ^ (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA0__DOT__sum1)))));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__carry3 = ((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA2__DOT__sum1));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__carry2 = ((IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__carry1) 
                                                 & (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA1__DOT__sum1));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__carry4 = ((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry3) 
                                                 & (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA3__DOT__sum1));
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4 
        = ((8U & (IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__carry2) 
                ^ (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA2__DOT__sum1)) 
               << 2U) | ((((IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__carry1) 
                           ^ (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA1__DOT__sum1)) 
                          << 1U) | ((IData)(vedic8x8__DOT__RA0__DOT__carry) 
                                    ^ (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA0__DOT__sum1)))));
    vedic8x8__DOT__RA0__DOT__RA1__DOT__carry3 = ((IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__carry2) 
                                                 & (IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__FA2__DOT__sum1));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4 
        = ((0x27U & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry4) 
                ^ (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA4__DOT__sum1)) 
               << 4U) | (((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry3) 
                          ^ (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA3__DOT__sum1)) 
                         << 3U)));
    vedic8x8__DOT__RA1__DOT__RA1__DOT__carry5 = ((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry4) 
                                                 & (IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__FA4__DOT__sum1));
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4 
        = ((7U & (IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4)) 
           | (((IData)(vedic8x8__DOT__RA0__DOT__RA1__DOT__carry3) 
               ^ ((IData)(vedic8x8__DOT__mult2) >> 7U)) 
              << 3U));
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4 
        = ((0x1fU & (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4)) 
           | (((IData)(vedic8x8__DOT__RA1__DOT__RA1__DOT__carry5) 
               ^ ((IData)(vedic8x8__DOT__mult3) >> 7U)) 
              << 5U));
    vedic8x8__DOT__sum0 = (((IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4) 
                            << 4U) | (IData)(vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4));
    vedic8x8__DOT__sum1 = (((IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4) 
                            << 6U) | (IData)(vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4 
        = ((0x3eU & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4)) 
           | (1U & ((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 0xaU));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 9U));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 8U));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 7U));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__FA0__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 6U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA5__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 5U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA4__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 4U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA3__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 3U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA2__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 2U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA0__DOT__carry1 
        = (1U & ((IData)(vedic8x8__DOT__sum0) & (IData)(vedic8x8__DOT__sum1)));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__FA1__DOT__sum1 
        = (1U & (((IData)(vedic8x8__DOT__sum0) ^ (IData)(vedic8x8__DOT__sum1)) 
                 >> 1U));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__carry2 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 1U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA0__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA1__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__carry3 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 2U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA2__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4 
        = ((0x31U & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry3) 
                ^ (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA3__DOT__sum1)) 
               << 3U) | ((((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry2) 
                           ^ (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA2__DOT__sum1)) 
                          << 2U) | (((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA0__DOT__carry1) 
                                     ^ (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA1__DOT__sum1)) 
                                    << 1U))));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 3U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA3__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA0__DOT__carry5 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 4U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4 
        = ((0xfU & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry5) 
                ^ (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA5__DOT__sum1)) 
               << 5U) | (((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry4) 
                          ^ (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA4__DOT__sum1)) 
                         << 4U)));
    vedic8x8__DOT__RA2__DOT__carry = (1U & ((((IData)(vedic8x8__DOT__sum0) 
                                              & (IData)(vedic8x8__DOT__sum1)) 
                                             >> 5U) 
                                            | ((IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__carry5) 
                                               & (IData)(vedic8x8__DOT__RA2__DOT__RA0__DOT__FA5__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__carry1 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 6U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__carry) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA0__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__carry2 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 7U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry1) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA1__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4 
        = ((0x38U & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry2) 
                ^ (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA2__DOT__sum1)) 
               << 2U) | ((((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry1) 
                           ^ (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA1__DOT__sum1)) 
                          << 1U) | ((IData)(vedic8x8__DOT__RA2__DOT__carry) 
                                    ^ (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA0__DOT__sum1)))));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__carry3 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 8U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry2) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA2__DOT__sum1))));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__carry4 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 9U) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry3) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA3__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4 
        = ((0x27U & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4)) 
           | ((((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry4) 
                ^ (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA4__DOT__sum1)) 
               << 4U) | (((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry3) 
                          ^ (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA3__DOT__sum1)) 
                         << 3U)));
    vedic8x8__DOT__RA2__DOT__RA1__DOT__carry5 = (1U 
                                                 & ((((IData)(vedic8x8__DOT__sum0) 
                                                      & (IData)(vedic8x8__DOT__sum1)) 
                                                     >> 0xaU) 
                                                    | ((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry4) 
                                                       & (IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__FA4__DOT__sum1))));
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4 
        = ((0x1fU & (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4)) 
           | (((IData)(vedic8x8__DOT__RA2__DOT__RA1__DOT__carry5) 
               ^ ((IData)(vedic8x8__DOT__sum1) >> 0xbU)) 
              << 5U));
    vedic8x8__DOT__sum2 = (((IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4) 
                            << 6U) | (IData)(vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4));
    vlSelf->prod = (((IData)(vedic8x8__DOT__sum2) << 4U) 
                    | (0xfU & (IData)(vedic8x8__DOT__mult0)));
}

void Vvedic8x8___024root___eval(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___eval\n"); );
    // Body
    Vvedic8x8___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vvedic8x8___024root___eval_debug_assertions(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
