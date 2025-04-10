// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlock_adder_total__Syms.h"


VL_ATTR_COLD void VBlock_adder_total___024root__trace_init_sub__TOP__0(VBlock_adder_total___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"o_CRA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"o_CLA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"o_CSA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"o_CSKA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"o_KSA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Block_adder_total", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"o_CRA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"o_CLA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"o_CSA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"o_CSKA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"o_KSA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CLA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"c32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CLA32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+583,0,"i_c0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"i_p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"i_g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"o_c32",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_level", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("p_level", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+167+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+286,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+296,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+298,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+300,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+314,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+318,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+330,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+334,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+340,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+344,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fulladder[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"o_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"o_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CRA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+286,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+296,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+298,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+300,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+330,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+314,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+318,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+334,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+340,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+344,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"c8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"c16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"c24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"sum_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"sum_H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"sum_H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+388,0,"c_H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"c_H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"sum_H2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"sum_H2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+392,0,"c_H2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"c_H2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"sum_H3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+395,0,"sum_H3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+396,0,"c_H3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"c_H3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RCA_H0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+398,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+388,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+296,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+298,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_H1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+398,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+389,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+296,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+298,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_H2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+428,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+392,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+300,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+314,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_H2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+428,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+391,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+393,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+300,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+314,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_H3_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+396,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+318,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+334,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_H3_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+318,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+334,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RCA_L", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+488,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+489,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+237,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+286,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+330,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+340,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+344,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"group_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"group_Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+585,0,"c_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CSKA_BLOCK[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+503,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+504,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+505,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+506,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+507,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+503,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+504,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+181,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+506,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+507,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+506,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+286,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+330,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+513,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+514,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+515,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+517,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+513,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+514,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+185,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+517,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+340,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+344,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+523,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+525,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+526,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+527,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+523,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+525,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+526,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+527,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+526,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+346,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+288,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+533,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+534,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+535,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+536,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+537,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+533,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+534,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+193,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+535,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+536,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+537,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+536,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+296,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+298,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+544,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+545,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+546,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+547,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+544,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+197,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+545,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+546,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+547,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+546,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+300,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+304,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+553,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+554,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+555,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+556,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+557,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+553,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+554,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+201,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+555,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+556,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+557,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+556,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+310,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+314,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+316,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+563,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+564,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+565,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+567,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+563,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+564,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+567,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+318,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CSKA_BLOCK[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"a_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+574,0,"b_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"sum_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+576,0,"carry_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+577,0,"p_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+574,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+209,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+576,0,"Cout_block",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+577,0,"P_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+576,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+328,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+334,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"o_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("KSA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"o_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"G1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"P1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"G2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"P2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"G3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"P3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"G4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"P4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"G5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"P5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_init_top(VBlock_adder_total___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_init_top\n"); );
    // Body
    VBlock_adder_total___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VBlock_adder_total___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBlock_adder_total___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBlock_adder_total___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBlock_adder_total___024root__trace_register(VBlock_adder_total___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VBlock_adder_total___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VBlock_adder_total___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VBlock_adder_total___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VBlock_adder_total___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_const_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBlock_adder_total___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_const_0\n"); );
    // Init
    VBlock_adder_total___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlock_adder_total___024root*>(voidSelf);
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlock_adder_total___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_const_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+583,(0U));
    bufp->fullBit(oldp+584,(1U));
    bufp->fullIData(oldp+585,(vlSelf->Block_adder_total__DOT__CSKA__DOT__c_internal),32);
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_full_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBlock_adder_total___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_full_0\n"); );
    // Init
    VBlock_adder_total___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlock_adder_total___024root*>(voidSelf);
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlock_adder_total___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_full_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry),8);
    bufp->fullBit(oldp+2,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 1U))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 2U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 3U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 4U))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 5U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                 >> 6U))));
    bufp->fullCData(oldp+9,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry),8);
    bufp->fullBit(oldp+10,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 1U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 2U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 3U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 4U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 5U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                  >> 6U))));
    bufp->fullCData(oldp+17,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry),8);
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 1U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 3U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 4U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 5U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                  >> 6U))));
    bufp->fullIData(oldp+25,(vlSelf->Block_adder_total__DOT__CLA__DOT__g),32);
    bufp->fullIData(oldp+26,(vlSelf->Block_adder_total__DOT__CLA__DOT__p),32);
    bufp->fullBit(oldp+27,((0xffffffffU == vlSelf->Block_adder_total__DOT__CLA__DOT__p)));
    bufp->fullBit(oldp+28,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s));
    bufp->fullBit(oldp+29,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+30,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+31,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+32,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+33,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+34,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+35,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+36,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+37,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+38,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+39,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+40,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+41,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+42,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+43,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+44,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+45,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+46,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+47,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+48,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+49,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+50,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+51,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+52,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+53,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+54,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+55,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+56,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+57,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+58,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+59,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+60,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+61,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+62,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+63,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+64,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+65,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+66,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+67,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+68,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+69,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+70,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+71,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+72,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+73,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+74,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+75,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+76,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+77,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+78,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+79,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+80,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+81,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+82,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+83,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+84,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+85,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+86,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+87,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+88,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+89,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+90,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p));
    bufp->fullBit(oldp+91,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_g));
    bufp->fullBit(oldp+92,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c));
    bufp->fullBit(oldp+93,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c));
    bufp->fullBit(oldp+94,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c));
    bufp->fullBit(oldp+95,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c));
    bufp->fullBit(oldp+96,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c));
    bufp->fullBit(oldp+97,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c));
    bufp->fullBit(oldp+98,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c));
    bufp->fullBit(oldp+99,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c));
    bufp->fullBit(oldp+100,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c));
    bufp->fullBit(oldp+101,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c));
    bufp->fullBit(oldp+102,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c));
    bufp->fullBit(oldp+103,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c));
    bufp->fullBit(oldp+104,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c));
    bufp->fullBit(oldp+105,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c));
    bufp->fullBit(oldp+106,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c));
    bufp->fullBit(oldp+107,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c));
    bufp->fullBit(oldp+108,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c));
    bufp->fullBit(oldp+109,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c));
    bufp->fullBit(oldp+110,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c));
    bufp->fullBit(oldp+111,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c));
    bufp->fullBit(oldp+112,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c));
    bufp->fullBit(oldp+113,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c));
    bufp->fullBit(oldp+114,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c));
    bufp->fullBit(oldp+115,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c));
    bufp->fullBit(oldp+116,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c));
    bufp->fullBit(oldp+117,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c));
    bufp->fullBit(oldp+118,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c));
    bufp->fullBit(oldp+119,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c));
    bufp->fullBit(oldp+120,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c));
    bufp->fullBit(oldp+121,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c));
    bufp->fullCData(oldp+122,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P),8);
    bufp->fullIData(oldp+123,(vlSelf->Block_adder_total__DOT__KSA__DOT__G),32);
    bufp->fullIData(oldp+124,(vlSelf->Block_adder_total__DOT__KSA__DOT__P),32);
    bufp->fullIData(oldp+125,(VL_SHIFTL_III(32,32,32, 
                                            ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
                                               | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
                                                  & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73bc7e8a__0))) 
                                              << 0x1fU) 
                                             | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34143b46__0) 
                                                  | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c3669c__0) 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46c9cd1e__0))) 
                                                 << 0x1eU) 
                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac4cd6ae__0) 
                                                     | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1e093ef5__0) 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73ba5b6f__0))) 
                                                    << 0x1dU) 
                                                   | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf45cb34f__0) 
                                                        | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hae627dd5__0) 
                                                           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h64526989__0))) 
                                                       << 0x1cU) 
                                                      | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h62eef385__0) 
                                                           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac919d47__0) 
                                                              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf10a4e06__0))) 
                                                          << 0x1bU) 
                                                         | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he25df9c0__0) 
                                                              | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdda4b4e5__0) 
                                                                 & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbc8f09e2__0))) 
                                                             << 0x1aU) 
                                                            | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd9995e3d__0) 
                                                                 | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd4da507__0) 
                                                                    & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hda00ae4a__0))) 
                                                                << 0x19U) 
                                                               | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d9e18ca__0) 
                                                                    | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475b5e57__0) 
                                                                       & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dd7a24a__0))) 
                                                                   << 0x18U) 
                                                                  | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46650077__0) 
                                                                       | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b0d9c42__0) 
                                                                          & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dc3ac78__0))) 
                                                                      << 0x17U) 
                                                                     | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2c147164__0) 
                                                                          | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8063b25f__0) 
                                                                             & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49aee321__0))) 
                                                                         << 0x16U) 
                                                                        | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7da363f6__0) 
                                                                             | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7087b9ae__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e76d6b8__0))) 
                                                                            << 0x15U) 
                                                                           | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0c8bee28__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9da1f1fc__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8f00ef4__0))) 
                                                                               << 0x14U) 
                                                                              | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd639f895__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb3d6b21e__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b68da7e__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h681ff933__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h47ccf2e8__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbbb27814__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ed7b901__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0035f299__0) 
                                                                                & vlSelf->Block_adder_total__DOT__KSA__DOT__G)) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0))))))))))))))))), 1U)),32);
    bufp->fullIData(oldp+126,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb5b58e20__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdea43a30__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdeac9ff2__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbabea72a__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha353cb0a__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeca450a__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_heec65c01__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha0169a1c__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha688435a__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbb06fc1e__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf51c551__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hded921cd__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6bc7a70__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h529db6ec__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeb089b2__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he09955a2__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf16da826__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf18013f6__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b2b3d9__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd2cf6755__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5984059c__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59971b44__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hefd74ab2__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he936b888__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6ce19c7__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9538ed4__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha68544d0__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha9d0c4eb__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb7f74b1a__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf5a1edd5__0) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h70fb64d3__0)))))))))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+127,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6cb6bc5__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b33f6f__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcc8ca85b__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc799c0cd__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcba26e24__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he28b5042__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h377570d3__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d399fb5__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcca504e2__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b66a1a__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6e73a66__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0da3cdc__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f018e7b__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3bbf92f7__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5d8df45__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfea5fe27__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hff4eed4a__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe728400__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd72705e__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h12a6ed9e__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h131d3ba3__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he252bae5__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he14356fb__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h386a6bbd__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h38eef1ba__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361ebc08__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h36e3ff88__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h35ca30f2__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfeeeef25__0) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha616c649__0)))))))))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+128,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4669030b__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5ef05ee0__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc4020dbf__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h031237c0__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3aedc873__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c421a5__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb57e79d6__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h571a90b7__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h77d4a7e9__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h542bef1b__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34b4b29e__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6bdf61b4__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58881925__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ffabe31__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h270399d9__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h89973fd2__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdabf56f9__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h51661bdb__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0e7538eb__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hed303474__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc6e098df__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361c6d67__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe22944d__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h41d8fee4__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7dc1c4cb__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4db0cbbb__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475abd8e__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7ceaf14f__0) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c69239c__0)))))))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+129,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h43852427__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfff31c34__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9e535c94__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9994404__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc7d602b6__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc5aadebe__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2ac739f0__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9f373942__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4cb699b1__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8cec54d__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f378dc9__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b232004__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3426f76d__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b6250a0__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcf063a16__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hec46bc1d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h45e0afcb__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he10e6912__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha3954fdf__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5f433d21__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3b9a663d__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfa392fad__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha6c8ee3a__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h07ddeeba__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b88d2f9__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd311044__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e4f2179__0) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d2846ec__0)))))))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+130,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3c8ad5df__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d38d598__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ee99306__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0115502c__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcdf34a70__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h716a8ccb__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha4d0e8d3__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h26aa0ccd__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h111e81cd__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h345a2e7c__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h973e7a0a__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d3a81a4__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0fffa626__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8985e572__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd29215d0__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h16b76ce4__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59e0ec80__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58321c15__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2e37be68__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h892d09ae__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcb9df61b__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b283d2a__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h088deb9c__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9d3f4eeb__0) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_haf8cc564__0)))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+131,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h32b7cfd3__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96898b0f__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he96df775__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf4c727ff__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf641505b__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d8785f1__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h76396dd3__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd99fc2f__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h256feb86__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5006b846__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe6b2bf9__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0eae794__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4097b7b5__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3606f45e__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4d2de941__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h358e1b4b__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5086fc9__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb8c87dca__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5fb0cac5__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf852b517__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49cd688b__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h026cf16a__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h00e60d48__0) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h349ebd05__0)))))))))))))))))))))))))),32);
    bufp->fullIData(oldp+132,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34143b46__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac4cd6ae__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf45cb34f__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h62eef385__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he25df9c0__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd9995e3d__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d9e18ca__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46650077__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2c147164__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7da363f6__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0c8bee28__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd639f895__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b68da7e__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h47ccf2e8__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ed7b901__0) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0)))))))))))))))))),32);
    bufp->fullIData(oldp+133,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
                                << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c3669c__0) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1e093ef5__0) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hae627dd5__0) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac919d47__0) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdda4b4e5__0) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd4da507__0) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475b5e57__0) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b0d9c42__0) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8063b25f__0) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7087b9ae__0) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9da1f1fc__0) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb3d6b21e__0) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h681ff933__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbbb27814__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0035f299__0) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1f0b425b__0)))))))))))))))))),32);
    bufp->fullIData(oldp+134,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
                                 | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
                                    & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73bc7e8a__0))) 
                                << 0x1fU) | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34143b46__0) 
                                               | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c3669c__0) 
                                                  & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46c9cd1e__0))) 
                                              << 0x1eU) 
                                             | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac4cd6ae__0) 
                                                  | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1e093ef5__0) 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73ba5b6f__0))) 
                                                 << 0x1dU) 
                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf45cb34f__0) 
                                                     | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hae627dd5__0) 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h64526989__0))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h62eef385__0) 
                                                        | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac919d47__0) 
                                                           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf10a4e06__0))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he25df9c0__0) 
                                                           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdda4b4e5__0) 
                                                              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbc8f09e2__0))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd9995e3d__0) 
                                                              | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd4da507__0) 
                                                                 & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hda00ae4a__0))) 
                                                             << 0x19U) 
                                                            | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d9e18ca__0) 
                                                                 | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475b5e57__0) 
                                                                    & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dd7a24a__0))) 
                                                                << 0x18U) 
                                                               | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46650077__0) 
                                                                    | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b0d9c42__0) 
                                                                       & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dc3ac78__0))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2c147164__0) 
                                                                       | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8063b25f__0) 
                                                                          & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49aee321__0))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7da363f6__0) 
                                                                          | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7087b9ae__0) 
                                                                             & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e76d6b8__0))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0c8bee28__0) 
                                                                             | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9da1f1fc__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8f00ef4__0))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd639f895__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb3d6b21e__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b68da7e__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h681ff933__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h47ccf2e8__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbbb27814__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ed7b901__0) 
                                                                                | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0035f299__0) 
                                                                                & vlSelf->Block_adder_total__DOT__KSA__DOT__G)) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0)))))))))))))))))),32);
    bufp->fullIData(oldp+135,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
                                 & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h78fd1ea9__0)) 
                                << 0x1fU) | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c3669c__0) 
                                               & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha76b18b8__0)) 
                                              << 0x1eU) 
                                             | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1e093ef5__0) 
                                                  & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h71d5b11f__0)) 
                                                 << 0x1dU) 
                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hae627dd5__0) 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h476df2f1__0)) 
                                                    << 0x1cU) 
                                                   | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac919d47__0) 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf866125__0)) 
                                                       << 0x1bU) 
                                                      | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdda4b4e5__0) 
                                                           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h91dd81ba__0)) 
                                                          << 0x1aU) 
                                                         | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd4da507__0) 
                                                              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96ace1fa__0)) 
                                                             << 0x19U) 
                                                            | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475b5e57__0) 
                                                                 & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h74b5da3c__0)) 
                                                                << 0x18U) 
                                                               | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b0d9c42__0) 
                                                                    & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9ed2bb3d__0)) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8063b25f__0) 
                                                                       & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d6361d5__0)) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7087b9ae__0) 
                                                                          & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d016e2a__0)) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9da1f1fc__0) 
                                                                             & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ce873d1__0)) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb3d6b21e__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc3442b04__0)) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h681ff933__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8135cde__0)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbbb27814__0) 
                                                                                & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0035f299__0) 
                                                                                & vlSelf->Block_adder_total__DOT__KSA__DOT__P) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1f0b425b__0)))))))))))))))))),32);
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 9U)))));
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+138,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+143,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p) 
                                   ^ vlSelf->Block_adder_total__DOT__CLA__DOT__c))));
    bufp->fullBit(oldp+147,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+148,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+150,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+151,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+152,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+154,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 1U)))));
    bufp->fullBit(oldp+158,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+160,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 2U)))));
    bufp->fullBit(oldp+161,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 3U)))));
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 4U)))));
    bufp->fullBit(oldp+163,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 5U)))));
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 6U)))));
    bufp->fullBit(oldp+165,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 7U)))));
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p) 
                                   ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 8U)))));
    bufp->fullIData(oldp+167,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[0]),32);
    bufp->fullIData(oldp+168,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1]),32);
    bufp->fullIData(oldp+169,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2]),32);
    bufp->fullIData(oldp+170,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3]),32);
    bufp->fullIData(oldp+171,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[4]),32);
    bufp->fullIData(oldp+172,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[5]),32);
    bufp->fullBit(oldp+173,((1U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                             [5U])));
    bufp->fullIData(oldp+174,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[0]),32);
    bufp->fullIData(oldp+175,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1]),32);
    bufp->fullIData(oldp+176,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2]),32);
    bufp->fullIData(oldp+177,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3]),32);
    bufp->fullIData(oldp+178,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[4]),32);
    bufp->fullIData(oldp+179,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[5]),32);
    bufp->fullCData(oldp+180,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry),8);
    bufp->fullBit(oldp+181,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))));
    bufp->fullBit(oldp+182,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+183,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+184,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+186,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+187,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+188,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+189,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+190,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+191,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+192,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+193,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+194,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+195,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+196,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+197,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+198,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+199,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+200,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+202,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+203,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+204,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 6U))));
    bufp->fullBit(oldp+206,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
    bufp->fullBit(oldp+207,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
    bufp->fullBit(oldp+208,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
    bufp->fullBit(oldp+209,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                   >> 7U))));
    bufp->fullBit(oldp+210,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c));
    bufp->fullBit(oldp+211,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c));
    bufp->fullBit(oldp+212,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c));
    bufp->fullCData(oldp+213,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry),8);
    bufp->fullBit(oldp+214,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))));
    bufp->fullBit(oldp+215,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+216,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+217,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+218,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+219,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                   >> 6U))));
    bufp->fullCData(oldp+221,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry),8);
    bufp->fullBit(oldp+222,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))));
    bufp->fullBit(oldp+223,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+224,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+225,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+226,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+228,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                   >> 6U))));
    bufp->fullCData(oldp+229,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry),8);
    bufp->fullBit(oldp+230,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+232,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+233,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+234,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+235,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+236,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                   >> 6U))));
    bufp->fullBit(oldp+237,(vlSelf->Block_adder_total__DOT__CSA__DOT__c8));
    bufp->fullCData(oldp+238,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry),8);
    bufp->fullBit(oldp+239,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 1U))));
    bufp->fullBit(oldp+241,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 2U))));
    bufp->fullBit(oldp+242,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 3U))));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 4U))));
    bufp->fullBit(oldp+244,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 5U))));
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                   >> 6U))));
    bufp->fullIData(oldp+246,(vlSelf->Block_adder_total__DOT__CLA__DOT__c),32);
    bufp->fullBit(oldp+247,((vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                             >> 0x1fU)));
    bufp->fullBit(oldp+248,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+249,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+251,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+253,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+254,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+256,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+258,((1U & vlSelf->Block_adder_total__DOT__CLA__DOT__c)));
    bufp->fullBit(oldp+259,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+261,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+263,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+265,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+266,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+267,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+268,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+269,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+270,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+271,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+273,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+274,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+276,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+277,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+278,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                   >> 8U))));
    bufp->fullIData(oldp+279,(vlSelf->i_a),32);
    bufp->fullIData(oldp+280,(vlSelf->i_b),32);
    bufp->fullIData(oldp+281,(vlSelf->o_CRA),32);
    bufp->fullIData(oldp+282,(vlSelf->o_CLA),32);
    bufp->fullIData(oldp+283,(vlSelf->o_CSA),32);
    bufp->fullIData(oldp+284,(vlSelf->o_CSKA),32);
    bufp->fullIData(oldp+285,(vlSelf->o_KSA),32);
    bufp->fullBit(oldp+286,((1U & vlSelf->i_a)));
    bufp->fullBit(oldp+287,((1U & vlSelf->i_b)));
    bufp->fullBit(oldp+288,((1U & (vlSelf->i_a >> 0xaU))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->i_b >> 0xaU))));
    bufp->fullBit(oldp+290,((1U & (vlSelf->i_a >> 0xbU))));
    bufp->fullBit(oldp+291,((1U & (vlSelf->i_b >> 0xbU))));
    bufp->fullBit(oldp+292,((1U & (vlSelf->i_a >> 0xcU))));
    bufp->fullBit(oldp+293,((1U & (vlSelf->i_b >> 0xcU))));
    bufp->fullBit(oldp+294,((1U & (vlSelf->i_a >> 0xdU))));
    bufp->fullBit(oldp+295,((1U & (vlSelf->i_b >> 0xdU))));
    bufp->fullBit(oldp+296,((1U & (vlSelf->i_a >> 0xeU))));
    bufp->fullBit(oldp+297,((1U & (vlSelf->i_b >> 0xeU))));
    bufp->fullBit(oldp+298,((1U & (vlSelf->i_a >> 0xfU))));
    bufp->fullBit(oldp+299,((1U & (vlSelf->i_b >> 0xfU))));
    bufp->fullBit(oldp+300,((1U & (vlSelf->i_a >> 0x10U))));
    bufp->fullBit(oldp+301,((1U & (vlSelf->i_b >> 0x10U))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->i_a >> 0x11U))));
    bufp->fullBit(oldp+303,((1U & (vlSelf->i_b >> 0x11U))));
    bufp->fullBit(oldp+304,((1U & (vlSelf->i_a >> 0x12U))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->i_b >> 0x12U))));
    bufp->fullBit(oldp+306,((1U & (vlSelf->i_a >> 0x13U))));
    bufp->fullBit(oldp+307,((1U & (vlSelf->i_b >> 0x13U))));
    bufp->fullBit(oldp+308,((1U & (vlSelf->i_a >> 1U))));
    bufp->fullBit(oldp+309,((1U & (vlSelf->i_b >> 1U))));
    bufp->fullBit(oldp+310,((1U & (vlSelf->i_a >> 0x14U))));
    bufp->fullBit(oldp+311,((1U & (vlSelf->i_b >> 0x14U))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->i_a >> 0x15U))));
    bufp->fullBit(oldp+313,((1U & (vlSelf->i_b >> 0x15U))));
    bufp->fullBit(oldp+314,((1U & (vlSelf->i_a >> 0x16U))));
    bufp->fullBit(oldp+315,((1U & (vlSelf->i_b >> 0x16U))));
    bufp->fullBit(oldp+316,((1U & (vlSelf->i_a >> 0x17U))));
    bufp->fullBit(oldp+317,((1U & (vlSelf->i_b >> 0x17U))));
    bufp->fullBit(oldp+318,((1U & (vlSelf->i_a >> 0x18U))));
    bufp->fullBit(oldp+319,((1U & (vlSelf->i_b >> 0x18U))));
    bufp->fullBit(oldp+320,((1U & (vlSelf->i_a >> 0x19U))));
    bufp->fullBit(oldp+321,((1U & (vlSelf->i_b >> 0x19U))));
    bufp->fullBit(oldp+322,((1U & (vlSelf->i_a >> 0x1aU))));
    bufp->fullBit(oldp+323,((1U & (vlSelf->i_b >> 0x1aU))));
    bufp->fullBit(oldp+324,((1U & (vlSelf->i_a >> 0x1bU))));
    bufp->fullBit(oldp+325,((1U & (vlSelf->i_b >> 0x1bU))));
    bufp->fullBit(oldp+326,((1U & (vlSelf->i_a >> 0x1cU))));
    bufp->fullBit(oldp+327,((1U & (vlSelf->i_b >> 0x1cU))));
    bufp->fullBit(oldp+328,((1U & (vlSelf->i_a >> 0x1dU))));
    bufp->fullBit(oldp+329,((1U & (vlSelf->i_b >> 0x1dU))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->i_a >> 2U))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->i_b >> 2U))));
    bufp->fullBit(oldp+332,((1U & (vlSelf->i_a >> 0x1eU))));
    bufp->fullBit(oldp+333,((1U & (vlSelf->i_b >> 0x1eU))));
    bufp->fullBit(oldp+334,((vlSelf->i_a >> 0x1fU)));
    bufp->fullBit(oldp+335,((vlSelf->i_b >> 0x1fU)));
    bufp->fullBit(oldp+336,((1U & (vlSelf->i_a >> 3U))));
    bufp->fullBit(oldp+337,((1U & (vlSelf->i_b >> 3U))));
    bufp->fullBit(oldp+338,((1U & (vlSelf->i_a >> 4U))));
    bufp->fullBit(oldp+339,((1U & (vlSelf->i_b >> 4U))));
    bufp->fullBit(oldp+340,((1U & (vlSelf->i_a >> 5U))));
    bufp->fullBit(oldp+341,((1U & (vlSelf->i_b >> 5U))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->i_a >> 6U))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->i_b >> 6U))));
    bufp->fullBit(oldp+344,((1U & (vlSelf->i_a >> 7U))));
    bufp->fullBit(oldp+345,((1U & (vlSelf->i_b >> 7U))));
    bufp->fullBit(oldp+346,((1U & (vlSelf->i_a >> 8U))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->i_b >> 8U))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->i_a >> 9U))));
    bufp->fullBit(oldp+349,((1U & (vlSelf->i_b >> 9U))));
    bufp->fullIData(oldp+350,(((0x80000000U & ((vlSelf->i_a 
                                                & ((0x80000000U 
                                                    & vlSelf->i_b) 
                                                   | ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c) 
                                                      << 0x1fU))) 
                                               | (vlSelf->i_b 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c) 
                                                     << 0x1fU)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c) 
                                   << 0x1eU) | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+351,((1U & ((vlSelf->i_a >> 1U) 
                                   ^ ((vlSelf->i_b 
                                       >> 1U) ^ (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))));
    bufp->fullBit(oldp+352,((1U & ((vlSelf->i_a >> 0xaU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xaU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c))))));
    bufp->fullBit(oldp+353,((1U & ((vlSelf->i_a >> 0xbU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xbU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c))))));
    bufp->fullBit(oldp+354,((1U & ((vlSelf->i_a >> 0xcU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xcU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c))))));
    bufp->fullBit(oldp+355,((1U & ((vlSelf->i_a >> 0xdU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xdU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c))))));
    bufp->fullBit(oldp+356,((1U & ((vlSelf->i_a >> 0xeU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xeU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c))))));
    bufp->fullBit(oldp+357,((1U & ((vlSelf->i_a >> 0xfU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xfU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c))))));
    bufp->fullBit(oldp+358,((1U & ((vlSelf->i_a >> 0x10U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x10U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c))))));
    bufp->fullBit(oldp+359,((1U & ((vlSelf->i_a >> 0x11U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x11U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c))))));
    bufp->fullBit(oldp+360,((1U & ((vlSelf->i_a >> 0x12U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x12U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c))))));
    bufp->fullBit(oldp+361,((1U & ((vlSelf->i_a >> 0x13U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x13U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c))))));
    bufp->fullBit(oldp+362,((1U & ((vlSelf->i_a >> 2U) 
                                   ^ ((vlSelf->i_b 
                                       >> 2U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c))))));
    bufp->fullBit(oldp+363,((1U & ((vlSelf->i_a >> 0x14U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x14U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c))))));
    bufp->fullBit(oldp+364,((1U & ((vlSelf->i_a >> 0x15U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x15U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c))))));
    bufp->fullBit(oldp+365,((1U & ((vlSelf->i_a >> 0x16U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x16U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c))))));
    bufp->fullBit(oldp+366,((1U & ((vlSelf->i_a >> 0x17U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x17U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c))))));
    bufp->fullBit(oldp+367,((1U & ((vlSelf->i_a >> 0x18U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x18U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c))))));
    bufp->fullBit(oldp+368,((1U & ((vlSelf->i_a >> 0x19U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x19U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c))))));
    bufp->fullBit(oldp+369,((1U & ((vlSelf->i_a >> 0x1aU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1aU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c))))));
    bufp->fullBit(oldp+370,((1U & ((vlSelf->i_a >> 0x1bU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1bU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c))))));
    bufp->fullBit(oldp+371,((1U & ((vlSelf->i_a >> 0x1cU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1cU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c))))));
    bufp->fullBit(oldp+372,((1U & ((vlSelf->i_a >> 0x1dU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1dU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c))))));
    bufp->fullBit(oldp+373,((1U & ((vlSelf->i_a >> 3U) 
                                   ^ ((vlSelf->i_b 
                                       >> 3U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c))))));
    bufp->fullBit(oldp+374,((1U & ((vlSelf->i_a >> 0x1eU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1eU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c))))));
    bufp->fullBit(oldp+375,((((vlSelf->i_a ^ vlSelf->i_b) 
                              >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))));
    bufp->fullBit(oldp+376,((1U & (((vlSelf->i_a >> 0x1fU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1fU) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0x1fU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))))));
    bufp->fullBit(oldp+377,((1U & ((vlSelf->i_a >> 4U) 
                                   ^ ((vlSelf->i_b 
                                       >> 4U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c))))));
    bufp->fullBit(oldp+378,((1U & ((vlSelf->i_a >> 5U) 
                                   ^ ((vlSelf->i_b 
                                       >> 5U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c))))));
    bufp->fullBit(oldp+379,((1U & ((vlSelf->i_a >> 6U) 
                                   ^ ((vlSelf->i_b 
                                       >> 6U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c))))));
    bufp->fullBit(oldp+380,((1U & ((vlSelf->i_a >> 7U) 
                                   ^ ((vlSelf->i_b 
                                       >> 7U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c))))));
    bufp->fullBit(oldp+381,((1U & ((vlSelf->i_a >> 8U) 
                                   ^ ((vlSelf->i_b 
                                       >> 8U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c))))));
    bufp->fullBit(oldp+382,((1U & ((vlSelf->i_a >> 9U) 
                                   ^ ((vlSelf->i_b 
                                       >> 9U) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c))))));
    bufp->fullBit(oldp+383,(vlSelf->Block_adder_total__DOT__CSA__DOT__c16));
    bufp->fullBit(oldp+384,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c16)
                                    ? (((vlSelf->i_a 
                                         >> 0x17U) 
                                        & ((vlSelf->i_b 
                                            >> 0x17U) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 6U))) 
                                       | ((vlSelf->i_b 
                                           >> 0x17U) 
                                          & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                             >> 6U)))
                                    : (((vlSelf->i_a 
                                         >> 0x17U) 
                                        & ((vlSelf->i_b 
                                            >> 0x17U) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 6U))) 
                                       | ((vlSelf->i_b 
                                           >> 0x17U) 
                                          & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                             >> 6U)))))));
    bufp->fullCData(oldp+385,(((0x80U & ((0xffffff80U 
                                          & vlSelf->i_a) 
                                         ^ ((0xffffff80U 
                                             & vlSelf->i_b) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xffffffc0U 
                                             & vlSelf->i_a) 
                                            ^ ((0xffffffc0U 
                                                & vlSelf->i_b) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xffffffe0U 
                                                & vlSelf->i_a) 
                                               ^ ((0xffffffe0U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xfffffff0U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xfffffff0U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xfffffff8U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xfffffff8U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfffffffcU 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xfffffffcU 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffffffeU 
                                                      & vlSelf->i_a) 
                                                     ^ 
                                                     ((0xfffffffeU 
                                                       & vlSelf->i_b) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                       << 1U)))) 
                                                 | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s))))))))),8);
    bufp->fullCData(oldp+386,(((0x80U & ((0xffff80U 
                                          & (vlSelf->i_a 
                                             >> 8U)) 
                                         ^ ((0xffff80U 
                                             & (vlSelf->i_b 
                                                >> 8U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xffffc0U 
                                             & (vlSelf->i_a 
                                                >> 8U)) 
                                            ^ ((0xffffc0U 
                                                & (vlSelf->i_b 
                                                   >> 8U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xffffe0U 
                                                & (vlSelf->i_a 
                                                   >> 8U)) 
                                               ^ ((0xffffe0U 
                                                   & (vlSelf->i_b 
                                                      >> 8U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xfffff0U 
                                                   & (vlSelf->i_a 
                                                      >> 8U)) 
                                                  ^ 
                                                  ((0xfffff0U 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xfffff8U 
                                                   & (vlSelf->i_a 
                                                      >> 8U)) 
                                                  ^ 
                                                  ((0xfffff8U 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfffffcU 
                                                 & (vlSelf->i_a 
                                                    >> 8U)) 
                                                ^ (
                                                   (0xfffffcU 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffffeU 
                                                      & (vlSelf->i_a 
                                                         >> 8U)) 
                                                     ^ 
                                                     ((0xfffffeU 
                                                       & (vlSelf->i_b 
                                                          >> 8U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                       << 1U)))) 
                                                 | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p))))))))),8);
    bufp->fullCData(oldp+387,(((0x80U & ((0xffff80U 
                                          & (vlSelf->i_a 
                                             >> 8U)) 
                                         ^ ((0xffff80U 
                                             & (vlSelf->i_b 
                                                >> 8U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xffffc0U 
                                             & (vlSelf->i_a 
                                                >> 8U)) 
                                            ^ ((0xffffc0U 
                                                & (vlSelf->i_b 
                                                   >> 8U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xffffe0U 
                                                & (vlSelf->i_a 
                                                   >> 8U)) 
                                               ^ ((0xffffe0U 
                                                   & (vlSelf->i_b 
                                                      >> 8U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xfffff0U 
                                                   & (vlSelf->i_a 
                                                      >> 8U)) 
                                                  ^ 
                                                  ((0xfffff0U 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xfffff8U 
                                                   & (vlSelf->i_a 
                                                      >> 8U)) 
                                                  ^ 
                                                  ((0xfffff8U 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfffffcU 
                                                 & (vlSelf->i_a 
                                                    >> 8U)) 
                                                ^ (
                                                   (0xfffffcU 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffffeU 
                                                      & (vlSelf->i_a 
                                                         >> 8U)) 
                                                     ^ 
                                                     ((0xfffffeU 
                                                       & (vlSelf->i_b 
                                                          >> 8U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                       << 1U)))) 
                                                 | (1U 
                                                    & ((~ 
                                                        (vlSelf->i_b 
                                                         >> 8U)) 
                                                       ^ 
                                                       (vlSelf->i_a 
                                                        >> 8U))))))))))),8);
    bufp->fullBit(oldp+388,((1U & (((vlSelf->i_a >> 0xfU) 
                                    & ((vlSelf->i_b 
                                        >> 0xfU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0xfU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+389,((1U & (((vlSelf->i_a >> 0xfU) 
                                    & ((vlSelf->i_b 
                                        >> 0xfU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0xfU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 6U))))));
    bufp->fullCData(oldp+390,(((0x80U & ((0xff80U & 
                                          (vlSelf->i_a 
                                           >> 0x10U)) 
                                         ^ ((0xff80U 
                                             & (vlSelf->i_b 
                                                >> 0x10U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xffc0U 
                                             & (vlSelf->i_a 
                                                >> 0x10U)) 
                                            ^ ((0xffc0U 
                                                & (vlSelf->i_b 
                                                   >> 0x10U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xffe0U 
                                                & (vlSelf->i_a 
                                                   >> 0x10U)) 
                                               ^ ((0xffe0U 
                                                   & (vlSelf->i_b 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xfff0U 
                                                   & (vlSelf->i_a 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  ((0xfff0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xfff8U 
                                                   & (vlSelf->i_a 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  ((0xfff8U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfffcU 
                                                 & (vlSelf->i_a 
                                                    >> 0x10U)) 
                                                ^ (
                                                   (0xfffcU 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffeU 
                                                      & (vlSelf->i_a 
                                                         >> 0x10U)) 
                                                     ^ 
                                                     ((0xfffeU 
                                                       & (vlSelf->i_b 
                                                          >> 0x10U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                       << 1U)))) 
                                                 | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p))))))))),8);
    bufp->fullCData(oldp+391,(((0x80U & ((0xff80U & 
                                          (vlSelf->i_a 
                                           >> 0x10U)) 
                                         ^ ((0xff80U 
                                             & (vlSelf->i_b 
                                                >> 0x10U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xffc0U 
                                             & (vlSelf->i_a 
                                                >> 0x10U)) 
                                            ^ ((0xffc0U 
                                                & (vlSelf->i_b 
                                                   >> 0x10U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xffe0U 
                                                & (vlSelf->i_a 
                                                   >> 0x10U)) 
                                               ^ ((0xffe0U 
                                                   & (vlSelf->i_b 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xfff0U 
                                                   & (vlSelf->i_a 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  ((0xfff0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xfff8U 
                                                   & (vlSelf->i_a 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  ((0xfff8U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfffcU 
                                                 & (vlSelf->i_a 
                                                    >> 0x10U)) 
                                                ^ (
                                                   (0xfffcU 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffeU 
                                                      & (vlSelf->i_a 
                                                         >> 0x10U)) 
                                                     ^ 
                                                     ((0xfffeU 
                                                       & (vlSelf->i_b 
                                                          >> 0x10U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                       << 1U)))) 
                                                 | (1U 
                                                    & ((~ 
                                                        (vlSelf->i_b 
                                                         >> 0x10U)) 
                                                       ^ 
                                                       (vlSelf->i_a 
                                                        >> 0x10U))))))))))),8);
    bufp->fullBit(oldp+392,((1U & (((vlSelf->i_a >> 0x17U) 
                                    & ((vlSelf->i_b 
                                        >> 0x17U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0x17U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+393,((1U & (((vlSelf->i_a >> 0x17U) 
                                    & ((vlSelf->i_b 
                                        >> 0x17U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0x17U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 6U))))));
    bufp->fullCData(oldp+394,(((0x80U & ((0x80U & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                         ^ ((0x80U 
                                             & (vlSelf->i_b 
                                                >> 0x18U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xc0U 
                                             & (vlSelf->i_a 
                                                >> 0x18U)) 
                                            ^ ((0xc0U 
                                                & (vlSelf->i_b 
                                                   >> 0x18U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xe0U 
                                                & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                               ^ ((0xe0U 
                                                   & (vlSelf->i_b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xf0U 
                                                   & (vlSelf->i_a 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((0xf0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xf8U 
                                                   & (vlSelf->i_a 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((0xf8U 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfcU 
                                                 & (vlSelf->i_a 
                                                    >> 0x18U)) 
                                                ^ (
                                                   (0xfcU 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfeU 
                                                      & (vlSelf->i_a 
                                                         >> 0x18U)) 
                                                     ^ 
                                                     ((0xfeU 
                                                       & (vlSelf->i_b 
                                                          >> 0x18U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                       << 1U)))) 
                                                 | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p))))))))),8);
    bufp->fullCData(oldp+395,(((0x80U & ((0x80U & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                         ^ ((0x80U 
                                             & (vlSelf->i_b 
                                                >> 0x18U)) 
                                            ^ (0xffffff80U 
                                               & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                  << 1U))))) 
                               | ((0x40U & ((0xc0U 
                                             & (vlSelf->i_a 
                                                >> 0x18U)) 
                                            ^ ((0xc0U 
                                                & (vlSelf->i_b 
                                                   >> 0x18U)) 
                                               ^ (0xffffffc0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                     << 1U))))) 
                                  | ((0x20U & ((0xe0U 
                                                & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                               ^ ((0xe0U 
                                                   & (vlSelf->i_b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      << 1U))))) 
                                     | ((0x10U & ((0xf0U 
                                                   & (vlSelf->i_a 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((0xf0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                       << 1U))))) 
                                        | ((8U & ((0xf8U 
                                                   & (vlSelf->i_a 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((0xf8U 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                       << 1U))))) 
                                           | ((4U & 
                                               ((0xfcU 
                                                 & (vlSelf->i_a 
                                                    >> 0x18U)) 
                                                ^ (
                                                   (0xfcU 
                                                    & (vlSelf->i_b 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0xfffffffcU 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                       << 1U))))) 
                                              | ((2U 
                                                  & ((0xfeU 
                                                      & (vlSelf->i_a 
                                                         >> 0x18U)) 
                                                     ^ 
                                                     ((0xfeU 
                                                       & (vlSelf->i_b 
                                                          >> 0x18U)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                       << 1U)))) 
                                                 | (1U 
                                                    & ((~ 
                                                        (vlSelf->i_b 
                                                         >> 0x18U)) 
                                                       ^ 
                                                       (vlSelf->i_a 
                                                        >> 0x18U))))))))))),8);
    bufp->fullBit(oldp+396,((1U & (((vlSelf->i_a >> 0x1fU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1fU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0x1fU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+397,((1U & (((vlSelf->i_a >> 0x1fU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1fU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 6U))) | 
                                   ((vlSelf->i_b >> 0x1fU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 6U))))));
    bufp->fullCData(oldp+398,((0xffU & (vlSelf->i_a 
                                        >> 8U))),8);
    bufp->fullCData(oldp+399,((0xffU & (vlSelf->i_b 
                                        >> 8U))),8);
    bufp->fullBit(oldp+400,((1U & ((vlSelf->i_a >> 9U) 
                                   ^ ((vlSelf->i_b 
                                       >> 9U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->fullBit(oldp+401,((1U & (((vlSelf->i_a >> 9U) 
                                    & ((vlSelf->i_b 
                                        >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->fullBit(oldp+402,((1U & ((vlSelf->i_a >> 0xaU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xaU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 1U))))));
    bufp->fullBit(oldp+403,((1U & (((vlSelf->i_a >> 0xaU) 
                                    & ((vlSelf->i_b 
                                        >> 0xaU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0xaU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+404,((1U & ((vlSelf->i_a >> 0xbU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xbU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 2U))))));
    bufp->fullBit(oldp+405,((1U & (((vlSelf->i_a >> 0xbU) 
                                    & ((vlSelf->i_b 
                                        >> 0xbU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0xbU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+406,((1U & ((vlSelf->i_a >> 0xcU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xcU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 3U))))));
    bufp->fullBit(oldp+407,((1U & (((vlSelf->i_a >> 0xcU) 
                                    & ((vlSelf->i_b 
                                        >> 0xcU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0xcU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+408,((1U & ((vlSelf->i_a >> 0xdU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xdU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 4U))))));
    bufp->fullBit(oldp+409,((1U & (((vlSelf->i_a >> 0xdU) 
                                    & ((vlSelf->i_b 
                                        >> 0xdU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0xdU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+410,((1U & ((vlSelf->i_a >> 0xeU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xeU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 5U))))));
    bufp->fullBit(oldp+411,((1U & (((vlSelf->i_a >> 0xeU) 
                                    & ((vlSelf->i_b 
                                        >> 0xeU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0xeU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+412,((1U & ((vlSelf->i_a >> 0xfU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xfU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 6U))))));
    bufp->fullBit(oldp+413,((1U & ((~ (vlSelf->i_b 
                                       >> 8U)) ^ (vlSelf->i_a 
                                                  >> 8U)))));
    bufp->fullBit(oldp+414,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                   >> 8U))));
    bufp->fullBit(oldp+415,((1U & ((vlSelf->i_a >> 9U) 
                                   ^ ((vlSelf->i_b 
                                       >> 9U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->fullBit(oldp+416,((1U & (((vlSelf->i_a >> 9U) 
                                    & ((vlSelf->i_b 
                                        >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->fullBit(oldp+417,((1U & ((vlSelf->i_a >> 0xaU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xaU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 1U))))));
    bufp->fullBit(oldp+418,((1U & (((vlSelf->i_a >> 0xaU) 
                                    & ((vlSelf->i_b 
                                        >> 0xaU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0xaU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+419,((1U & ((vlSelf->i_a >> 0xbU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xbU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 2U))))));
    bufp->fullBit(oldp+420,((1U & (((vlSelf->i_a >> 0xbU) 
                                    & ((vlSelf->i_b 
                                        >> 0xbU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0xbU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+421,((1U & ((vlSelf->i_a >> 0xcU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xcU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 3U))))));
    bufp->fullBit(oldp+422,((1U & (((vlSelf->i_a >> 0xcU) 
                                    & ((vlSelf->i_b 
                                        >> 0xcU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0xcU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+423,((1U & ((vlSelf->i_a >> 0xdU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xdU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 4U))))));
    bufp->fullBit(oldp+424,((1U & (((vlSelf->i_a >> 0xdU) 
                                    & ((vlSelf->i_b 
                                        >> 0xdU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0xdU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+425,((1U & ((vlSelf->i_a >> 0xeU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xeU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 5U))))));
    bufp->fullBit(oldp+426,((1U & (((vlSelf->i_a >> 0xeU) 
                                    & ((vlSelf->i_b 
                                        >> 0xeU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0xeU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+427,((1U & ((vlSelf->i_a >> 0xfU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xfU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 6U))))));
    bufp->fullCData(oldp+428,((0xffU & (vlSelf->i_a 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+429,((0xffU & (vlSelf->i_b 
                                        >> 0x10U))),8);
    bufp->fullBit(oldp+430,((1U & ((vlSelf->i_a >> 0x11U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x11U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->fullBit(oldp+431,((1U & (((vlSelf->i_a >> 0x11U) 
                                    & ((vlSelf->i_b 
                                        >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->fullBit(oldp+432,((1U & ((vlSelf->i_a >> 0x12U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x12U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+433,((1U & (((vlSelf->i_a >> 0x12U) 
                                    & ((vlSelf->i_b 
                                        >> 0x12U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0x12U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+434,((1U & ((vlSelf->i_a >> 0x13U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x13U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+435,((1U & (((vlSelf->i_a >> 0x13U) 
                                    & ((vlSelf->i_b 
                                        >> 0x13U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0x13U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+436,((1U & ((vlSelf->i_a >> 0x14U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x14U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+437,((1U & (((vlSelf->i_a >> 0x14U) 
                                    & ((vlSelf->i_b 
                                        >> 0x14U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0x14U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+438,((1U & ((vlSelf->i_a >> 0x15U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x15U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+439,((1U & (((vlSelf->i_a >> 0x15U) 
                                    & ((vlSelf->i_b 
                                        >> 0x15U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0x15U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+440,((1U & ((vlSelf->i_a >> 0x16U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x16U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+441,((1U & (((vlSelf->i_a >> 0x16U) 
                                    & ((vlSelf->i_b 
                                        >> 0x16U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0x16U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+442,((1U & ((vlSelf->i_a >> 0x17U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x17U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+443,((1U & ((~ (vlSelf->i_b 
                                       >> 0x10U)) ^ 
                                   (vlSelf->i_a >> 0x10U)))));
    bufp->fullBit(oldp+444,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+445,((1U & ((vlSelf->i_a >> 0x11U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x11U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->fullBit(oldp+446,((1U & (((vlSelf->i_a >> 0x11U) 
                                    & ((vlSelf->i_b 
                                        >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->fullBit(oldp+447,((1U & ((vlSelf->i_a >> 0x12U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x12U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+448,((1U & (((vlSelf->i_a >> 0x12U) 
                                    & ((vlSelf->i_b 
                                        >> 0x12U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0x12U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+449,((1U & ((vlSelf->i_a >> 0x13U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x13U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+450,((1U & (((vlSelf->i_a >> 0x13U) 
                                    & ((vlSelf->i_b 
                                        >> 0x13U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0x13U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+451,((1U & ((vlSelf->i_a >> 0x14U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x14U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+452,((1U & (((vlSelf->i_a >> 0x14U) 
                                    & ((vlSelf->i_b 
                                        >> 0x14U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0x14U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+453,((1U & ((vlSelf->i_a >> 0x15U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x15U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+454,((1U & (((vlSelf->i_a >> 0x15U) 
                                    & ((vlSelf->i_b 
                                        >> 0x15U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0x15U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+455,((1U & ((vlSelf->i_a >> 0x16U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x16U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+456,((1U & (((vlSelf->i_a >> 0x16U) 
                                    & ((vlSelf->i_b 
                                        >> 0x16U) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0x16U) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+457,((1U & ((vlSelf->i_a >> 0x17U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x17U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 6U))))));
    bufp->fullCData(oldp+458,((vlSelf->i_a >> 0x18U)),8);
    bufp->fullCData(oldp+459,((vlSelf->i_b >> 0x18U)),8);
    bufp->fullBit(oldp+460,((1U & ((vlSelf->i_a >> 0x19U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x19U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->fullBit(oldp+461,((1U & (((vlSelf->i_a >> 0x19U) 
                                    & ((vlSelf->i_b 
                                        >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->fullBit(oldp+462,((1U & ((vlSelf->i_a >> 0x1aU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1aU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+463,((1U & (((vlSelf->i_a >> 0x1aU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1aU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0x1aU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+464,((1U & ((vlSelf->i_a >> 0x1bU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1bU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+465,((1U & (((vlSelf->i_a >> 0x1bU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1bU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0x1bU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+466,((1U & ((vlSelf->i_a >> 0x1cU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1cU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+467,((1U & (((vlSelf->i_a >> 0x1cU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1cU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0x1cU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+468,((1U & ((vlSelf->i_a >> 0x1dU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1dU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+469,((1U & (((vlSelf->i_a >> 0x1dU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1dU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0x1dU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+470,((1U & ((vlSelf->i_a >> 0x1eU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1eU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+471,((1U & (((vlSelf->i_a >> 0x1eU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1eU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0x1eU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+472,((1U & ((vlSelf->i_a >> 0x1fU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1fU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+473,((1U & ((~ (vlSelf->i_b 
                                       >> 0x18U)) ^ 
                                   (vlSelf->i_a >> 0x18U)))));
    bufp->fullBit(oldp+474,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+475,((1U & ((vlSelf->i_a >> 0x19U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x19U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->fullBit(oldp+476,((1U & (((vlSelf->i_a >> 0x19U) 
                                    & ((vlSelf->i_b 
                                        >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->fullBit(oldp+477,((1U & ((vlSelf->i_a >> 0x1aU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1aU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+478,((1U & (((vlSelf->i_a >> 0x1aU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1aU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 1U))) | 
                                   ((vlSelf->i_b >> 0x1aU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 1U))))));
    bufp->fullBit(oldp+479,((1U & ((vlSelf->i_a >> 0x1bU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1bU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+480,((1U & (((vlSelf->i_a >> 0x1bU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1bU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 2U))) | 
                                   ((vlSelf->i_b >> 0x1bU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 2U))))));
    bufp->fullBit(oldp+481,((1U & ((vlSelf->i_a >> 0x1cU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1cU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+482,((1U & (((vlSelf->i_a >> 0x1cU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1cU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 3U))) | 
                                   ((vlSelf->i_b >> 0x1cU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 3U))))));
    bufp->fullBit(oldp+483,((1U & ((vlSelf->i_a >> 0x1dU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1dU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+484,((1U & (((vlSelf->i_a >> 0x1dU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1dU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 4U))) | 
                                   ((vlSelf->i_b >> 0x1dU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+485,((1U & ((vlSelf->i_a >> 0x1eU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1eU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+486,((1U & (((vlSelf->i_a >> 0x1eU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1eU) | 
                                       ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 5U))) | 
                                   ((vlSelf->i_b >> 0x1eU) 
                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+487,((1U & ((vlSelf->i_a >> 0x1fU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1fU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 6U))))));
    bufp->fullCData(oldp+488,((0xffU & vlSelf->i_a)),8);
    bufp->fullCData(oldp+489,((0xffU & vlSelf->i_b)),8);
    bufp->fullBit(oldp+490,((1U & ((vlSelf->i_a >> 1U) 
                                   ^ ((vlSelf->i_b 
                                       >> 1U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->fullBit(oldp+491,((1U & (((vlSelf->i_a >> 1U) 
                                    & ((vlSelf->i_b 
                                        >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))) 
                                   | ((vlSelf->i_b 
                                       >> 1U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->fullBit(oldp+492,((1U & ((vlSelf->i_a >> 2U) 
                                   ^ ((vlSelf->i_b 
                                       >> 2U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+493,((1U & (((vlSelf->i_a >> 2U) 
                                    & ((vlSelf->i_b 
                                        >> 2U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 1U))) 
                                   | ((vlSelf->i_b 
                                       >> 2U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+494,((1U & ((vlSelf->i_a >> 3U) 
                                   ^ ((vlSelf->i_b 
                                       >> 3U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+495,((1U & (((vlSelf->i_a >> 3U) 
                                    & ((vlSelf->i_b 
                                        >> 3U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 2U))) 
                                   | ((vlSelf->i_b 
                                       >> 3U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+496,((1U & ((vlSelf->i_a >> 4U) 
                                   ^ ((vlSelf->i_b 
                                       >> 4U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+497,((1U & (((vlSelf->i_a >> 4U) 
                                    & ((vlSelf->i_b 
                                        >> 4U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 3U))) 
                                   | ((vlSelf->i_b 
                                       >> 4U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+498,((1U & ((vlSelf->i_a >> 5U) 
                                   ^ ((vlSelf->i_b 
                                       >> 5U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+499,((1U & (((vlSelf->i_a >> 5U) 
                                    & ((vlSelf->i_b 
                                        >> 5U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 4U))) 
                                   | ((vlSelf->i_b 
                                       >> 5U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+500,((1U & ((vlSelf->i_a >> 6U) 
                                   ^ ((vlSelf->i_b 
                                       >> 6U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+501,((1U & (((vlSelf->i_a >> 6U) 
                                    & ((vlSelf->i_b 
                                        >> 6U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 5U))) 
                                   | ((vlSelf->i_b 
                                       >> 6U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+502,((1U & ((vlSelf->i_a >> 7U) 
                                   ^ ((vlSelf->i_b 
                                       >> 7U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 6U))))));
    bufp->fullCData(oldp+503,((0xfU & vlSelf->i_a)),4);
    bufp->fullCData(oldp+504,((0xfU & vlSelf->i_b)),4);
    bufp->fullCData(oldp+505,(((8U & ((0xfffffff8U 
                                       & vlSelf->i_a) 
                                      ^ ((0xfffffff8U 
                                          & vlSelf->i_b) 
                                         ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | ((4U & ((0xfffffffcU 
                                          & vlSelf->i_a) 
                                         ^ ((0xfffffffcU 
                                             & vlSelf->i_b) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffffffeU 
                                             & vlSelf->i_a) 
                                            ^ ((0xfffffffeU 
                                                & vlSelf->i_b) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & (vlSelf->i_a 
                                              ^ (vlSelf->i_b 
                                                 ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry)))))))),4);
    bufp->fullCData(oldp+506,(((8U & ((vlSelf->i_a 
                                       & ((0xfffffff8U 
                                           & vlSelf->i_b) 
                                          | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                             << 3U))) 
                                      | (vlSelf->i_b 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+507,((0xfU & (vlSelf->i_a 
                                       ^ vlSelf->i_b))),4);
    bufp->fullBit(oldp+508,((1U & (vlSelf->i_a ^ (vlSelf->i_b 
                                                  ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))))));
    bufp->fullBit(oldp+509,((1U & ((vlSelf->i_a >> 1U) 
                                   ^ ((vlSelf->i_b 
                                       >> 1U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+510,((1U & ((vlSelf->i_a >> 2U) 
                                   ^ ((vlSelf->i_b 
                                       >> 2U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+511,((1U & ((vlSelf->i_a >> 3U) 
                                   ^ ((vlSelf->i_b 
                                       >> 3U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+512,((1U & (((vlSelf->i_a >> 3U) 
                                    & ((vlSelf->i_b 
                                        >> 3U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 3U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+513,((0xfU & (vlSelf->i_a 
                                       >> 4U))),4);
    bufp->fullCData(oldp+514,((0xfU & (vlSelf->i_b 
                                       >> 4U))),4);
    bufp->fullCData(oldp+515,(((8U & ((0xffffff8U & 
                                       (vlSelf->i_a 
                                        >> 4U)) ^ (
                                                   (0xffffff8U 
                                                    & (vlSelf->i_b 
                                                       >> 4U)) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                    << 3U)))) 
                               | ((4U & ((0xffffffcU 
                                          & (vlSelf->i_a 
                                             >> 4U)) 
                                         ^ ((0xffffffcU 
                                             & (vlSelf->i_b 
                                                >> 4U)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xffffffeU 
                                             & (vlSelf->i_a 
                                                >> 4U)) 
                                            ^ ((0xffffffeU 
                                                & (vlSelf->i_b 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 4U) 
                                              ^ ((vlSelf->i_b 
                                                  >> 4U) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 1U)))))))),4);
    bufp->fullCData(oldp+516,(((8U & (((vlSelf->i_a 
                                        >> 4U) & ((0xffffff8U 
                                                   & (vlSelf->i_b 
                                                      >> 4U)) 
                                                  | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                     << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 4U) & 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                          << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+517,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+518,((1U & ((vlSelf->i_a >> 4U) 
                                   ^ ((vlSelf->i_b 
                                       >> 4U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+519,((1U & ((vlSelf->i_a >> 5U) 
                                   ^ ((vlSelf->i_b 
                                       >> 5U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+520,((1U & ((vlSelf->i_a >> 6U) 
                                   ^ ((vlSelf->i_b 
                                       >> 6U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+521,((1U & ((vlSelf->i_a >> 7U) 
                                   ^ ((vlSelf->i_b 
                                       >> 7U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+522,((1U & (((vlSelf->i_a >> 7U) 
                                    & ((vlSelf->i_b 
                                        >> 7U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 7U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+523,((0xfU & (vlSelf->i_a 
                                       >> 8U))),4);
    bufp->fullCData(oldp+524,((0xfU & (vlSelf->i_b 
                                       >> 8U))),4);
    bufp->fullCData(oldp+525,(((8U & ((0xfffff8U & 
                                       (vlSelf->i_a 
                                        >> 8U)) ^ (
                                                   (0xfffff8U 
                                                    & (vlSelf->i_b 
                                                       >> 8U)) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                    << 3U)))) 
                               | ((4U & ((0xfffffcU 
                                          & (vlSelf->i_a 
                                             >> 8U)) 
                                         ^ ((0xfffffcU 
                                             & (vlSelf->i_b 
                                                >> 8U)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffffeU 
                                             & (vlSelf->i_a 
                                                >> 8U)) 
                                            ^ ((0xfffffeU 
                                                & (vlSelf->i_b 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 8U) 
                                              ^ ((vlSelf->i_b 
                                                  >> 8U) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 2U)))))))),4);
    bufp->fullCData(oldp+526,(((8U & (((vlSelf->i_a 
                                        >> 8U) & ((0xfffff8U 
                                                   & (vlSelf->i_b 
                                                      >> 8U)) 
                                                  | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                     << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 8U) & 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                          << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+527,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+528,((1U & ((vlSelf->i_a >> 8U) 
                                   ^ ((vlSelf->i_b 
                                       >> 8U) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+529,((1U & ((vlSelf->i_a >> 9U) 
                                   ^ ((vlSelf->i_b 
                                       >> 9U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+530,((1U & ((vlSelf->i_a >> 0xaU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xaU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+531,((1U & ((vlSelf->i_a >> 0xbU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xbU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+532,((1U & (((vlSelf->i_a >> 0xbU) 
                                    & ((vlSelf->i_b 
                                        >> 0xbU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0xbU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+533,((0xfU & (vlSelf->i_a 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+534,((0xfU & (vlSelf->i_b 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+535,(((8U & ((0xffff8U & (vlSelf->i_a 
                                                   >> 0xcU)) 
                                      ^ ((0xffff8U 
                                          & (vlSelf->i_b 
                                             >> 0xcU)) 
                                         ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | ((4U & ((0xffffcU 
                                          & (vlSelf->i_a 
                                             >> 0xcU)) 
                                         ^ ((0xffffcU 
                                             & (vlSelf->i_b 
                                                >> 0xcU)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xffffeU 
                                             & (vlSelf->i_a 
                                                >> 0xcU)) 
                                            ^ ((0xffffeU 
                                                & (vlSelf->i_b 
                                                   >> 0xcU)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 0xcU) 
                                              ^ ((vlSelf->i_b 
                                                  >> 0xcU) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 3U)))))))),4);
    bufp->fullCData(oldp+536,(((8U & (((vlSelf->i_a 
                                        >> 0xcU) & 
                                       ((0xffff8U & 
                                         (vlSelf->i_b 
                                          >> 0xcU)) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 0xcU) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+537,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+538,((1U & ((vlSelf->i_a >> 0xcU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xcU) ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 3U))))));
    bufp->fullBit(oldp+539,((1U & ((vlSelf->i_a >> 0xdU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xdU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+540,((1U & ((vlSelf->i_a >> 0xeU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xeU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+541,((1U & ((vlSelf->i_a >> 0xfU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0xfU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+542,((1U & (((vlSelf->i_a >> 0xfU) 
                                    & ((vlSelf->i_b 
                                        >> 0xfU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0xfU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+543,((0xfU & (vlSelf->i_a 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+544,((0xfU & (vlSelf->i_b 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+545,(((8U & ((0xfff8U & (vlSelf->i_a 
                                                  >> 0x10U)) 
                                      ^ ((0xfff8U & 
                                          (vlSelf->i_b 
                                           >> 0x10U)) 
                                         ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | ((4U & ((0xfffcU & 
                                          (vlSelf->i_a 
                                           >> 0x10U)) 
                                         ^ ((0xfffcU 
                                             & (vlSelf->i_b 
                                                >> 0x10U)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xfffeU 
                                             & (vlSelf->i_a 
                                                >> 0x10U)) 
                                            ^ ((0xfffeU 
                                                & (vlSelf->i_b 
                                                   >> 0x10U)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 0x10U) 
                                              ^ ((vlSelf->i_b 
                                                  >> 0x10U) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 4U)))))))),4);
    bufp->fullCData(oldp+546,(((8U & (((vlSelf->i_a 
                                        >> 0x10U) & 
                                       ((0xfff8U & 
                                         (vlSelf->i_b 
                                          >> 0x10U)) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x10U) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+547,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+548,((1U & ((vlSelf->i_a >> 0x10U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x10U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                       >> 4U))))));
    bufp->fullBit(oldp+549,((1U & ((vlSelf->i_a >> 0x11U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x11U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+550,((1U & ((vlSelf->i_a >> 0x12U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x12U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+551,((1U & ((vlSelf->i_a >> 0x13U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x13U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+552,((1U & (((vlSelf->i_a >> 0x13U) 
                                    & ((vlSelf->i_b 
                                        >> 0x13U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0x13U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+553,((0xfU & (vlSelf->i_a 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+554,((0xfU & (vlSelf->i_b 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+555,(((8U & ((0xff8U & (vlSelf->i_a 
                                                 >> 0x14U)) 
                                      ^ ((0xff8U & 
                                          (vlSelf->i_b 
                                           >> 0x14U)) 
                                         ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | ((4U & ((0xffcU & 
                                          (vlSelf->i_a 
                                           >> 0x14U)) 
                                         ^ ((0xffcU 
                                             & (vlSelf->i_b 
                                                >> 0x14U)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xffeU 
                                             & (vlSelf->i_a 
                                                >> 0x14U)) 
                                            ^ ((0xffeU 
                                                & (vlSelf->i_b 
                                                   >> 0x14U)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 0x14U) 
                                              ^ ((vlSelf->i_b 
                                                  >> 0x14U) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 5U)))))))),4);
    bufp->fullCData(oldp+556,(((8U & (((vlSelf->i_a 
                                        >> 0x14U) & 
                                       ((0xff8U & (vlSelf->i_b 
                                                   >> 0x14U)) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x14U) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+557,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+558,((1U & ((vlSelf->i_a >> 0x14U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x14U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                       >> 5U))))));
    bufp->fullBit(oldp+559,((1U & ((vlSelf->i_a >> 0x15U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x15U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+560,((1U & ((vlSelf->i_a >> 0x16U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x16U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+561,((1U & ((vlSelf->i_a >> 0x17U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x17U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+562,((1U & (((vlSelf->i_a >> 0x17U) 
                                    & ((vlSelf->i_b 
                                        >> 0x17U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0x17U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+563,((0xfU & (vlSelf->i_a 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+564,((0xfU & (vlSelf->i_b 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+565,(((8U & ((0xf8U & (vlSelf->i_a 
                                                >> 0x18U)) 
                                      ^ ((0xf8U & (vlSelf->i_b 
                                                   >> 0x18U)) 
                                         ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | ((4U & ((0xfcU & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                         ^ ((0xfcU 
                                             & (vlSelf->i_b 
                                                >> 0x18U)) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                               << 2U)))) 
                                  | ((2U & ((0xfeU 
                                             & (vlSelf->i_a 
                                                >> 0x18U)) 
                                            ^ ((0xfeU 
                                                & (vlSelf->i_b 
                                                   >> 0x18U)) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                  << 1U)))) 
                                     | (1U & ((vlSelf->i_a 
                                               >> 0x18U) 
                                              ^ ((vlSelf->i_b 
                                                  >> 0x18U) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 6U)))))))),4);
    bufp->fullCData(oldp+566,(((8U & (((vlSelf->i_a 
                                        >> 0x18U) & 
                                       ((0xf8U & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x18U) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->fullCData(oldp+567,((0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+568,((1U & ((vlSelf->i_a >> 0x18U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x18U) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                       >> 6U))))));
    bufp->fullBit(oldp+569,((1U & ((vlSelf->i_a >> 0x19U) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x19U) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->fullBit(oldp+570,((1U & ((vlSelf->i_a >> 0x1aU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1aU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->fullBit(oldp+571,((1U & ((vlSelf->i_a >> 0x1bU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1bU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullBit(oldp+572,((1U & (((vlSelf->i_a >> 0x1bU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1bU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0x1bU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->fullCData(oldp+573,((vlSelf->i_a >> 0x1cU)),4);
    bufp->fullCData(oldp+574,((vlSelf->i_b >> 0x1cU)),4);
    bufp->fullCData(oldp+575,((((8U & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0x1cU)) ^ 
                                ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                                 << 3U)) | ((4U & (
                                                   (0xcU 
                                                    & (vlSelf->i_a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xcU 
                                                     & (vlSelf->i_b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c) 
                                                     << 2U)))) 
                                            | ((2U 
                                                & ((0xeU 
                                                    & (vlSelf->i_a 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((0xeU 
                                                     & (vlSelf->i_b 
                                                        >> 0x1cU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c) 
                                                     << 1U)))) 
                                               | (1U 
                                                  & ((vlSelf->i_a 
                                                      >> 0x1cU) 
                                                     ^ 
                                                     ((vlSelf->i_b 
                                                       >> 0x1cU) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                       >> 7U)))))))),4);
    bufp->fullCData(oldp+576,(((8U & (((vlSelf->i_a 
                                        >> 0x1cU) & 
                                       ((8U & (vlSelf->i_b 
                                               >> 0x1cU)) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                                           << 3U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x1cU) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                                            << 3U)))) 
                               | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                                   << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c) 
                                              << 1U) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))))),4);
    bufp->fullCData(oldp+577,(((vlSelf->i_a ^ vlSelf->i_b) 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+578,((1U & ((vlSelf->i_a >> 0x1cU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1cU) ^ 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                       >> 7U))))));
    bufp->fullBit(oldp+579,((1U & ((vlSelf->i_a >> 0x1dU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1dU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))))));
    bufp->fullBit(oldp+580,((1U & ((vlSelf->i_a >> 0x1eU) 
                                   ^ ((vlSelf->i_b 
                                       >> 0x1eU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c))))));
    bufp->fullBit(oldp+581,((((vlSelf->i_a ^ vlSelf->i_b) 
                              >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))));
    bufp->fullBit(oldp+582,((1U & (((vlSelf->i_a >> 0x1fU) 
                                    & ((vlSelf->i_b 
                                        >> 0x1fU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))) 
                                   | ((vlSelf->i_b 
                                       >> 0x1fU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))))));
}
