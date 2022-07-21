// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmat_mult.h"
#include "Vmat_mult__Syms.h"

//============================================================
// Constructors

Vmat_mult::Vmat_mult(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmat_mult__Syms(_vcontextp__, _vcname__, this)}
    , clk_80{vlSymsp->TOP.clk_80}
    , rst_80{vlSymsp->TOP.rst_80}
    , B00_80{vlSymsp->TOP.B00_80}
    , B01_80{vlSymsp->TOP.B01_80}
    , B02_80{vlSymsp->TOP.B02_80}
    , B03_80{vlSymsp->TOP.B03_80}
    , A00_80{vlSymsp->TOP.A00_80}
    , A01_80{vlSymsp->TOP.A01_80}
    , A02_80{vlSymsp->TOP.A02_80}
    , A03_80{vlSymsp->TOP.A03_80}
    , AB00_80{vlSymsp->TOP.AB00_80}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmat_mult::Vmat_mult(const char* _vcname__)
    : Vmat_mult(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmat_mult::~Vmat_mult() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmat_mult___024root___eval_initial(Vmat_mult___024root* vlSelf);
void Vmat_mult___024root___eval_settle(Vmat_mult___024root* vlSelf);
void Vmat_mult___024root___eval(Vmat_mult___024root* vlSelf);
#ifdef VL_DEBUG
void Vmat_mult___024root___eval_debug_assertions(Vmat_mult___024root* vlSelf);
#endif  // VL_DEBUG
void Vmat_mult___024root___final(Vmat_mult___024root* vlSelf);

static void _eval_initial_loop(Vmat_mult__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmat_mult___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmat_mult___024root___eval_settle(&(vlSymsp->TOP));
        Vmat_mult___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmat_mult::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmat_mult::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmat_mult___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmat_mult___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmat_mult::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmat_mult::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmat_mult::final() {
    Vmat_mult___024root___final(&(vlSymsp->TOP));
}
