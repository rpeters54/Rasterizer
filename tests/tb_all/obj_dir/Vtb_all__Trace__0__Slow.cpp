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
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBit(c+98,0,"rdy_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"vld_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"color_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+101,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+301,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBit(c+98,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"color_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+101,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_abs_pos_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+103,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+106,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+109,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+110,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+112,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+114,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inter_edges_0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("inter_metadata_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+118,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+121,0,"inter_dzdx_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+122,0,"inter_dzdy_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"inter_z_current_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"inter_vld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"inter_rdy_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("inter_abs_pos_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("inter_deltas_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+125,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+126,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+128,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+131,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+132,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inter_edges_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+134+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("inter_metadata_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+26,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+29,0,"inter_dzdx_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"inter_dzdy_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"inter_z_current_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"inter_vld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"inter_rdy_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("axel_f", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+302,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+138,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 370,0);
    tracep->declArray(c+33,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 370,0);
    tracep->declBit(c+22,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+150+i*12,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 370,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+45,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"next_read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("pixel_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+23,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+48,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+51,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+54,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+57,0,"in_edge_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"in_edge_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"in_edge_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("in_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+26,0,"color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+29,0,"in_dzdx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"in_dzdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"in_z_current",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"color_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+101,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+199,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+60,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+200,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+201,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+202,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("flush_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+203,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+206,0,"rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,0,"flush_rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("deltas", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+208,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+209,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+211,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+213,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+214,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("edges", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+217+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+220,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+222,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+223,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+225,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_coord", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+226,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+228,0,"current_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+61,0,"new_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+306,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+229,0,"edge_row_offset__Vstatic__s_dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"edge_row_offset__Vstatic__s_dx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"edge_column_offset__Vstatic__s_dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"z_row_offset__Vstatic__dzdx_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"z_row_offset__Vstatic__dzdy_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("tile_to_coord__Vstatic__out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+234,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+235,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"row_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"dzdx_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+242,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tile_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBit(c+98,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+103,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+243,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+246,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+247,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+249,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+252,0,"out_edge_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"out_edge_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"out_edge_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+118,0,"color",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"tile_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"tile_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+121,0,"out_dzdx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+122,0,"out_dzdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"out_z_current",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+300,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+62,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+65,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rotated_v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+71,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+74,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("temp_start", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+80,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_deltas", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+83,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+86,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+89,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+306,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+256,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+257,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+258,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("deltas", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+259,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+260,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+261,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+262,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+263,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+265,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+267,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("edges", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+268+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+271,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+273,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+274,0,"coeff_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"coeff_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"coeff_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+278,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+279,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("tile_to_coord__Vstatic__out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+92,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("compute_delta__Vstatic__out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+95,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+280,0,"compute_edge__Vstatic__temp_x_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+281,0,"compute_edge__Vstatic__temp_y_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+282,0,"compute_edge__Vstatic__temp_x_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"compute_edge__Vstatic__temp_y_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"compute_plane_coeff_a__Vstatic__temp_y0z2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"compute_plane_coeff_a__Vstatic__temp_z0y2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"compute_plane_coeff_b__Vstatic__temp_z0x2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"compute_plane_coeff_b__Vstatic__temp_x0z2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"compute_plane_coeff_c__Vstatic__temp_x0y2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"compute_plane_coeff_c__Vstatic__temp_y0x2_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"scale_dz__Vstatic__div_result_dz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"compute_z__Vstatic__delta_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"compute_z__Vstatic__delta_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"compute_z__Vstatic__x_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"compute_z__Vstatic__y_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"compute_z__Vstatic__z_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+297,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+301,(0xaU),32);
    bufp->fullIData(oldp+302,(0x173U),32);
    bufp->fullIData(oldp+303,(4U),32);
    bufp->fullIData(oldp+304,(2U),32);
    bufp->fullIData(oldp+305,(3U),32);
    bufp->fullSData(oldp+306,(0U),16);
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
    bufp->fullCData(oldp+26,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+27,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                       >> 5U))),6);
    bufp->fullCData(oldp+28,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U])),5);
    bufp->fullSData(oldp+29,((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+30,((0xffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U])),16);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U]),32);
    bufp->fullBit(oldp+32,((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
    bufp->fullWData(oldp+33,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out),371);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr),3);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr),3);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count),4);
    bufp->fullSData(oldp+48,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+49,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+50,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+51,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+52,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+53,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+54,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+55,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+56,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                          << 0xdU) 
                                         | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                            >> 0x13U)))),16);
    bufp->fullIData(oldp+57,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+58,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+59,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                               << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+60,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
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
                               : ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                   ? ((0xffU > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))
                                       ? 1U : 2U) : 
                                  ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                    ? ((0xffU > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))
                                        ? 2U : 0U) : 0U)))),32);
    bufp->fullSData(oldp+61,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                         << 6U)) | 
                              (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                        >> 5U)))),11);
    bufp->fullSData(oldp+62,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [0U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+63,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [0U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+64,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                [0U]))),16);
    bufp->fullSData(oldp+65,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [1U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+66,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [1U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+67,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                [1U]))),16);
    bufp->fullSData(oldp+68,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [2U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+69,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+70,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                [2U]))),16);
    bufp->fullSData(oldp+71,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [0U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+72,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [0U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+73,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                [0U]))),16);
    bufp->fullSData(oldp+74,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [1U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+75,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [1U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+76,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                [1U]))),16);
    bufp->fullSData(oldp+77,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [2U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+78,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+79,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                [2U]))),16);
    bufp->fullSData(oldp+80,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+81,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+82,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start))),16);
    bufp->fullSData(oldp+83,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [0U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+84,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [0U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+85,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                [0U]))),16);
    bufp->fullSData(oldp+86,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [1U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+87,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [1U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+88,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                [1U]))),16);
    bufp->fullSData(oldp+89,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [2U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+90,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+91,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                [2U]))),16);
    bufp->fullSData(oldp+92,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+93,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+94,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out))),16);
    bufp->fullSData(oldp+95,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+96,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+97,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out))),16);
    bufp->fullBit(oldp+98,(vlSelfRef.tb_all__DOT__rdy_in));
    bufp->fullBit(oldp+99,(vlSelfRef.tb_all__DOT__vld_out));
    bufp->fullCData(oldp+100,(vlSelfRef.tb_all__DOT__color_out),8);
    bufp->fullSData(oldp+101,((vlSelfRef.tb_all__DOT__pixel_out 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+102,((0xffffU & vlSelfRef.tb_all__DOT__pixel_out)),16);
    bufp->fullSData(oldp+103,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+104,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+105,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0))),16);
    bufp->fullSData(oldp+106,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [0U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+107,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [0U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+108,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                 [0U]))),16);
    bufp->fullSData(oldp+109,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [1U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+110,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [1U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+111,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                 [1U]))),16);
    bufp->fullSData(oldp+112,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [2U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+113,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                  [2U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+114,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                 [2U]))),16);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[0]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[1]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[2]),32);
    bufp->fullCData(oldp+118,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                        >> 0xbU))),8);
    bufp->fullCData(oldp+119,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                        >> 5U))),6);
    bufp->fullCData(oldp+120,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0)),5);
    bufp->fullSData(oldp+121,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0),16);
    bufp->fullSData(oldp+122,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0),16);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0),32);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0));
    bufp->fullSData(oldp+125,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [0U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+126,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [0U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+127,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                 [0U]))),16);
    bufp->fullSData(oldp+128,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [1U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+129,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [1U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+130,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                 [1U]))),16);
    bufp->fullSData(oldp+131,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [2U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+132,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                  [2U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+133,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                 [2U]))),16);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[0]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[1]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[2]),32);
    bufp->fullBit(oldp+137,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1));
    bufp->fullWData(oldp+138,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in),371);
    bufp->fullWData(oldp+150,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[0]),371);
    bufp->fullWData(oldp+162,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[1]),371);
    bufp->fullWData(oldp+174,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[2]),371);
    bufp->fullWData(oldp+186,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[3]),371);
    bufp->fullCData(oldp+198,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr),3);
    bufp->fullIData(oldp+199,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state),32);
    bufp->fullSData(oldp+200,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+201,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+202,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos))),16);
    bufp->fullSData(oldp+203,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+204,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+205,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos))),16);
    bufp->fullCData(oldp+206,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos),8);
    bufp->fullCData(oldp+207,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos),8);
    bufp->fullSData(oldp+208,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [0U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+209,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [0U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+210,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                 [0U]))),16);
    bufp->fullSData(oldp+211,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [1U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+212,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [1U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+213,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                 [1U]))),16);
    bufp->fullSData(oldp+214,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [2U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+215,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                  [2U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+216,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                 [2U]))),16);
    bufp->fullIData(oldp+217,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2]),32);
    bufp->fullCData(oldp+220,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                        >> 0xbU))),8);
    bufp->fullCData(oldp+221,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                        >> 5U))),6);
    bufp->fullCData(oldp+222,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata)),5);
    bufp->fullSData(oldp+223,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx),16);
    bufp->fullSData(oldp+224,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy),16);
    bufp->fullIData(oldp+225,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current),32);
    bufp->fullSData(oldp+226,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+227,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+228,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                          << 6U)) | 
                               (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                         >> 5U)))),11);
    bufp->fullIData(oldp+229,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy),32);
    bufp->fullIData(oldp+230,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx),32);
    bufp->fullIData(oldp+231,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy),32);
    bufp->fullIData(oldp+232,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdx_ext),32);
    bufp->fullIData(oldp+233,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdy_ext),32);
    bufp->fullSData(oldp+234,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+235,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+236,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out))),16);
    bufp->fullIData(oldp+237,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+238,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+239,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+240,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__unnamedblk4__DOT__row_off),32);
    bufp->fullIData(oldp+241,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk5__DOT__dzdx_ext),32);
    bufp->fullIData(oldp+242,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk6__DOT__i),32);
    bufp->fullSData(oldp+243,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+244,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+245,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0))),16);
    bufp->fullSData(oldp+246,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+247,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+248,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1))),16);
    bufp->fullSData(oldp+249,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+250,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+251,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2))),16);
    bufp->fullIData(oldp+252,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0),32);
    bufp->fullIData(oldp+253,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1),32);
    bufp->fullIData(oldp+254,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2),32);
    bufp->fullIData(oldp+255,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state),32);
    bufp->fullSData(oldp+256,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+257,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+258,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos))),16);
    bufp->fullSData(oldp+259,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [0U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+260,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [0U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+261,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                 [0U]))),16);
    bufp->fullSData(oldp+262,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [1U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+263,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [1U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+264,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                 [1U]))),16);
    bufp->fullSData(oldp+265,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [2U] 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+266,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                  [2U] 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+267,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                 [2U]))),16);
    bufp->fullIData(oldp+268,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2]),32);
    bufp->fullCData(oldp+271,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                        >> 0xbU))),8);
    bufp->fullCData(oldp+272,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                        >> 5U))),6);
    bufp->fullCData(oldp+273,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata)),5);
    bufp->fullIData(oldp+274,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A),32);
    bufp->fullIData(oldp+275,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B),32);
    bufp->fullIData(oldp+276,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C),32);
    bufp->fullSData(oldp+277,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx),16);
    bufp->fullSData(oldp+278,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy),16);
    bufp->fullIData(oldp+279,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current),32);
    bufp->fullSData(oldp+280,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub),16);
    bufp->fullSData(oldp+281,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub),16);
    bufp->fullIData(oldp+282,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult),32);
    bufp->fullIData(oldp+283,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult),32);
    bufp->fullIData(oldp+284,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult),32);
    bufp->fullIData(oldp+285,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult),32);
    bufp->fullIData(oldp+286,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult),32);
    bufp->fullIData(oldp+287,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult),32);
    bufp->fullIData(oldp+288,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult),32);
    bufp->fullIData(oldp+289,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult),32);
    bufp->fullIData(oldp+290,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz),32);
    bufp->fullSData(oldp+291,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x),16);
    bufp->fullSData(oldp+292,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y),16);
    bufp->fullIData(oldp+293,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component),32);
    bufp->fullIData(oldp+294,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component),32);
    bufp->fullIData(oldp+295,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component),32);
    bufp->fullIData(oldp+296,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+297,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+298,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+299,(vlSelfRef.tb_all__DOT__clk));
    bufp->fullIData(oldp+300,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
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
