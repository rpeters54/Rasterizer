// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tile.h for the primary calling header

#ifndef VERILATED_VTB_TILE___024ROOT_H_
#define VERILATED_VTB_TILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_tile__DOT__clk;
    CData/*0:0*/ tb_tile__DOT__vld_out;
    CData/*0:0*/ tb_tile__DOT__rst_n;
    CData/*0:0*/ tb_tile__DOT__rdy_out;
    CData/*0:0*/ tb_tile__DOT__vld_in;
    CData/*0:0*/ tb_tile__DOT__rdy_in;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tile__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tile__DOT__rdy_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_tile__DOT__out_dzdx;
    SData/*15:0*/ tb_tile__DOT__out_dzdy;
    SData/*15:0*/ tb_tile__DOT__tile_proc__DOT__temp_dzdx;
    SData/*15:0*/ tb_tile__DOT__tile_proc__DOT__temp_dzdy;
    SData/*15:0*/ tb_tile__DOT__tile_proc__DOT__dzdx;
    SData/*15:0*/ tb_tile__DOT__tile_proc__DOT__dzdy;
    IData/*18:0*/ tb_tile__DOT__in_metadata;
    IData/*31:0*/ tb_tile__DOT__out_edge_0;
    IData/*31:0*/ tb_tile__DOT__out_edge_1;
    IData/*31:0*/ tb_tile__DOT__out_edge_2;
    IData/*18:0*/ tb_tile__DOT__out_metadata;
    IData/*31:0*/ tb_tile__DOT__out_z_current;
    IData/*18:0*/ tb_tile__DOT__make_meta__Vstatic__meta;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__present_state;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__next_state;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__temp_edge_i;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__temp_coeff_a;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__temp_coeff_b;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__temp_coeff_c;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__temp_z;
    IData/*18:0*/ tb_tile__DOT__tile_proc__DOT__metadata;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__coeff_A;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__coeff_B;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__coeff_C;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__z_current;
    IData/*31:0*/ tb_tile__DOT__tile_proc__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ tb_tile__DOT__v0;
    QData/*47:0*/ tb_tile__DOT__v1;
    QData/*47:0*/ tb_tile__DOT__v2;
    QData/*47:0*/ tb_tile__DOT__out_abs_pos;
    QData/*47:0*/ tb_tile__DOT__out_delta_0;
    QData/*47:0*/ tb_tile__DOT__out_delta_1;
    QData/*47:0*/ tb_tile__DOT__out_delta_2;
    QData/*47:0*/ tb_tile__DOT__make_coord__Vstatic__point;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__temp_start;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__temp_delta_0;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__temp_delta_1;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__temp_delta_2;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__abs_pos;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__delta_0;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__delta_1;
    QData/*47:0*/ tb_tile__DOT__tile_proc__DOT__delta_2;
    QData/*47:0*/ __Vtask_tb_tile__DOT__tile_proc__DOT__tile_to_coord__24__out;
    QData/*47:0*/ __Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__25__out;
    QData/*47:0*/ __Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__26__out;
    QData/*47:0*/ __Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__27__out;
    VlUnpacked<IData/*31:0*/, 3> tb_tile__DOT__tile_proc__DOT__edges;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h066b40b5__0;
    VlTriggerScheduler __VtrigSched_h3f3f19a8__0;
    VlTriggerScheduler __VtrigSched_h066b4174__0;
    VlTriggerScheduler __VtrigSched_h5a39fa9e__0;
    VlTriggerScheduler __VtrigSched_h5a39fb5f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_tile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tile___024root(Vtb_tile__Syms* symsp, const char* v__name);
    ~Vtb_tile___024root();
    VL_UNCOPYABLE(Vtb_tile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
