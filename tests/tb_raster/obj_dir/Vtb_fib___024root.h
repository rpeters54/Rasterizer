// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fib.h for the primary calling header

#ifndef VERILATED_VTB_FIB___024ROOT_H_
#define VERILATED_VTB_FIB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fib__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fib___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fib__DOT__clk;
    CData/*0:0*/ tb_fib__DOT__rst_n;
    CData/*0:0*/ tb_fib__DOT__vld_in;
    CData/*0:0*/ tb_fib__DOT__rdy_out;
    CData/*0:0*/ tb_fib__DOT__rdy_in;
    CData/*0:0*/ tb_fib__DOT__vld_out;
    CData/*7:0*/ tb_fib__DOT__fib_in;
    CData/*7:0*/ tb_fib__DOT__Fib__DOT__limit;
    CData/*7:0*/ tb_fib__DOT__Fib__DOT__count;
    CData/*0:0*/ __VdlyVal__tb_fib__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__tb_fib__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fib__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fib__DOT__fib_out;
    IData/*31:0*/ tb_fib__DOT__Fib__DOT__present_state;
    IData/*31:0*/ tb_fib__DOT__Fib__DOT__next_state;
    IData/*31:0*/ tb_fib__DOT__Fib__DOT__prev;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2f736bbf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fib__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fib___024root(Vtb_fib__Syms* symsp, const char* v__name);
    ~Vtb_fib___024root();
    VL_UNCOPYABLE(Vtb_fib___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
