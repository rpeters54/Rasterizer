// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all__Syms.h"
#include "Vtb_all___024unit.h"

void Vtb_all___024unit___ctor_var_reset(Vtb_all___024unit* vlSelf);

Vtb_all___024unit::Vtb_all___024unit(Vtb_all__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_all___024unit___ctor_var_reset(this);
}

void Vtb_all___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_all___024unit::~Vtb_all___024unit() {
}
