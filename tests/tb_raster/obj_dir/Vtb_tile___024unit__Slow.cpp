// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tile.h for the primary calling header

#include "Vtb_tile__pch.h"
#include "Vtb_tile__Syms.h"
#include "Vtb_tile___024unit.h"

void Vtb_tile___024unit___ctor_var_reset(Vtb_tile___024unit* vlSelf);

Vtb_tile___024unit::Vtb_tile___024unit(Vtb_tile__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tile___024unit___ctor_var_reset(this);
}

void Vtb_tile___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tile___024unit::~Vtb_tile___024unit() {
}
