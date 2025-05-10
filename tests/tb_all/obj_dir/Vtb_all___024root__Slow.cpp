// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all__Syms.h"
#include "Vtb_all___024root.h"

void Vtb_all___024root___ctor_var_reset(Vtb_all___024root* vlSelf);

Vtb_all___024root::Vtb_all___024root(Vtb_all__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_all___024root___ctor_var_reset(this);
}

void Vtb_all___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_all___024root::~Vtb_all___024root() {
}
