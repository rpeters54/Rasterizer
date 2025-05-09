// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_raster.h for the primary calling header

#include "Vtb_raster__pch.h"
#include "Vtb_raster__Syms.h"
#include "Vtb_raster___024root.h"

void Vtb_raster___024root___ctor_var_reset(Vtb_raster___024root* vlSelf);

Vtb_raster___024root::Vtb_raster___024root(Vtb_raster__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_raster___024root___ctor_var_reset(this);
}

void Vtb_raster___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_raster___024root::~Vtb_raster___024root() {
}
