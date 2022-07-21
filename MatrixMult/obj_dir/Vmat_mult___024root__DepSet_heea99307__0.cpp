// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmat_mult.h for the primary calling header

#include "verilated.h"

#include "Vmat_mult___024root.h"

VL_INLINE_OPT void Vmat_mult___024root___sequent__TOP__0(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->AB00_80 = ((IData)(vlSelf->rst_80) ? 0U
                        : (IData)(vlSelf->mat_mult__DOT__a2_in_80));
}

VL_INLINE_OPT void Vmat_mult___024root___combo__TOP__0(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___combo__TOP__0\n"); );
    // Init
    SData/*8:0*/ mat_mult__DOT__product0_rounded_80;
    SData/*8:0*/ mat_mult__DOT__product1_rounded_80;
    SData/*8:0*/ mat_mult__DOT__product2_rounded_80;
    SData/*8:0*/ mat_mult__DOT__product3_rounded_80;
    SData/*10:0*/ mat_mult__DOT__a0_in_80;
    SData/*10:0*/ mat_mult__DOT__a1_in_80;
    SData/*10:0*/ mat_mult__DOT____Vcellinp__a0__datab;
    SData/*10:0*/ mat_mult__DOT____Vcellinp__a0__dataa;
    SData/*10:0*/ mat_mult__DOT____Vcellinp__a1__datab;
    SData/*10:0*/ mat_mult__DOT____Vcellinp__a1__dataa;
    SData/*11:0*/ mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum;
    SData/*11:0*/ mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum;
    SData/*11:0*/ mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum;
    // Body
    mat_mult__DOT__product0_rounded_80 = (0x1ffU & 
                                          ((0x10000U 
                                            & ((0x1ffU 
                                                & ((IData)(
                                                           (0x100U 
                                                            == (IData)(vlSelf->A00_80)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->A00_80))
                                                    : (IData)(vlSelf->A00_80))) 
                                               * (0xffU 
                                                  & ((IData)(
                                                             (0x80U 
                                                              == (IData)(vlSelf->B00_80)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->B00_80))
                                                      : (IData)(vlSelf->B00_80)))))
                                            ? ((0U 
                                                == 
                                                (0xffU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A00_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A00_80))
                                                          : (IData)(vlSelf->A00_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B00_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B00_80))
                                                          : (IData)(vlSelf->B00_80)))) 
                                                    >> 7U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A00_80))
                                                             : (IData)(vlSelf->A00_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B00_80))
                                                             : (IData)(vlSelf->B00_80)))) 
                                                       >> 7U)))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A00_80))
                                                            : (IData)(vlSelf->A00_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B00_80))
                                                            : (IData)(vlSelf->B00_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A00_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A00_80))
                                                              : (IData)(vlSelf->A00_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B00_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B00_80))
                                                              : (IData)(vlSelf->B00_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A00_80))
                                                             : (IData)(vlSelf->A00_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B00_80))
                                                             : (IData)(vlSelf->B00_80)))) 
                                                       >> 7U))))
                                            : ((0x7fU 
                                                == 
                                                (0x7fU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A00_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A00_80))
                                                          : (IData)(vlSelf->A00_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B00_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B00_80))
                                                          : (IData)(vlSelf->B00_80)))) 
                                                    >> 8U)))
                                                ? (0x3ffU 
                                                   & (((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A00_80))
                                                            : (IData)(vlSelf->A00_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B00_80))
                                                            : (IData)(vlSelf->B00_80)))) 
                                                      >> 7U))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A00_80))
                                                            : (IData)(vlSelf->A00_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B00_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B00_80))
                                                            : (IData)(vlSelf->B00_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A00_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A00_80))
                                                              : (IData)(vlSelf->A00_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B00_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B00_80))
                                                              : (IData)(vlSelf->B00_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A00_80))
                                                             : (IData)(vlSelf->A00_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B00_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B00_80))
                                                             : (IData)(vlSelf->B00_80)))) 
                                                       >> 7U))))));
    mat_mult__DOT__product1_rounded_80 = (0x1ffU & 
                                          ((0x10000U 
                                            & ((0x1ffU 
                                                & ((IData)(
                                                           (0x100U 
                                                            == (IData)(vlSelf->A01_80)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->A01_80))
                                                    : (IData)(vlSelf->A01_80))) 
                                               * (0xffU 
                                                  & ((IData)(
                                                             (0x80U 
                                                              == (IData)(vlSelf->B01_80)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->B01_80))
                                                      : (IData)(vlSelf->B01_80)))))
                                            ? ((0U 
                                                == 
                                                (0xffU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A01_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A01_80))
                                                          : (IData)(vlSelf->A01_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B01_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B01_80))
                                                          : (IData)(vlSelf->B01_80)))) 
                                                    >> 7U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A01_80))
                                                             : (IData)(vlSelf->A01_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B01_80))
                                                             : (IData)(vlSelf->B01_80)))) 
                                                       >> 7U)))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A01_80))
                                                            : (IData)(vlSelf->A01_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B01_80))
                                                            : (IData)(vlSelf->B01_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A01_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A01_80))
                                                              : (IData)(vlSelf->A01_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B01_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B01_80))
                                                              : (IData)(vlSelf->B01_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A01_80))
                                                             : (IData)(vlSelf->A01_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B01_80))
                                                             : (IData)(vlSelf->B01_80)))) 
                                                       >> 7U))))
                                            : ((0x7fU 
                                                == 
                                                (0x7fU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A01_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A01_80))
                                                          : (IData)(vlSelf->A01_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B01_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B01_80))
                                                          : (IData)(vlSelf->B01_80)))) 
                                                    >> 8U)))
                                                ? (0x3ffU 
                                                   & (((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A01_80))
                                                            : (IData)(vlSelf->A01_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B01_80))
                                                            : (IData)(vlSelf->B01_80)))) 
                                                      >> 7U))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A01_80))
                                                            : (IData)(vlSelf->A01_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B01_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B01_80))
                                                            : (IData)(vlSelf->B01_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A01_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A01_80))
                                                              : (IData)(vlSelf->A01_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B01_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B01_80))
                                                              : (IData)(vlSelf->B01_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A01_80))
                                                             : (IData)(vlSelf->A01_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B01_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B01_80))
                                                             : (IData)(vlSelf->B01_80)))) 
                                                       >> 7U))))));
    mat_mult__DOT__product2_rounded_80 = (0x1ffU & 
                                          ((0x10000U 
                                            & ((0x1ffU 
                                                & ((IData)(
                                                           (0x100U 
                                                            == (IData)(vlSelf->A02_80)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->A02_80))
                                                    : (IData)(vlSelf->A02_80))) 
                                               * (0xffU 
                                                  & ((IData)(
                                                             (0x80U 
                                                              == (IData)(vlSelf->B02_80)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->B02_80))
                                                      : (IData)(vlSelf->B02_80)))))
                                            ? ((0U 
                                                == 
                                                (0xffU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A02_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A02_80))
                                                          : (IData)(vlSelf->A02_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B02_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B02_80))
                                                          : (IData)(vlSelf->B02_80)))) 
                                                    >> 7U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A02_80))
                                                             : (IData)(vlSelf->A02_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B02_80))
                                                             : (IData)(vlSelf->B02_80)))) 
                                                       >> 7U)))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A02_80))
                                                            : (IData)(vlSelf->A02_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B02_80))
                                                            : (IData)(vlSelf->B02_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A02_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A02_80))
                                                              : (IData)(vlSelf->A02_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B02_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B02_80))
                                                              : (IData)(vlSelf->B02_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A02_80))
                                                             : (IData)(vlSelf->A02_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B02_80))
                                                             : (IData)(vlSelf->B02_80)))) 
                                                       >> 7U))))
                                            : ((0x7fU 
                                                == 
                                                (0x7fU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A02_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A02_80))
                                                          : (IData)(vlSelf->A02_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B02_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B02_80))
                                                          : (IData)(vlSelf->B02_80)))) 
                                                    >> 8U)))
                                                ? (0x3ffU 
                                                   & (((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A02_80))
                                                            : (IData)(vlSelf->A02_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B02_80))
                                                            : (IData)(vlSelf->B02_80)))) 
                                                      >> 7U))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A02_80))
                                                            : (IData)(vlSelf->A02_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B02_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B02_80))
                                                            : (IData)(vlSelf->B02_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A02_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A02_80))
                                                              : (IData)(vlSelf->A02_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B02_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B02_80))
                                                              : (IData)(vlSelf->B02_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A02_80))
                                                             : (IData)(vlSelf->A02_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B02_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B02_80))
                                                             : (IData)(vlSelf->B02_80)))) 
                                                       >> 7U))))));
    mat_mult__DOT__product3_rounded_80 = (0x1ffU & 
                                          ((0x10000U 
                                            & ((0x1ffU 
                                                & ((IData)(
                                                           (0x100U 
                                                            == (IData)(vlSelf->A03_80)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->A03_80))
                                                    : (IData)(vlSelf->A03_80))) 
                                               * (0xffU 
                                                  & ((IData)(
                                                             (0x80U 
                                                              == (IData)(vlSelf->B03_80)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->B03_80))
                                                      : (IData)(vlSelf->B03_80)))))
                                            ? ((0U 
                                                == 
                                                (0xffU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A03_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A03_80))
                                                          : (IData)(vlSelf->A03_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B03_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B03_80))
                                                          : (IData)(vlSelf->B03_80)))) 
                                                    >> 7U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A03_80))
                                                             : (IData)(vlSelf->A03_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B03_80))
                                                             : (IData)(vlSelf->B03_80)))) 
                                                       >> 7U)))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A03_80))
                                                            : (IData)(vlSelf->A03_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B03_80))
                                                            : (IData)(vlSelf->B03_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A03_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A03_80))
                                                              : (IData)(vlSelf->A03_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B03_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B03_80))
                                                              : (IData)(vlSelf->B03_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A03_80))
                                                             : (IData)(vlSelf->A03_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B03_80))
                                                             : (IData)(vlSelf->B03_80)))) 
                                                       >> 7U))))
                                            : ((0x7fU 
                                                == 
                                                (0x7fU 
                                                 & (((0x1ffU 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == (IData)(vlSelf->A03_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->A03_80))
                                                          : (IData)(vlSelf->A03_80))) 
                                                     * 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (0x80U 
                                                                  == (IData)(vlSelf->B03_80)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelf->B03_80))
                                                          : (IData)(vlSelf->B03_80)))) 
                                                    >> 8U)))
                                                ? (0x3ffU 
                                                   & (((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A03_80))
                                                            : (IData)(vlSelf->A03_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B03_80))
                                                            : (IData)(vlSelf->B03_80)))) 
                                                      >> 7U))
                                                : (
                                                   (0x40U 
                                                    & ((0x1ffU 
                                                        & ((IData)(
                                                                   (0x100U 
                                                                    == (IData)(vlSelf->A03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->A03_80))
                                                            : (IData)(vlSelf->A03_80))) 
                                                       * 
                                                       (0xffU 
                                                        & ((IData)(
                                                                   (0x80U 
                                                                    == (IData)(vlSelf->B03_80)))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelf->B03_80))
                                                            : (IData)(vlSelf->B03_80)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((0x1ffU 
                                                          & ((IData)(
                                                                     (0x100U 
                                                                      == (IData)(vlSelf->A03_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->A03_80))
                                                              : (IData)(vlSelf->A03_80))) 
                                                         * 
                                                         (0xffU 
                                                          & ((IData)(
                                                                     (0x80U 
                                                                      == (IData)(vlSelf->B03_80)))
                                                              ? 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->B03_80))
                                                              : (IData)(vlSelf->B03_80)))) 
                                                        >> 7U)))
                                                    : 
                                                   (0x3ffU 
                                                    & (((0x1ffU 
                                                         & ((IData)(
                                                                    (0x100U 
                                                                     == (IData)(vlSelf->A03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->A03_80))
                                                             : (IData)(vlSelf->A03_80))) 
                                                        * 
                                                        (0xffU 
                                                         & ((IData)(
                                                                    (0x80U 
                                                                     == (IData)(vlSelf->B03_80)))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->B03_80))
                                                             : (IData)(vlSelf->B03_80)))) 
                                                       >> 7U))))));
    mat_mult__DOT____Vcellinp__a0__dataa = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(mat_mult__DOT__product0_rounded_80) 
                                                               >> 8U)))) 
                                                << 9U)) 
                                            | (IData)(mat_mult__DOT__product0_rounded_80));
    mat_mult__DOT____Vcellinp__a0__datab = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(mat_mult__DOT__product1_rounded_80) 
                                                               >> 8U)))) 
                                                << 9U)) 
                                            | (IData)(mat_mult__DOT__product1_rounded_80));
    mat_mult__DOT____Vcellinp__a1__dataa = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(mat_mult__DOT__product2_rounded_80) 
                                                               >> 8U)))) 
                                                << 9U)) 
                                            | (IData)(mat_mult__DOT__product2_rounded_80));
    mat_mult__DOT____Vcellinp__a1__datab = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(mat_mult__DOT__product3_rounded_80) 
                                                               >> 8U)))) 
                                                << 9U)) 
                                            | (IData)(mat_mult__DOT__product3_rounded_80));
    mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum 
        = (0xfffU & ((IData)(mat_mult__DOT____Vcellinp__a0__dataa) 
                     + (IData)(mat_mult__DOT____Vcellinp__a0__datab)));
    mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum 
        = (0xfffU & ((IData)(mat_mult__DOT____Vcellinp__a1__dataa) 
                     + (IData)(mat_mult__DOT____Vcellinp__a1__datab)));
    mat_mult__DOT__a0_in_80 = (0x7ffU & ((0x800U & (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum))
                                          ? ((1U & 
                                              (((((IData)(mat_mult__DOT____Vcellinp__a0__dataa) 
                                                  & (IData)(mat_mult__DOT____Vcellinp__a0__datab)) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                    >> 0xbU))) 
                                               | (((~ 
                                                    ((IData)(mat_mult__DOT____Vcellinp__a0__dataa) 
                                                     >> 0xaU)) 
                                                   & (~ 
                                                      ((IData)(mat_mult__DOT____Vcellinp__a0__datab) 
                                                       >> 0xaU))) 
                                                  & ((IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                     >> 0xbU))))
                                              ? 0x401U
                                              : ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x7ffU 
                                                           & (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                  : (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum)))
                                          : ((1U & 
                                              (((((IData)(mat_mult__DOT____Vcellinp__a0__dataa) 
                                                  & (IData)(mat_mult__DOT____Vcellinp__a0__datab)) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                    >> 0xbU))) 
                                               | (((~ 
                                                    ((IData)(mat_mult__DOT____Vcellinp__a0__dataa) 
                                                     >> 0xaU)) 
                                                   & (~ 
                                                      ((IData)(mat_mult__DOT____Vcellinp__a0__datab) 
                                                       >> 0xaU))) 
                                                  & ((IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                     >> 0xbU))))
                                              ? 0x3ffU
                                              : ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x7ffU 
                                                           & (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                  : (IData)(mat_mult__DOT__a0__DOT__LPM_ADD_SUB_component__DOT__sum)))));
    mat_mult__DOT__a1_in_80 = (0x7ffU & ((0x800U & (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum))
                                          ? ((1U & 
                                              (((((IData)(mat_mult__DOT____Vcellinp__a1__dataa) 
                                                  & (IData)(mat_mult__DOT____Vcellinp__a1__datab)) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                    >> 0xbU))) 
                                               | (((~ 
                                                    ((IData)(mat_mult__DOT____Vcellinp__a1__dataa) 
                                                     >> 0xaU)) 
                                                   & (~ 
                                                      ((IData)(mat_mult__DOT____Vcellinp__a1__datab) 
                                                       >> 0xaU))) 
                                                  & ((IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                     >> 0xbU))))
                                              ? 0x401U
                                              : ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x7ffU 
                                                           & (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                  : (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum)))
                                          : ((1U & 
                                              (((((IData)(mat_mult__DOT____Vcellinp__a1__dataa) 
                                                  & (IData)(mat_mult__DOT____Vcellinp__a1__datab)) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                    >> 0xbU))) 
                                               | (((~ 
                                                    ((IData)(mat_mult__DOT____Vcellinp__a1__dataa) 
                                                     >> 0xaU)) 
                                                   & (~ 
                                                      ((IData)(mat_mult__DOT____Vcellinp__a1__datab) 
                                                       >> 0xaU))) 
                                                  & ((IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                     >> 0xbU))))
                                              ? 0x3ffU
                                              : ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x7ffU 
                                                           & (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                  : (IData)(mat_mult__DOT__a1__DOT__LPM_ADD_SUB_component__DOT__sum)))));
    mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum 
        = (0xfffU & ((IData)(mat_mult__DOT__a0_in_80) 
                     + (IData)(mat_mult__DOT__a1_in_80)));
    vlSelf->mat_mult__DOT__a2_in_80 = (0x7ffU & ((0x800U 
                                                  & (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                  ? 
                                                 ((1U 
                                                   & (((((IData)(mat_mult__DOT__a0_in_80) 
                                                         & (IData)(mat_mult__DOT__a1_in_80)) 
                                                        >> 0xaU) 
                                                       & (~ 
                                                          ((IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                           >> 0xbU))) 
                                                      | (((~ 
                                                           ((IData)(mat_mult__DOT__a0_in_80) 
                                                            >> 0xaU)) 
                                                          & (~ 
                                                             ((IData)(mat_mult__DOT__a1_in_80) 
                                                              >> 0xaU))) 
                                                         & ((IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                            >> 0xbU))))
                                                   ? 0x401U
                                                   : 
                                                  ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x7ffU 
                                                             & (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                    : (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum)))
                                                  : 
                                                 ((1U 
                                                   & (((((IData)(mat_mult__DOT__a0_in_80) 
                                                         & (IData)(mat_mult__DOT__a1_in_80)) 
                                                        >> 0xaU) 
                                                       & (~ 
                                                          ((IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                           >> 0xbU))) 
                                                      | (((~ 
                                                           ((IData)(mat_mult__DOT__a0_in_80) 
                                                            >> 0xaU)) 
                                                          & (~ 
                                                             ((IData)(mat_mult__DOT__a1_in_80) 
                                                              >> 0xaU))) 
                                                         & ((IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum) 
                                                            >> 0xbU))))
                                                   ? 0x3ffU
                                                   : 
                                                  ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x7ffU 
                                                             & (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum))
                                                    : (IData)(mat_mult__DOT__a2__DOT__LPM_ADD_SUB_component__DOT__sum)))));
}

void Vmat_mult___024root___eval(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_80) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_80))) 
         | ((IData)(vlSelf->rst_80) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_80))))) {
        Vmat_mult___024root___sequent__TOP__0(vlSelf);
    }
    Vmat_mult___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_80 = vlSelf->clk_80;
    vlSelf->__Vclklast__TOP__rst_80 = vlSelf->rst_80;
}

#ifdef VL_DEBUG
void Vmat_mult___024root___eval_debug_assertions(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_80 & 0xfeU))) {
        Verilated::overWidthError("clk_80");}
    if (VL_UNLIKELY((vlSelf->rst_80 & 0xfeU))) {
        Verilated::overWidthError("rst_80");}
    if (VL_UNLIKELY((vlSelf->A00_80 & 0xfe00U))) {
        Verilated::overWidthError("A00_80");}
    if (VL_UNLIKELY((vlSelf->A01_80 & 0xfe00U))) {
        Verilated::overWidthError("A01_80");}
    if (VL_UNLIKELY((vlSelf->A02_80 & 0xfe00U))) {
        Verilated::overWidthError("A02_80");}
    if (VL_UNLIKELY((vlSelf->A03_80 & 0xfe00U))) {
        Verilated::overWidthError("A03_80");}
}
#endif  // VL_DEBUG
