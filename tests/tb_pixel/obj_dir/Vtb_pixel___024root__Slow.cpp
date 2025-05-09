// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pixel.h for the primary calling header

#include "Vtb_pixel__pch.h"
#include "Vtb_pixel__Syms.h"
#include "Vtb_pixel___024root.h"

void Vtb_pixel___024root___ctor_var_reset(Vtb_pixel___024root* vlSelf);

Vtb_pixel___024root::Vtb_pixel___024root(Vtb_pixel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_pixel___024root___ctor_var_reset(this);
}

void Vtb_pixel___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_pixel___024root::~Vtb_pixel___024root() {
}
