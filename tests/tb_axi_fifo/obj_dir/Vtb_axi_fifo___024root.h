// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axi_fifo.h for the primary calling header

#ifndef VERILATED_VTB_AXI_FIFO___024ROOT_H_
#define VERILATED_VTB_AXI_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_axi_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_axi_fifo__DOT__clk;
    CData/*0:0*/ tb_axi_fifo__DOT__rst_n;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_out1;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_in1;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_in1;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_out1;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_out2;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_in2;
    CData/*7:0*/ tb_axi_fifo__DOT__data_in2;
    CData/*7:0*/ tb_axi_fifo__DOT__data_out2;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_in2;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_out2;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_out3;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_in3;
    CData/*0:0*/ tb_axi_fifo__DOT__rdy_in3;
    CData/*0:0*/ tb_axi_fifo__DOT__vld_out3;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo1__DOT__write_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo1__DOT__read_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo1__DOT__count;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo1__DOT__next_read_ptr;
    CData/*2:0*/ tb_axi_fifo__DOT__fifo2__DOT__write_ptr;
    CData/*2:0*/ tb_axi_fifo__DOT__fifo2__DOT__read_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo2__DOT__count;
    CData/*2:0*/ tb_axi_fifo__DOT__fifo2__DOT__next_read_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo3__DOT__write_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo3__DOT__read_ptr;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo3__DOT__count;
    CData/*3:0*/ tb_axi_fifo__DOT__fifo3__DOT__next_read_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_hd64cf2fc__0;
    CData/*0:0*/ __Vtrigprevexpr_h5c8054a5__0;
    CData/*0:0*/ __Vtrigprevexpr_hcf3ae41c__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_axi_fifo__DOT__data_in3;
    SData/*15:0*/ tb_axi_fifo__DOT__data_out3;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_axi_fifo__DOT__data_in1;
    QData/*63:0*/ tb_axi_fifo__DOT__data_out1;
    QData/*63:0*/ tb_axi_fifo__DOT__count_64;
    QData/*63:0*/ tb_axi_fifo__DOT__count_16;
    QData/*63:0*/ tb_axi_fifo__DOT__count_8;
    QData/*63:0*/ tb_axi_fifo__DOT__fifo1__DOT____Vlvbound_he6849cae__0;
    VlUnpacked<QData/*63:0*/, 5> tb_axi_fifo__DOT__fifo1__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 4> tb_axi_fifo__DOT__fifo2__DOT__buffer;
    VlUnpacked<SData/*15:0*/, 8> tb_axi_fifo__DOT__fifo3__DOT__buffer;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlQueue<CData/*7:0*/> tb_axi_fifo__DOT__fifo_8;
    VlQueue<SData/*15:0*/> tb_axi_fifo__DOT__fifo_16;
    VlQueue<QData/*63:0*/> tb_axi_fifo__DOT__fifo_64;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2fa34471__0;
    VlTriggerScheduler __VtrigSched_h51fb3c24__0;
    VlTriggerScheduler __VtrigSched_hcc479abf__0;
    VlTriggerScheduler __VtrigSched_h570d2b44__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_axi_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_axi_fifo___024root(Vtb_axi_fifo__Syms* symsp, const char* v__name);
    ~Vtb_axi_fifo___024root();
    VL_UNCOPYABLE(Vtb_axi_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
