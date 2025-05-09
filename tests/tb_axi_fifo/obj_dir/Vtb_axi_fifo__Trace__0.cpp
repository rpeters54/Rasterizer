// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi_fifo__Syms.h"


void Vtb_axi_fifo___024root__trace_chg_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_chg_0\n"); );
    // Init
    Vtb_axi_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_fifo___024root*>(voidSelf);
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi_fifo___024root__trace_chg_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_chg_0_sub_0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_axi_fifo__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_axi_fifo__DOT__rdy_out1));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_axi_fifo__DOT__vld_in1));
        bufp->chgQData(oldp+3,(vlSelfRef.tb_axi_fifo__DOT__data_in1),64);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_axi_fifo__DOT__rdy_out2));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_axi_fifo__DOT__vld_in2));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_axi_fifo__DOT__data_in2),8);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_axi_fifo__DOT__rdy_out3));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_axi_fifo__DOT__vld_in3));
        bufp->chgSData(oldp+10,(vlSelfRef.tb_axi_fifo__DOT__data_in3),16);
        bufp->chgQData(oldp+11,(vlSelfRef.tb_axi_fifo__DOT__count_64),64);
        bufp->chgQData(oldp+13,(vlSelfRef.tb_axi_fifo__DOT__count_16),64);
        bufp->chgQData(oldp+15,(vlSelfRef.tb_axi_fifo__DOT__count_8),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgQData(oldp+17,(vlSelfRef.tb_axi_fifo__DOT__data_out1),64);
        bufp->chgBit(oldp+19,((5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))));
        bufp->chgBit(oldp+20,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))));
        bufp->chgCData(oldp+21,(vlSelfRef.tb_axi_fifo__DOT__data_out2),8);
        bufp->chgBit(oldp+22,((4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))));
        bufp->chgBit(oldp+23,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))));
        bufp->chgSData(oldp+24,(vlSelfRef.tb_axi_fifo__DOT__data_out3),16);
        bufp->chgBit(oldp+25,((8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))));
        bufp->chgBit(oldp+26,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))));
        bufp->chgCData(oldp+27,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr),4);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr),4);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count),4);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr),3);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr),3);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count),4);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr),4);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr),4);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+36,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[0]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[1]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[2]),64);
        bufp->chgQData(oldp+42,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[3]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[4]),64);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[0]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[1]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[2]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[3]),8);
        bufp->chgSData(oldp+50,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[0]),16);
        bufp->chgSData(oldp+51,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[1]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[2]),16);
        bufp->chgSData(oldp+53,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[3]),16);
        bufp->chgSData(oldp+54,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[4]),16);
        bufp->chgSData(oldp+55,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[5]),16);
        bufp->chgSData(oldp+56,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[6]),16);
        bufp->chgSData(oldp+57,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[7]),16);
    }
    bufp->chgBit(oldp+58,(vlSelfRef.tb_axi_fifo__DOT__clk));
}

void Vtb_axi_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_fifo___024root*>(voidSelf);
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
