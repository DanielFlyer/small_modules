// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfht.h"
#include "Vfht__Syms.h"

//============================================================
// Constructors

Vfht::Vfht(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfht__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , data_i{vlSymsp->TOP.data_i}
    , data_o{vlSymsp->TOP.data_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfht::Vfht(const char* _vcname__)
    : Vfht(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfht::~Vfht() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfht___024root___eval_initial(Vfht___024root* vlSelf);
void Vfht___024root___eval_settle(Vfht___024root* vlSelf);
void Vfht___024root___eval(Vfht___024root* vlSelf);
#ifdef VL_DEBUG
void Vfht___024root___eval_debug_assertions(Vfht___024root* vlSelf);
#endif  // VL_DEBUG
void Vfht___024root___final(Vfht___024root* vlSelf);

static void _eval_initial_loop(Vfht__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfht___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfht___024root___eval_settle(&(vlSymsp->TOP));
        Vfht___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vfht::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfht::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfht___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfht___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vfht::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfht::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vfht::final() {
    Vfht___024root___final(&(vlSymsp->TOP));
}
