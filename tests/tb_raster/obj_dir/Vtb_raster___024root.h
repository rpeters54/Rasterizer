// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_raster.h for the primary calling header

#ifndef VERILATED_VTB_RASTER___024ROOT_H_
#define VERILATED_VTB_RASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_raster__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_raster___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_raster__DOT__clk;
        CData/*0:0*/ tb_raster__DOT__rst_n;
        CData/*0:0*/ tb_raster__DOT__rdy_out;
        CData/*0:0*/ tb_raster__DOT__vld_in;
        CData/*0:0*/ tb_raster__DOT__rdy_in;
        CData/*0:0*/ tb_raster__DOT__vld_out;
        CData/*0:0*/ __VdlyVal__tb_raster__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__tb_raster__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_raster__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_raster__DOT__rdy_in__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_raster__DOT__vld_out__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_raster__DOT__out_dzdx;
        SData/*15:0*/ tb_raster__DOT__out_dzdy;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__dzdx;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__dzdy;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x;
        SData/*15:0*/ tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y;
        IData/*18:0*/ tb_raster__DOT__in_metadata;
        IData/*31:0*/ tb_raster__DOT__out_edge_0;
        IData/*31:0*/ tb_raster__DOT__out_edge_1;
        IData/*31:0*/ tb_raster__DOT__out_edge_2;
        IData/*18:0*/ tb_raster__DOT__out_metadata;
        IData/*31:0*/ tb_raster__DOT__out_z_current;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__present_state;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__next_state;
        IData/*18:0*/ tb_raster__DOT__tile_proc__DOT__metadata;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__determinant;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__dzdx_undiv;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__dzdy_undiv;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__z_current;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x0y2_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x2y0_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy1vz0_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy2vz1_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy0vz2_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx0vz0_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx1vz1_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx2vz2_mult;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__x_component;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__y_component;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__z_component;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ tb_raster__DOT__v0;
        QData/*47:0*/ tb_raster__DOT__v1;
        QData/*47:0*/ tb_raster__DOT__v2;
        QData/*47:0*/ tb_raster__DOT__out_abs_pos;
        QData/*47:0*/ tb_raster__DOT__out_delta_0;
        QData/*47:0*/ tb_raster__DOT__out_delta_1;
        QData/*47:0*/ tb_raster__DOT__out_delta_2;
        QData/*47:0*/ tb_raster__DOT__tile_proc__DOT__temp_start;
        QData/*47:0*/ tb_raster__DOT__tile_proc__DOT__abs_pos;
        QData/*47:0*/ tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
        QData/*47:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0;
    };
    struct {
        VlUnpacked<QData/*47:0*/, 3> tb_raster__DOT__tile_proc__DOT__v;
        VlUnpacked<QData/*47:0*/, 3> tb_raster__DOT__tile_proc__DOT__rotated_v;
        VlUnpacked<QData/*47:0*/, 3> tb_raster__DOT__tile_proc__DOT__temp_deltas;
        VlUnpacked<QData/*47:0*/, 3> tb_raster__DOT__tile_proc__DOT__deltas;
        VlUnpacked<IData/*31:0*/, 3> tb_raster__DOT__tile_proc__DOT__edges;
        VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a;
        VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b;
        VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc1c78806__0;
    VlTriggerScheduler __VtrigSched_hca70bb26__0;
    VlTriggerScheduler __VtrigSched_h43a42aa4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_raster__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_raster___024root(Vtb_raster__Syms* symsp, const char* v__name);
    ~Vtb_raster___024root();
    VL_UNCOPYABLE(Vtb_raster___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
