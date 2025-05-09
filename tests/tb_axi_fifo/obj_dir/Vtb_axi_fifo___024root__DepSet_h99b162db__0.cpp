// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_fifo.h for the primary calling header

#include "Vtb_axi_fifo__pch.h"
#include "Vtb_axi_fifo___024root.h"

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_initial__TOP(Vtb_axi_fifo___024root* vlSelf);
VlCoroutine Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_axi_fifo___024root* vlSelf);
VlCoroutine Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_axi_fifo___024root* vlSelf);

void Vtb_axi_fifo___024root___eval_initial(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_initial\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi_fifo___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0 
        = vlSelfRef.tb_axi_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hd64cf2fc__0 = (5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
    vlSelfRef.__Vtrigprevexpr_h5c8054a5__0 = (4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    vlSelfRef.__Vtrigprevexpr_hcf3ae41c__0 = (8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
}

VL_INLINE_OPT VlCoroutine Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi_fifo__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_axi_fifo.sv", 
                                             32);
        vlSelfRef.tb_axi_fifo__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_axi_fifo__DOT__clk)));
    }
}

void Vtb_axi_fifo___024root___eval_act(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_act\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_axi_fifo___024root___nba_sequent__TOP__0(Vtb_axi_fifo___024root* vlSelf);

void Vtb_axi_fifo___024root___eval_nba(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_nba\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_axi_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi_fifo___024root___nba_sequent__TOP__0(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___nba_sequent__TOP__0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__ptr = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__ptr = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__ptr = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__ptr = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__Vfuncout;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__ptr;
    __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__ptr = 0;
    CData/*3:0*/ __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count;
    __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count = 0;
    CData/*3:0*/ __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count;
    __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count = 0;
    CData/*3:0*/ __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count;
    __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count = 0;
    QData/*63:0*/ __VdlyVal__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0;
    __VdlyVal__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0;
    __VdlyDim0__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0;
    __VdlySet__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0;
    __VdlyVal__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0;
    __VdlyDim0__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0;
    __VdlySet__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0;
    __VdlyVal__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0;
    __VdlyDim0__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0;
    __VdlySet__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 = 0;
    // Body
    __VdlySet__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 = 0U;
    __VdlySet__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 = 0U;
    __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count;
    __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count;
    __VdlySet__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 = 0U;
    __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count;
    if (vlSelfRef.tb_axi_fifo__DOT__rst_n) {
        if (((((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in2) 
               & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in2)) 
              & (IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out2)) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out2))) {
            __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count 
                = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count;
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in2) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in2))) {
            __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count)));
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out2) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out2))) {
            __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count 
                = (0xfU & ((IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count) 
                           - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in2) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in2))) {
            vlSelfRef.tb_axi_fifo__DOT__data_out2 = 
                vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr))];
            __VdlyVal__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 
                = vlSelfRef.tb_axi_fifo__DOT__data_in2;
            __VdlyDim0__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 
                = (3U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr));
            __VdlySet__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0 = 1U;
            __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__Vfuncout 
                = ((3U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__16__Vfuncout;
        }
        if (vlSelfRef.tb_axi_fifo__DOT__rdy_out2) {
            vlSelfRef.tb_axi_fifo__DOT__data_out2 = 
                vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer
                [(3U & ([&]() {
                        __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__ptr 
                            = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr;
                        __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__Vfuncout 
                            = ((3U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__ptr))
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__ptr))));
                    }(), (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__17__Vfuncout)))];
            __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__Vfuncout 
                = ((3U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo2__DOT__next_ptr_index__18__Vfuncout;
        }
    } else {
        __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__data_out2 = vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer
            [0U];
    }
    if (vlSelfRef.tb_axi_fifo__DOT__rst_n) {
        if (((((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in3) 
               & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in3)) 
              & (IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out3)) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out3))) {
            __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count 
                = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count;
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in3) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in3))) {
            __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count)));
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out3) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out3))) {
            __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count 
                = (0xfU & ((IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count) 
                           - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in3) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in3))) {
            vlSelfRef.tb_axi_fifo__DOT__data_out3 = 
                vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer
                [(7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr))];
            __VdlyVal__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 
                = vlSelfRef.tb_axi_fifo__DOT__data_in3;
            __VdlyDim0__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 
                = (7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr));
            __VdlySet__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0 = 1U;
            __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__Vfuncout 
                = ((7U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__19__Vfuncout;
        }
        if (vlSelfRef.tb_axi_fifo__DOT__rdy_out3) {
            vlSelfRef.tb_axi_fifo__DOT__data_out3 = 
                vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer
                [(7U & ([&]() {
                        __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__ptr 
                            = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr;
                        __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__Vfuncout 
                            = ((7U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__ptr))
                                ? 0U : (0xfU & ((IData)(1U) 
                                                + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__ptr))));
                    }(), (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__20__Vfuncout)))];
            __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__Vfuncout 
                = ((7U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo3__DOT__next_ptr_index__21__Vfuncout;
        }
    } else {
        __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__data_out3 = vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer
            [0U];
    }
    if (vlSelfRef.tb_axi_fifo__DOT__rst_n) {
        if (((((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in1) 
               & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in1)) 
              & (IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out1)) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out1))) {
            __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count 
                = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count;
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in1) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in1))) {
            __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count)));
        } else if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_out1) 
                    & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_out1))) {
            __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count 
                = (0xfU & ((IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count) 
                           - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.tb_axi_fifo__DOT__vld_in1) 
             & (IData)(vlSelfRef.tb_axi_fifo__DOT__rdy_in1))) {
            vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT____Vlvbound_he6849cae__0 
                = vlSelfRef.tb_axi_fifo__DOT__data_in1;
            vlSelfRef.tb_axi_fifo__DOT__data_out1 = 
                ((4U >= (7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr)))
                  ? vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer
                 [(7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr))]
                  : 0ULL);
            if ((4U >= (7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr)))) {
                __VdlyVal__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 
                    = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT____Vlvbound_he6849cae__0;
                __VdlyDim0__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 
                    = (7U & (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr));
                __VdlySet__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0 = 1U;
            }
            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__Vfuncout 
                = ((4U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__12__Vfuncout;
        }
        if (vlSelfRef.tb_axi_fifo__DOT__rdy_out1) {
            vlSelfRef.tb_axi_fifo__DOT__data_out1 = 
                ((4U >= (7U & ([&]() {
                                __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__ptr 
                                    = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr;
                                __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__Vfuncout 
                                    = ((4U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__ptr))
                                        ? 0U : (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__ptr))));
                            }(), (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__13__Vfuncout))))
                  ? vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer
                 [(7U & ([&]() {
                            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__ptr 
                                = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr;
                            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__Vfuncout 
                                = ((4U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__ptr))
                                    ? 0U : (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__ptr))));
                        }(), (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__14__Vfuncout)))]
                  : 0ULL);
            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__ptr 
                = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr;
            __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__Vfuncout 
                = ((4U <= (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(__Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__ptr))));
            vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr 
                = __Vfunc_tb_axi_fifo__DOT__fifo1__DOT__next_ptr_index__15__Vfuncout;
        }
    } else {
        __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr = 0U;
        vlSelfRef.tb_axi_fifo__DOT__data_out1 = vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer
            [0U];
    }
    if (__VdlySet__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0) {
        vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[__VdlyDim0__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0] 
            = __VdlyVal__tb_axi_fifo__DOT__fifo2__DOT__buffer__v0;
    }
    vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count = __Vdly__tb_axi_fifo__DOT__fifo2__DOT__count;
    if (__VdlySet__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0) {
        vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[__VdlyDim0__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0] 
            = __VdlyVal__tb_axi_fifo__DOT__fifo3__DOT__buffer__v0;
    }
    vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count = __Vdly__tb_axi_fifo__DOT__fifo3__DOT__count;
    if (__VdlySet__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0) {
        vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[__VdlyDim0__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0] 
            = __VdlyVal__tb_axi_fifo__DOT__fifo1__DOT__buffer__v0;
    }
    vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count = __Vdly__tb_axi_fifo__DOT__fifo1__DOT__count;
    vlSelfRef.tb_axi_fifo__DOT__vld_out2 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in2 = (4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__vld_out3 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in3 = (8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__vld_out1 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in1 = (5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
}

void Vtb_axi_fifo___024root___timing_resume(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___timing_resume\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2fa34471__0.resume(
                                                   "@(negedge tb_axi_fifo.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h51fb3c24__0.resume(
                                                   "@( (4'h5 > tb_axi_fifo.fifo1.count))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2fa343a0__0.resume(
                                                   "@(posedge tb_axi_fifo.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcc479abf__0.resume(
                                                   "@( (4'h4 > tb_axi_fifo.fifo2.count))");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h570d2b44__0.resume(
                                                   "@( (4'h8 > tb_axi_fifo.fifo3.count))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_axi_fifo___024root___timing_commit(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___timing_commit\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2fa34471__0.commit(
                                                   "@(negedge tb_axi_fifo.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h51fb3c24__0.commit(
                                                   "@( (4'h5 > tb_axi_fifo.fifo1.count))");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2fa343a0__0.commit(
                                                   "@(posedge tb_axi_fifo.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcc479abf__0.commit(
                                                   "@( (4'h4 > tb_axi_fifo.fifo2.count))");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h570d2b44__0.commit(
                                                   "@( (4'h8 > tb_axi_fifo.fifo3.count))");
    }
}

void Vtb_axi_fifo___024root___eval_triggers__act(Vtb_axi_fifo___024root* vlSelf);

bool Vtb_axi_fifo___024root___eval_phase__act(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_phase__act\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_axi_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_axi_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_axi_fifo___024root___timing_resume(vlSelf);
        Vtb_axi_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_axi_fifo___024root___eval_phase__nba(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_phase__nba\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_axi_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__nba(Vtb_axi_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__act(Vtb_axi_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi_fifo___024root___eval(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_axi_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_axi_fifo.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_axi_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_axi_fifo.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_axi_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_axi_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_axi_fifo___024root___eval_debug_assertions(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_debug_assertions\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
