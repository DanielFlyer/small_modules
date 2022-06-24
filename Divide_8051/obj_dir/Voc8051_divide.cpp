// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Voc8051_divide.h"
#include "Voc8051_divide__Syms.h"

//============================================================
// Constructors

Voc8051_divide::Voc8051_divide(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Voc8051_divide__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , enable{vlSymsp->TOP.enable}
    , src1{vlSymsp->TOP.src1}
    , src2{vlSymsp->TOP.src2}
    , desOv{vlSymsp->TOP.desOv}
    , des1{vlSymsp->TOP.des1}
    , des2{vlSymsp->TOP.des2}
    , rootp{&(vlSymsp->TOP)}
{
}

Voc8051_divide::Voc8051_divide(const char* _vcname__)
    : Voc8051_divide(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Voc8051_divide::~Voc8051_divide() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Voc8051_divide___024root___eval_initial(Voc8051_divide___024root* vlSelf);
void Voc8051_divide___024root___eval_settle(Voc8051_divide___024root* vlSelf);
void Voc8051_divide___024root___eval(Voc8051_divide___024root* vlSelf);
#ifdef VL_DEBUG
void Voc8051_divide___024root___eval_debug_assertions(Voc8051_divide___024root* vlSelf);
#endif  // VL_DEBUG
void Voc8051_divide___024root___final(Voc8051_divide___024root* vlSelf);

static void _eval_initial_loop(Voc8051_divide__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Voc8051_divide___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Voc8051_divide___024root___eval_settle(&(vlSymsp->TOP));
        Voc8051_divide___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Voc8051_divide::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Voc8051_divide::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Voc8051_divide___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Voc8051_divide___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Voc8051_divide::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Voc8051_divide::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Voc8051_divide::final() {
    Voc8051_divide___024root___final(&(vlSymsp->TOP));
}
