// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_all__DOT__clk;
        CData/*0:0*/ tb_all__DOT__vld_out;
        CData/*0:0*/ tb_all__DOT__rst_n;
        CData/*0:0*/ tb_all__DOT__rdy_out;
        CData/*0:0*/ tb_all__DOT__vld_in;
        CData/*0:0*/ tb_all__DOT__rdy_in;
        CData/*7:0*/ tb_all__DOT__color_out;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_vld_0;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_rdy_0;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_vld_1;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_rdy_1;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr;
        CData/*3:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr;
        CData/*7:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
        CData/*7:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_dzdx_0;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_dzdy_0;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
        IData/*18:0*/ tb_all__DOT__metadata;
        IData/*31:0*/ tb_all__DOT__pixel_out;
        IData/*18:0*/ tb_all__DOT__make_meta__Vstatic__meta;
        IData/*18:0*/ tb_all__DOT__rastafarian__DOT__inter_metadata_0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__inter_z_current_0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0;
        VlWide<12>/*370:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out;
        VlWide<12>/*370:0*/ tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state;
        IData/*18:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk3__DOT__i;
    };
    struct {
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__next_state;
        IData/*18:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__out_coord;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ tb_all__DOT__v0;
        QData/*47:0*/ tb_all__DOT__v1;
        QData/*47:0*/ tb_all__DOT__v2;
        QData/*47:0*/ tb_all__DOT__make_coord__Vstatic__point;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__inter_abs_pos_0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__inter_deltas_0;
        VlUnpacked<IData/*31:0*/, 3> tb_all__DOT__rastafarian__DOT__inter_edges_0;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__inter_deltas_1;
        VlUnpacked<IData/*31:0*/, 3> tb_all__DOT__rastafarian__DOT__inter_edges_1;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas;
        VlUnpacked<IData/*31:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges;
        VlUnpacked<VlWide<12>/*370:0*/, 4> tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer;
        VlUnpacked<IData/*31:0*/, 256> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer;
        VlUnpacked<CData/*7:0*/, 256> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer;
        VlUnpacked<QData/*47:0*/, 3> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas;
        VlUnpacked<IData/*31:0*/, 3> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 256>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 256>, false, CData/*7:0*/, 1> __VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5cfcfd92__0;
    VlTriggerScheduler __VtrigSched_h5b99ffb8__0;
    VlTriggerScheduler __VtrigSched_h5cfcfe53__0;
    VlTriggerScheduler __VtrigSched_hcca24acd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
