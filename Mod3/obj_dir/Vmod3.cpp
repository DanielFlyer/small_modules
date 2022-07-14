// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmod3.h"
#include "Vmod3__Syms.h"

//============================================================
// Constructors

Vmod3::Vmod3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmod3__Syms(_vcontextp__, _vcname__, this)}
    , dat_i{vlSymsp->TOP.dat_i}
    , reminder{vlSymsp->TOP.reminder}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmod3::Vmod3(const char* _vcname__)
    : Vmod3(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmod3::~Vmod3() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmod3___024root___eval_initial(Vmod3___024root* vlSelf);
void Vmod3___024root___eval_settle(Vmod3___024root* vlSelf);
void Vmod3___024root___eval(Vmod3___024root* vlSelf);
#ifdef VL_DEBUG
void Vmod3___024root___eval_debug_assertions(Vmod3___024root* vlSelf);
#endif  // VL_DEBUG
void Vmod3___024root___final(Vmod3___024root* vlSelf);

static void _eval_initial_loop(Vmod3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmod3___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmod3___024root___eval_settle(&(vlSymsp->TOP));
        Vmod3___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmod3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmod3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmod3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmod3___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmod3::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmod3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmod3::final() {
    Vmod3___024root___final(&(vlSymsp->TOP));
}
