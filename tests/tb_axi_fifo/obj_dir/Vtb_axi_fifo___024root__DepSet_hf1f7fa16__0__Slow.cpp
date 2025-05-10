// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_fifo.h for the primary calling header

#include "Vtb_axi_fifo__pch.h"
#include "Vtb_axi_fifo__Syms.h"
#include "Vtb_axi_fifo___024root.h"

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_initial__TOP(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_initial__TOP\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6669666fU;
    __Vtemp_1[2U] = 0x6178695fU;
    __Vtemp_1[3U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_axi_fifo__DOT__count_64 = 0ULL;
    vlSelfRef.tb_axi_fifo__DOT__count_16 = 0ULL;
    vlSelfRef.tb_axi_fifo__DOT__count_8 = 0ULL;
    vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count = 0U;
    vlSelfRef.tb_axi_fifo__DOT__data_out1 = 0ULL;
    vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count = 0U;
    vlSelfRef.tb_axi_fifo__DOT__data_out2 = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr = 0U;
    vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count = 0U;
    vlSelfRef.tb_axi_fifo__DOT__data_out3 = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__stl(Vtb_axi_fifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_triggers__stl(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_triggers__stl\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi_fifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
