// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tile.h for the primary calling header

#ifndef VERILATED_VTB_TILE___024UNIT_H_
#define VERILATED_VTB_TILE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tile___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_tile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tile___024unit(Vtb_tile__Syms* symsp, const char* v__name);
    ~Vtb_tile___024unit();
    VL_UNCOPYABLE(Vtb_tile___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
