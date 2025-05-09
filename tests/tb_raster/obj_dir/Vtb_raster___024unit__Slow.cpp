// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_raster.h for the primary calling header

#include "Vtb_raster__pch.h"
#include "Vtb_raster__Syms.h"
#include "Vtb_raster___024unit.h"

void Vtb_raster___024unit___ctor_var_reset(Vtb_raster___024unit* vlSelf);

Vtb_raster___024unit::Vtb_raster___024unit(Vtb_raster__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_raster___024unit___ctor_var_reset(this);
}

void Vtb_raster___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_raster___024unit::~Vtb_raster___024unit() {
}
