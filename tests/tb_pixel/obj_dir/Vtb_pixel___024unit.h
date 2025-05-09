// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pixel.h for the primary calling header

#ifndef VERILATED_VTB_PIXEL___024UNIT_H_
#define VERILATED_VTB_PIXEL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pixel__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pixel___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_pixel__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pixel___024unit(Vtb_pixel__Syms* symsp, const char* v__name);
    ~Vtb_pixel___024unit();
    VL_UNCOPYABLE(Vtb_pixel___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
