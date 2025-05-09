// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi_fifo__Syms.h"


VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_init_sub__TOP__0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_init_sub__TOP__0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_axi_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vld_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"data_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+18,0,"data_out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+20,0,"rdy_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"vld_out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rdy_out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"vld_in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"data_in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"data_out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"rdy_in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"vld_out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"rdy_out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"vld_in3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"data_in3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"data_out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"rdy_in3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"vld_out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+12,0,"count_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+14,0,"count_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"count_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("fifo1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+18,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+20,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+37+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+28,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"next_read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+31,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"next_read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+34,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"next_read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_init_top(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_init_top\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_register(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_register\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_axi_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_axi_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_axi_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_axi_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_const_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_const_0\n"); );
    // Init
    Vtb_axi_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_fifo___024root*>(voidSelf);
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_const_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_const_0_sub_0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+63,(0xaU),32);
    bufp->fullIData(oldp+64,(0x40U),32);
    bufp->fullIData(oldp+65,(5U),32);
    bufp->fullIData(oldp+66,(3U),32);
    bufp->fullIData(oldp+67,(8U),32);
    bufp->fullIData(oldp+68,(4U),32);
    bufp->fullIData(oldp+69,(2U),32);
    bufp->fullIData(oldp+70,(0x10U),32);
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_full_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_full_0\n"); );
    // Init
    Vtb_axi_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_fifo___024root*>(voidSelf);
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi_fifo___024root__trace_full_0_sub_0(Vtb_axi_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root__trace_full_0_sub_0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_axi_fifo__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_axi_fifo__DOT__rdy_out1));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_axi_fifo__DOT__vld_in1));
    bufp->fullQData(oldp+4,(vlSelfRef.tb_axi_fifo__DOT__data_in1),64);
    bufp->fullBit(oldp+6,(vlSelfRef.tb_axi_fifo__DOT__rdy_out2));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_axi_fifo__DOT__vld_in2));
    bufp->fullCData(oldp+8,(vlSelfRef.tb_axi_fifo__DOT__data_in2),8);
    bufp->fullBit(oldp+9,(vlSelfRef.tb_axi_fifo__DOT__rdy_out3));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_axi_fifo__DOT__vld_in3));
    bufp->fullSData(oldp+11,(vlSelfRef.tb_axi_fifo__DOT__data_in3),16);
    bufp->fullQData(oldp+12,(vlSelfRef.tb_axi_fifo__DOT__count_64),64);
    bufp->fullQData(oldp+14,(vlSelfRef.tb_axi_fifo__DOT__count_16),64);
    bufp->fullQData(oldp+16,(vlSelfRef.tb_axi_fifo__DOT__count_8),64);
    bufp->fullQData(oldp+18,(vlSelfRef.tb_axi_fifo__DOT__data_out1),64);
    bufp->fullBit(oldp+20,((5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))));
    bufp->fullBit(oldp+21,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count))));
    bufp->fullCData(oldp+22,(vlSelfRef.tb_axi_fifo__DOT__data_out2),8);
    bufp->fullBit(oldp+23,((4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))));
    bufp->fullBit(oldp+24,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count))));
    bufp->fullSData(oldp+25,(vlSelfRef.tb_axi_fifo__DOT__data_out3),16);
    bufp->fullBit(oldp+26,((8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))));
    bufp->fullBit(oldp+27,((0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count))));
    bufp->fullCData(oldp+28,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__write_ptr),4);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__read_ptr),4);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count),4);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__write_ptr),3);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__read_ptr),3);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count),4);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__write_ptr),4);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__read_ptr),4);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count),4);
    bufp->fullQData(oldp+37,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[0]),64);
    bufp->fullQData(oldp+39,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[1]),64);
    bufp->fullQData(oldp+41,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[2]),64);
    bufp->fullQData(oldp+43,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[3]),64);
    bufp->fullQData(oldp+45,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__buffer[4]),64);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__next_read_ptr),4);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[0]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[1]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[2]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__buffer[3]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__next_read_ptr),3);
    bufp->fullSData(oldp+53,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[0]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[1]),16);
    bufp->fullSData(oldp+55,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[2]),16);
    bufp->fullSData(oldp+56,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[3]),16);
    bufp->fullSData(oldp+57,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[4]),16);
    bufp->fullSData(oldp+58,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[5]),16);
    bufp->fullSData(oldp+59,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[6]),16);
    bufp->fullSData(oldp+60,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__buffer[7]),16);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__next_read_ptr),4);
    bufp->fullBit(oldp+62,(vlSelfRef.tb_axi_fifo__DOT__clk));
}
