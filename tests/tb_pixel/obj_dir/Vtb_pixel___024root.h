// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pixel.h for the primary calling header

#ifndef VERILATED_VTB_PIXEL___024ROOT_H_
#define VERILATED_VTB_PIXEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pixel__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pixel___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pixel__DOT__clk;
    CData/*0:0*/ tb_pixel__DOT__rst_n;
    CData/*0:0*/ tb_pixel__DOT__rdy_out;
    CData/*0:0*/ tb_pixel__DOT__vld_in;
    CData/*0:0*/ tb_pixel__DOT__rdy_in;
    CData/*0:0*/ tb_pixel__DOT__vld_out;
    CData/*7:0*/ tb_pixel__DOT__color_out;
    CData/*7:0*/ tb_pixel__DOT__pixel_proc__DOT__rel_pos;
    CData/*7:0*/ tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
    CData/*0:0*/ __VdlyVal__tb_pixel__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pixel__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pixel__DOT__rdy_in__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_pixel__DOT__in_dzdx;
    SData/*15:0*/ tb_pixel__DOT__in_dzdy;
    SData/*15:0*/ tb_pixel__DOT__pixel_proc__DOT__dzdx;
    SData/*15:0*/ tb_pixel__DOT__pixel_proc__DOT__dzdy;
    IData/*31:0*/ tb_pixel__DOT__in_edge_0;
    IData/*31:0*/ tb_pixel__DOT__in_edge_1;
    IData/*31:0*/ tb_pixel__DOT__in_edge_2;
    IData/*18:0*/ tb_pixel__DOT__in_metadata;
    IData/*31:0*/ tb_pixel__DOT__in_z_current;
    IData/*31:0*/ tb_pixel__DOT__pixel_out;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__present_state;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__next_state;
    IData/*18:0*/ tb_pixel__DOT__pixel_proc__DOT__metadata;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__z_current;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__out_coord;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
    IData/*31:0*/ tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ tb_pixel__DOT__in_abs_pos;
    QData/*47:0*/ tb_pixel__DOT__in_delta_0;
    QData/*47:0*/ tb_pixel__DOT__in_delta_1;
    QData/*47:0*/ tb_pixel__DOT__in_delta_2;
    QData/*47:0*/ tb_pixel__DOT__pixel_proc__DOT__abs_pos;
    QData/*47:0*/ tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos;
    QData/*47:0*/ tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out;
    VlUnpacked<IData/*31:0*/, 256> tb_pixel__DOT__pixel_proc__DOT__z_buffer;
    VlUnpacked<CData/*7:0*/, 256> tb_pixel__DOT__pixel_proc__DOT__color_buffer;
    VlUnpacked<QData/*47:0*/, 3> tb_pixel__DOT__pixel_proc__DOT__deltas;
    VlUnpacked<IData/*31:0*/, 3> tb_pixel__DOT__pixel_proc__DOT__edges;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 256>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__z_buffer;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 256>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__color_buffer;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9f95fec7__0;
    VlTriggerScheduler __VtrigSched_hcc9cc3b7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_pixel__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pixel___024root(Vtb_pixel__Syms* symsp, const char* v__name);
    ~Vtb_pixel___024root();
    VL_UNCOPYABLE(Vtb_pixel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
