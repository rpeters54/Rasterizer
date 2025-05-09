// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tile.h for the primary calling header

#include "Vtb_tile__pch.h"
#include "Vtb_tile__Syms.h"
#include "Vtb_tile___024root.h"

void Vtb_tile___024root___ctor_var_reset(Vtb_tile___024root* vlSelf);

Vtb_tile___024root::Vtb_tile___024root(Vtb_tile__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tile___024root___ctor_var_reset(this);
}

void Vtb_tile___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tile___024root::~Vtb_tile___024root() {
}
