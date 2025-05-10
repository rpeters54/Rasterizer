// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_all.h for the primary calling header

#ifndef VERILATED_VTB_ALL___024ROOT_H_
#define VERILATED_VTB_ALL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_all__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_all___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_all__DOT__clk;
        CData/*0:0*/ tb_all__DOT__vld_out;
        CData/*0:0*/ tb_all__DOT__rst_n;
        CData/*0:0*/ tb_all__DOT__vld_in;
        CData/*0:0*/ tb_all__DOT__rdy_out;
        CData/*0:0*/ tb_all__DOT__rdy_in;
        CData/*7:0*/ tb_all__DOT__color;
        CData/*5:0*/ tb_all__DOT__tile_x;
        CData/*4:0*/ tb_all__DOT__tile_y;
        CData/*7:0*/ tb_all__DOT__color_out;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_vld_0;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_rdy_0;
        CData/*7:0*/ tb_all__DOT__rastafarian__DOT__inter_color_0;
        CData/*5:0*/ tb_all__DOT__rastafarian__DOT__inter_tile_x_0;
        CData/*4:0*/ tb_all__DOT__rastafarian__DOT__inter_tile_y_0;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_vld_1;
        CData/*0:0*/ tb_all__DOT__rastafarian__DOT__inter_rdy_1;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr;
        CData/*3:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
        CData/*2:0*/ tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr;
        CData/*1:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state;
        CData/*1:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__next_state;
        CData/*7:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
        CData/*7:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_all__DOT__v0_x;
        SData/*15:0*/ tb_all__DOT__v0_y;
        SData/*15:0*/ tb_all__DOT__v0_z;
        SData/*15:0*/ tb_all__DOT__v1_x;
        SData/*15:0*/ tb_all__DOT__v1_y;
        SData/*15:0*/ tb_all__DOT__v1_z;
        SData/*15:0*/ tb_all__DOT__v2_x;
        SData/*15:0*/ tb_all__DOT__v2_y;
        SData/*15:0*/ tb_all__DOT__v2_z;
        SData/*15:0*/ tb_all__DOT__pixel_out_x;
        SData/*15:0*/ tb_all__DOT__pixel_out_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_abs_pos_0_x;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_abs_pos_0_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_abs_pos_0_z;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_0_x;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_0_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_0_z;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_1_x;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_1_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_1_z;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_2_x;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_2_y;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_deltas_0_2_z;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_dzdx_0;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__inter_dzdy_0;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdx;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdy;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
        SData/*15:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
        IData/*31:0*/ tb_all__DOT__out_edge_0;
        IData/*31:0*/ tb_all__DOT__out_edge_1;
    };
    struct {
        IData/*31:0*/ tb_all__DOT__out_edge_2;
        IData/*18:0*/ tb_all__DOT__make_meta__Vstatic__meta;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__inter_edges_0_0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__inter_edges_0_1;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__inter_edges_0_2;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__inter_z_current_0;
        VlWide<12>/*370:0*/ tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out;
        VlWide<12>/*370:0*/ tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_edge_i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_a;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_b;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_c;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_z;
        IData/*18:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_0;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_1;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_2;
        IData/*18:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_row_off;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_row_off;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_col_off;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_col_off;
        IData/*31:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ tb_all__DOT__make_coord__Vstatic__point;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v1;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v2;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2;
        QData/*47:0*/ tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord;
        QData/*47:0*/ __Vtask_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__out;
        QData/*47:0*/ __Vtask_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__out;
        QData/*47:0*/ __Vtask_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__122__out;
        VlUnpacked<IData/*31:0*/, 3> tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges;
        VlUnpacked<VlWide<12>/*370:0*/, 4> tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer;
        VlUnpacked<IData/*31:0*/, 256> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer;
        VlUnpacked<CData/*7:0*/, 256> tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer;
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
    Vtb_all__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_all___024root(Vtb_all__Syms* symsp, const char* v__name);
    ~Vtb_all___024root();
    VL_UNCOPYABLE(Vtb_all___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
