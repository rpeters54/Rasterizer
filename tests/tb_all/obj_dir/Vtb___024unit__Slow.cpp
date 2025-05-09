// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024unit.h"

void Vtb___024unit___ctor_var_reset(Vtb___024unit* vlSelf);

Vtb___024unit::Vtb___024unit(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb___024unit___ctor_var_reset(this);
}

void Vtb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb___024unit::~Vtb___024unit() {
}
