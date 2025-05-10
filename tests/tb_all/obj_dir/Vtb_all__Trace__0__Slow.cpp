// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_all__Syms.h"


VL_ATTR_COLD void Vtb_all___024root__trace_init_sub__TOP__0(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_init_sub__TOP__0\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_all", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vld_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("v0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+7,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+13,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+74,0,"rdy_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"vld_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"color_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+236,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("make_coord__Vstatic__point", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("make_meta__Vstatic__meta", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+19,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("rastafarian", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("v0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+7,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+13,0,"color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+74,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"color_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_abs_pos_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+79,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_0_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+82,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_0_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+85,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_0_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+88,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+91,0,"inter_edges_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"inter_edges_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"inter_edges_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("inter_metadata_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+94,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+96,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+97,0,"inter_dzdx_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"inter_dzdy_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"inter_z_current_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"inter_vld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"inter_rdy_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("inter_abs_pos_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_1_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+26,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_1_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_1_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+32,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+35,0,"inter_edges_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"inter_edges_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"inter_edges_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("inter_metadata_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+41,0,"inter_dzdx_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"inter_dzdy_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"inter_z_current_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"inter_vld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"inter_rdy_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("axel_f", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+102,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 370,0);
    tracep->declArray(c+45,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 370,0);
    tracep->declBit(c+22,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+114+i*12,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 370,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+57,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"next_read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("pixel_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+26,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+32,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+35,0,"in_edge_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"in_edge_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"in_edge_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("in_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+41,0,"in_dzdx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"in_dzdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"in_z_current",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"color_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+163,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+164,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+165,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("flush_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+167,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+170,0,"rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"flush_rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+172,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+175,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+176,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+177,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+178,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+180,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+181,0,"edge_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"edge_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"edge_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+184,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+186,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+187,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+189,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_coord", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+190,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+191,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+192,0,"current_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+61,0,"new_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+241,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_coord", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+193,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+194,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+196,0,"temp_z_row_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"temp_edge_row_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"temp_z_col_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"temp_edge_col_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tile_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("v0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+7,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+13,0,"color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+74,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+79,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+82,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+85,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+88,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+91,0,"out_edge_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"out_edge_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"out_edge_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+94,0,"color",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"tile_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+96,0,"tile_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+97,0,"out_dzdx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"out_dzdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"out_z_current",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+235,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("temp_start", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+62,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+65,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+71,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+202,0,"temp_edge_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"temp_coeff_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"temp_coeff_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"temp_coeff_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"temp_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"temp_dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"temp_dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+241,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+209,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+211,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+212,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+213,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+215,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+217,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+218,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("edges", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+221+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+224,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+226,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+227,0,"coeff_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"coeff_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"coeff_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+231,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_all___024root__trace_init_top(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_init_top\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_all___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_all___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_all___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_all___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_all___024root__trace_register(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_register\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_all___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_all___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_all___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_all___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_all___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_const_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_all___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_const_0_sub_0\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+236,(0xaU),32);
    bufp->fullIData(oldp+237,(0x173U),32);
    bufp->fullIData(oldp+238,(4U),32);
    bufp->fullIData(oldp+239,(2U),32);
    bufp->fullIData(oldp+240,(3U),32);
    bufp->fullSData(oldp+241,(0U),16);
}

VL_ATTR_COLD void Vtb_all___024root__trace_full_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_all___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_full_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_all___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_all___024root__trace_full_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_full_0_sub_0\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_all__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_all__DOT__rdy_out));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_all__DOT__vld_in));
    bufp->fullSData(oldp+4,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v0 
                                                >> 0x20U)))),16);
    bufp->fullSData(oldp+5,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v0 
                                                >> 0x10U)))),16);
    bufp->fullSData(oldp+6,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v0))),16);
    bufp->fullSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v1 
                                                >> 0x20U)))),16);
    bufp->fullSData(oldp+8,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v1 
                                                >> 0x10U)))),16);
    bufp->fullSData(oldp+9,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v1))),16);
    bufp->fullSData(oldp+10,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+11,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+12,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v2))),16);
    bufp->fullCData(oldp+13,((0xffU & (vlSelfRef.tb_all__DOT__metadata 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+14,((0x3fU & (vlSelfRef.tb_all__DOT__metadata 
                                       >> 5U))),6);
    bufp->fullCData(oldp+15,((0x1fU & vlSelfRef.tb_all__DOT__metadata)),5);
    bufp->fullSData(oldp+16,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+17,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+18,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__make_coord__Vstatic__point))),16);
    bufp->fullCData(oldp+19,((0xffU & (vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+20,((0x3fU & (vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
                                       >> 5U))),6);
    bufp->fullCData(oldp+21,((0x1fU & vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta)),5);
    bufp->fullBit(oldp+22,((4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
    bufp->fullSData(oldp+23,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+24,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+25,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+26,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+27,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+28,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+29,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+30,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+31,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+32,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+33,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+34,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                            >> 0x13U)))),16);
    bufp->fullIData(oldp+35,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+36,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+37,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                           >> 0x13U))),32);
    bufp->fullCData(oldp+38,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+39,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                       >> 5U))),6);
    bufp->fullCData(oldp+40,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U])),5);
    bufp->fullSData(oldp+41,((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+42,((0xffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U])),16);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U]),32);
    bufp->fullBit(oldp+44,((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
    bufp->fullWData(oldp+45,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out),371);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr),3);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr),3);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count),4);
    bufp->fullCData(oldp+60,(((0U == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
                               ? ((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                                   ? ((((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                                   << 6U)) 
                                        | (0x3fU & 
                                           (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                            >> 5U))) 
                                       >= ((0x7c0U 
                                            & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                               << 6U)) 
                                           | (0x3fU 
                                              & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                                 >> 5U))))
                                       ? 2U : 1U) : 0U)
                               : ((1U == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
                                   ? ((0xffU > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
                                    ? ((0xffU > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))
                                        ? 2U : 0U) : 0U)))),2);
    bufp->fullSData(oldp+61,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                         << 6U)) | 
                              (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                        >> 5U)))),11);
    bufp->fullSData(oldp+62,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+63,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+64,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start))),16);
    bufp->fullSData(oldp+65,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+66,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+67,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0))),16);
    bufp->fullSData(oldp+68,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+69,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+70,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1))),16);
    bufp->fullSData(oldp+71,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+72,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+73,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2))),16);
    bufp->fullBit(oldp+74,(vlSelfRef.tb_all__DOT__rdy_in));
    bufp->fullBit(oldp+75,(vlSelfRef.tb_all__DOT__vld_out));
    bufp->fullCData(oldp+76,(vlSelfRef.tb_all__DOT__color_out),8);
    bufp->fullSData(oldp+77,((vlSelfRef.tb_all__DOT__pixel_out 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+78,((0xffffU & vlSelfRef.tb_all__DOT__pixel_out)),16);
    bufp->fullSData(oldp+79,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+80,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+81,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0))),16);
    bufp->fullSData(oldp+82,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+83,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+84,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0))),16);
    bufp->fullSData(oldp+85,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+86,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+87,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1))),16);
    bufp->fullSData(oldp+88,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+89,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+90,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2))),16);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_0),32);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_1),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_2),32);
    bufp->fullCData(oldp+94,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+95,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                       >> 5U))),6);
    bufp->fullCData(oldp+96,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0)),5);
    bufp->fullSData(oldp+97,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0),16);
    bufp->fullSData(oldp+98,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0),16);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0),32);
    bufp->fullBit(oldp+100,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0));
    bufp->fullBit(oldp+101,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1));
    bufp->fullWData(oldp+102,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in),371);
    bufp->fullWData(oldp+114,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[0]),371);
    bufp->fullWData(oldp+126,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[1]),371);
    bufp->fullWData(oldp+138,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[2]),371);
    bufp->fullWData(oldp+150,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[3]),371);
    bufp->fullCData(oldp+162,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr),3);
    bufp->fullCData(oldp+163,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state),2);
    bufp->fullSData(oldp+164,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+165,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+166,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos))),16);
    bufp->fullSData(oldp+167,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+168,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+169,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos))),16);
    bufp->fullCData(oldp+170,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos),8);
    bufp->fullCData(oldp+171,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos),8);
    bufp->fullSData(oldp+172,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+173,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+174,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0))),16);
    bufp->fullSData(oldp+175,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+176,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+177,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1))),16);
    bufp->fullSData(oldp+178,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+179,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+180,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2))),16);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_0),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_1),32);
    bufp->fullIData(oldp+183,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_2),32);
    bufp->fullCData(oldp+184,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                        >> 0xbU))),8);
    bufp->fullCData(oldp+185,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                        >> 5U))),6);
    bufp->fullCData(oldp+186,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata)),5);
    bufp->fullSData(oldp+187,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx),16);
    bufp->fullSData(oldp+188,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy),16);
    bufp->fullIData(oldp+189,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current),32);
    bufp->fullSData(oldp+190,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+191,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+192,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                          << 6U)) | 
                               (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                         >> 5U)))),11);
    bufp->fullSData(oldp+193,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+194,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+195,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord))),16);
    bufp->fullIData(oldp+196,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_row_off),32);
    bufp->fullIData(oldp+197,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_row_off),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_col_off),32);
    bufp->fullIData(oldp+199,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_col_off),32);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_edge_i),32);
    bufp->fullIData(oldp+203,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_a),32);
    bufp->fullIData(oldp+204,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_b),32);
    bufp->fullIData(oldp+205,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_c),32);
    bufp->fullIData(oldp+206,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_z),32);
    bufp->fullSData(oldp+207,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdx),16);
    bufp->fullSData(oldp+208,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdy),16);
    bufp->fullSData(oldp+209,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+210,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+211,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos))),16);
    bufp->fullSData(oldp+212,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+213,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+214,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0))),16);
    bufp->fullSData(oldp+215,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+216,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+217,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1))),16);
    bufp->fullSData(oldp+218,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+219,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+220,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2))),16);
    bufp->fullIData(oldp+221,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2]),32);
    bufp->fullCData(oldp+224,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                        >> 0xbU))),8);
    bufp->fullCData(oldp+225,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                        >> 5U))),6);
    bufp->fullCData(oldp+226,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata)),5);
    bufp->fullIData(oldp+227,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A),32);
    bufp->fullIData(oldp+228,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B),32);
    bufp->fullIData(oldp+229,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C),32);
    bufp->fullSData(oldp+230,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx),16);
    bufp->fullSData(oldp+231,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy),16);
    bufp->fullIData(oldp+232,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current),32);
    bufp->fullIData(oldp+233,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+234,(vlSelfRef.tb_all__DOT__clk));
    bufp->fullIData(oldp+235,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                ? (((IData)(vlSelfRef.tb_all__DOT__vld_in) 
                                    & (IData)(vlSelfRef.tb_all__DOT__rdy_in))
                                    ? 1U : 0U) : ((1U 
                                                   == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                       ? 
                                                      ((4U 
                                                        > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                                                        ? 0U
                                                        : 5U)
                                                       : 0U))))))),32);
}
