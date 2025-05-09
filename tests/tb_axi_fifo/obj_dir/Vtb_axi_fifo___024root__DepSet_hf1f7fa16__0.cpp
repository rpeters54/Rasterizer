// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_fifo.h for the primary calling header

#include "Vtb_axi_fifo__pch.h"
#include "Vtb_axi_fifo__Syms.h"
#include "Vtb_axi_fifo___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__0__id;
    __Vtask_tb_axi_fifo__DOT__push_words__0__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__0__n;
    __Vtask_tb_axi_fifo__DOT__push_words__0__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__1__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__2__id;
    __Vtask_tb_axi_fifo__DOT__push_words__2__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__2__n;
    __Vtask_tb_axi_fifo__DOT__push_words__2__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__3__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__4__id;
    __Vtask_tb_axi_fifo__DOT__push_words__4__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__4__n;
    __Vtask_tb_axi_fifo__DOT__push_words__4__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__5__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__6__id;
    __Vtask_tb_axi_fifo__DOT__push_words__6__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__6__n;
    __Vtask_tb_axi_fifo__DOT__push_words__6__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__7__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__8__id;
    __Vtask_tb_axi_fifo__DOT__push_words__8__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__8__n;
    __Vtask_tb_axi_fifo__DOT__push_words__8__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__9__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__10__id;
    __Vtask_tb_axi_fifo__DOT__push_words__10__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__10__n;
    __Vtask_tb_axi_fifo__DOT__push_words__10__n = 0;
    QData/*63:0*/ __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__big_rand;
    __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__big_rand = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i;
    __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__11__n;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__n = 0;
    IData/*31:0*/ __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.tb_axi_fifo__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h2fa34471__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi_fifo__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h2fa34471__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi_fifo__DOT__push_words__0__n = 5U;
    __Vtask_tb_axi_fifo__DOT__push_words__0__id = 1U;
    __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__0__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__0__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__0__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__0__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__0__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__0__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__0__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__0__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__0__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__0__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__0__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__0__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__0__unnamedblk1__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__n = 5U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id = 1U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__1__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__1__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__1__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__1__unnamedblk2__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__push_words__2__n = 4U;
    __Vtask_tb_axi_fifo__DOT__push_words__2__id = 2U;
    __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__2__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__2__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__2__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__2__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__2__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__2__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__2__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__2__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__2__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__2__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__2__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__2__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__2__unnamedblk1__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__n = 4U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id = 2U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__3__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__3__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__3__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__3__unnamedblk2__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__push_words__4__n = 8U;
    __Vtask_tb_axi_fifo__DOT__push_words__4__id = 3U;
    __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__4__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__4__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__4__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__4__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__4__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__4__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__4__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__4__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__4__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__4__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__4__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__4__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__4__unnamedblk1__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__n = 8U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id = 3U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__5__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__5__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__5__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__5__unnamedblk2__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__push_words__6__n = 3U;
    __Vtask_tb_axi_fifo__DOT__push_words__6__id = 1U;
    __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__6__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__6__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__6__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__6__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__6__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__6__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__6__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__6__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__6__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__6__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__6__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__6__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__6__unnamedblk1__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__n = 2U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id = 1U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__7__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__7__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__7__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__7__unnamedblk2__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__push_words__8__n = 4U;
    __Vtask_tb_axi_fifo__DOT__push_words__8__id = 1U;
    __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__8__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__8__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__8__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__8__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__8__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__8__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__8__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__8__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__8__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__8__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__8__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__8__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__8__unnamedblk1__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__n = 5U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id = 1U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__9__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__9__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__9__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__9__unnamedblk2__DOT__i);
    }
    __Vtask_tb_axi_fifo__DOT__push_words__10__n = 4U;
    __Vtask_tb_axi_fifo__DOT__push_words__10__id = 2U;
    __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i, __Vtask_tb_axi_fifo__DOT__push_words__10__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__push_words__10__id)) {
            while ((5U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h51fb3c24__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h5 > tb_axi_fifo.fifo1.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     105);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__big_rand 
                = VL_RANDOM_Q();
            vlSelfRef.tb_axi_fifo__DOT__fifo_64 = VlQueue<QData/*63:0*/>::consVC(__Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__big_rand, 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in1 = vlSelfRef.tb_axi_fifo__DOT__fifo_64.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__push_words__10__id)) {
            while ((4U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_hcc479abf__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h4 > tb_axi_fifo.fifo2.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     116);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_8 = VlQueue<CData/*7:0*/>::consVC(
                                                                               VL_RANDOM_I(), 
                                                                               vlSelfRef.tb_axi_fifo__DOT__fifo_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 118);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in2 = vlSelfRef.tb_axi_fifo__DOT__fifo_8.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 121);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__push_words__10__id)) {
            while ((8U <= (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))) {
                co_await vlSelfRef.__VtrigSched_h570d2b44__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (4'h8 > tb_axi_fifo.fifo3.count))", 
                                                                     "tb_axi_fifo.sv", 
                                                                     126);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            vlSelfRef.tb_axi_fifo__DOT__fifo_16 = VlQueue<SData/*15:0*/>::consVC(
                                                                                VL_RANDOM_I(), 
                                                                                vlSelfRef.tb_axi_fifo__DOT__fifo_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__data_in3 = vlSelfRef.tb_axi_fifo__DOT__fifo_16.atBack(0U);
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 131);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__vld_in3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__push_words__10__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__push_words__10__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__push_words__10__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__push_words__10__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__push_words__10__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__push_words__10__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__push_words__10__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 102, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:102: Assertion failed in %Ntb_axi_fifo.push_words.unnamedblk1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__push_words__10__id);
                VL_STOP_MT("tb_axi_fifo.sv", 102, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__push_words__10__unnamedblk1__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         218);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 1U;
    vlSelfRef.tb_axi_fifo__DOT__data_in2 = 0xffU;
    co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         220);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi_fifo__DOT__vld_in2 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:222: Assertion failed in %Ntb_axi_fifo: FIFO2 allowed write when full\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_axi_fifo.sv", 222, "");
        }
    }
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__n = 4U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id = 2U;
    __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i, __Vtask_tb_axi_fifo__DOT__pop_and_check__11__n)) {
        if ((1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:150: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 150, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((vlSelfRef.tb_axi_fifo__DOT__data_out1 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:152: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO1 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,vlSelfRef.tb_axi_fifo__DOT__data_out1,
                                 64,vlSelfRef.tb_axi_fifo__DOT__fifo_64.at(vlSelfRef.tb_axi_fifo__DOT__count_64));
                    VL_STOP_MT("tb_axi_fifo.sv", 152, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_64 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_64);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 154);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 156);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out1 = 0U;
        } else if ((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:162: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 162, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:164: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO2 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out2),
                                 8,vlSelfRef.tb_axi_fifo__DOT__fifo_8.at(vlSelfRef.tb_axi_fifo__DOT__count_8));
                    VL_STOP_MT("tb_axi_fifo.sv", 164, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_8 = (1ULL 
                                                   + vlSelfRef.tb_axi_fifo__DOT__count_8);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 166);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 168);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out2 = 0U;
        } else if ((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:174: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 underflow on pop #%0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i);
                    VL_STOP_MT("tb_axi_fifo.sv", 174, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3) 
                                  != vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:176: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: FIFO3 data mismatch: got %x, expected %x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.tb_axi_fifo__DOT__data_out3),
                                 16,vlSelfRef.tb_axi_fifo__DOT__fifo_16.at(vlSelfRef.tb_axi_fifo__DOT__count_16));
                    VL_STOP_MT("tb_axi_fifo.sv", 176, "");
                }
            }
            vlSelfRef.tb_axi_fifo__DOT__count_16 = 
                (1ULL + vlSelfRef.tb_axi_fifo__DOT__count_16);
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
            co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axi_fifo.clk)", 
                                                                 "tb_axi_fifo.sv", 
                                                                 180);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((3U 
                                                 == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id) 
                                                << 2U) 
                                               | (((2U 
                                                    == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id) 
                                                   << 1U) 
                                                  | (1U 
                                                     == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id))))))))) {
            if ((0U == (((3U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id) 
                         << 2U) | (((2U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id) 
                                    << 1U) | (1U == __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,__Vtask_tb_axi_fifo__DOT__pop_and_check__11__id);
                    VL_STOP_MT("tb_axi_fifo.sv", 147, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:147: Assertion failed in %Ntb_axi_fifo.pop_and_check.unnamedblk2: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_tb_axi_fifo__DOT__pop_and_check__11__id);
                VL_STOP_MT("tb_axi_fifo.sv", 147, "");
            }
        }
        __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_axi_fifo__DOT__pop_and_check__11__unnamedblk2__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         226);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 1U;
    co_await vlSelfRef.__VtrigSched_h2fa343a0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_fifo.clk)", 
                                                         "tb_axi_fifo.sv", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi_fifo__DOT__rdy_out3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_axi_fifo.sv:230: Assertion failed in %Ntb_axi_fifo: FIFO3 asserted valid when empty\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_axi_fifo.sv", 230, "");
        }
    }
    VL_WRITEF_NX("All tests passed.\n",0);
    VL_FINISH_MT("tb_axi_fifo.sv", 233, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__act(Vtb_axi_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi_fifo___024root___eval_triggers__act(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_triggers__act\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_hd64cf2fc__0;
    __Vtrigcurrexpr_hd64cf2fc__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h5c8054a5__0;
    __Vtrigcurrexpr_h5c8054a5__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hcf3ae41c__0;
    __Vtrigcurrexpr_hcf3ae41c__0 = 0;
    __Vtrigcurrexpr_hd64cf2fc__0 = (5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
    __Vtrigcurrexpr_h5c8054a5__0 = (4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    __Vtrigcurrexpr_hcf3ae41c__0 = (8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_axi_fifo__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_axi_fifo__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_hd64cf2fc__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_hd64cf2fc__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_h5c8054a5__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_h5c8054a5__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_hcf3ae41c__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_hcf3ae41c__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0 
        = vlSelfRef.tb_axi_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hd64cf2fc__0 = __Vtrigcurrexpr_hd64cf2fc__0;
    vlSelfRef.__Vtrigprevexpr_h5c8054a5__0 = __Vtrigcurrexpr_h5c8054a5__0;
    vlSelfRef.__Vtrigprevexpr_hcf3ae41c__0 = __Vtrigcurrexpr_hcf3ae41c__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
