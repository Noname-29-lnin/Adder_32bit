// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlock_adder_total__Syms.h"


void VBlock_adder_total___024root__trace_chg_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBlock_adder_total___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_chg_0\n"); );
    // Init
    VBlock_adder_total___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlock_adder_total___024root*>(voidSelf);
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBlock_adder_total___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VBlock_adder_total___024root__trace_chg_0_sub_0(VBlock_adder_total___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgCData(oldp+0,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry),8);
        bufp->chgBit(oldp+1,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 1U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 2U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 3U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 4U))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 5U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                    >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+8,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry),8);
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+16,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry),8);
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+24,(vlSelf->Block_adder_total__DOT__CLA__DOT__g),32);
        bufp->chgIData(oldp+25,(vlSelf->Block_adder_total__DOT__CLA__DOT__p),32);
        bufp->chgBit(oldp+26,((0xffffffffU == vlSelf->Block_adder_total__DOT__CLA__DOT__p)));
        bufp->chgBit(oldp+27,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s));
        bufp->chgBit(oldp+28,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+29,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+30,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+31,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+32,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+33,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+34,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+35,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+36,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+37,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+38,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+39,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+40,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+41,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+42,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+43,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+44,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+45,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+46,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+47,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+48,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+49,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+50,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+51,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+52,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+53,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+54,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+55,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+56,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+57,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+58,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+59,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+60,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+61,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+62,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+63,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+64,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+65,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+66,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+67,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+68,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+69,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+70,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+71,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+72,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+73,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+74,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+75,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+76,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+77,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+78,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+79,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+80,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+81,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+82,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+83,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+84,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+85,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+86,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+87,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+88,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+89,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p));
        bufp->chgBit(oldp+90,(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_g));
        bufp->chgBit(oldp+91,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c));
        bufp->chgBit(oldp+92,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c));
        bufp->chgBit(oldp+93,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c));
        bufp->chgBit(oldp+94,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c));
        bufp->chgBit(oldp+95,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c));
        bufp->chgBit(oldp+96,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c));
        bufp->chgBit(oldp+97,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c));
        bufp->chgBit(oldp+98,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c));
        bufp->chgBit(oldp+99,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c));
        bufp->chgBit(oldp+100,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c));
        bufp->chgBit(oldp+101,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c));
        bufp->chgBit(oldp+102,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c));
        bufp->chgBit(oldp+103,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c));
        bufp->chgBit(oldp+104,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c));
        bufp->chgBit(oldp+105,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c));
        bufp->chgBit(oldp+106,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c));
        bufp->chgBit(oldp+107,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c));
        bufp->chgBit(oldp+108,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c));
        bufp->chgBit(oldp+109,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c));
        bufp->chgBit(oldp+110,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c));
        bufp->chgBit(oldp+111,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c));
        bufp->chgBit(oldp+112,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c));
        bufp->chgBit(oldp+113,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c));
        bufp->chgBit(oldp+114,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c));
        bufp->chgBit(oldp+115,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c));
        bufp->chgBit(oldp+116,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c));
        bufp->chgBit(oldp+117,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c));
        bufp->chgBit(oldp+118,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c));
        bufp->chgBit(oldp+119,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c));
        bufp->chgBit(oldp+120,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c));
        bufp->chgCData(oldp+121,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P),8);
        bufp->chgIData(oldp+122,(vlSelf->Block_adder_total__DOT__KSA__DOT__G),32);
        bufp->chgIData(oldp+123,(vlSelf->Block_adder_total__DOT__KSA__DOT__P),32);
        bufp->chgIData(oldp+124,(VL_SHIFTL_III(32,32,32, 
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
        bufp->chgIData(oldp+125,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb5b58e20__0) 
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
        bufp->chgIData(oldp+126,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0) 
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
        bufp->chgIData(oldp+127,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4669030b__0) 
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
        bufp->chgIData(oldp+128,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0) 
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
        bufp->chgIData(oldp+129,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3c8ad5df__0) 
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
        bufp->chgIData(oldp+130,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0) 
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
        bufp->chgIData(oldp+131,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
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
        bufp->chgIData(oldp+132,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
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
        bufp->chgIData(oldp+133,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
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
        bufp->chgIData(oldp+134,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
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
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 9U)))));
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+137,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p) 
                                      ^ vlSelf->Block_adder_total__DOT__CLA__DOT__c))));
        bufp->chgBit(oldp+146,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+147,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+150,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 1U)))));
        bufp->chgBit(oldp+157,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+159,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 2U)))));
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 3U)))));
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 4U)))));
        bufp->chgBit(oldp+162,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 5U)))));
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 6U)))));
        bufp->chgBit(oldp+164,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 7U)))));
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p) 
                                      ^ (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         >> 8U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+166,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[0]),32);
        bufp->chgIData(oldp+167,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1]),32);
        bufp->chgIData(oldp+168,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2]),32);
        bufp->chgIData(oldp+169,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3]),32);
        bufp->chgIData(oldp+170,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[4]),32);
        bufp->chgIData(oldp+171,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[5]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+172,((1U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                [5U])));
        bufp->chgIData(oldp+173,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[0]),32);
        bufp->chgIData(oldp+174,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1]),32);
        bufp->chgIData(oldp+175,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2]),32);
        bufp->chgIData(oldp+176,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3]),32);
        bufp->chgIData(oldp+177,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[4]),32);
        bufp->chgIData(oldp+178,(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[5]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+179,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry),8);
        bufp->chgBit(oldp+180,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))));
        bufp->chgBit(oldp+181,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+182,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+183,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+185,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+186,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+187,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+189,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+190,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+191,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+193,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+194,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+195,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+197,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+198,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+199,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+201,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+202,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+203,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 6U))));
        bufp->chgBit(oldp+205,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+206,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+207,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 7U))));
        bufp->chgBit(oldp+209,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c));
        bufp->chgBit(oldp+210,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c));
        bufp->chgBit(oldp+211,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+212,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry),8);
        bufp->chgBit(oldp+213,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+220,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry),8);
        bufp->chgBit(oldp+221,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgCData(oldp+228,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry),8);
        bufp->chgBit(oldp+229,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))));
        bufp->chgBit(oldp+230,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+233,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+235,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+236,(vlSelf->Block_adder_total__DOT__CSA__DOT__c8));
        bufp->chgCData(oldp+237,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry),8);
        bufp->chgBit(oldp+238,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))));
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+241,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgIData(oldp+245,(vlSelf->Block_adder_total__DOT__CLA__DOT__c),32);
        bufp->chgBit(oldp+246,((vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                >> 0x1fU)));
        bufp->chgBit(oldp+247,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 9U))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+250,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+257,((1U & vlSelf->Block_adder_total__DOT__CLA__DOT__c)));
        bufp->chgBit(oldp+258,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+261,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+264,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+266,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+267,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+268,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+269,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+270,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+273,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+274,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+276,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+277,((1U & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                      >> 8U))));
    }
    bufp->chgIData(oldp+278,(vlSelf->i_a),32);
    bufp->chgIData(oldp+279,(vlSelf->i_b),32);
    bufp->chgIData(oldp+280,(vlSelf->o_CRA),32);
    bufp->chgIData(oldp+281,(vlSelf->o_CLA),32);
    bufp->chgIData(oldp+282,(vlSelf->o_CSA),32);
    bufp->chgIData(oldp+283,(vlSelf->o_CSKA),32);
    bufp->chgIData(oldp+284,(vlSelf->o_KSA),32);
    bufp->chgBit(oldp+285,((1U & vlSelf->i_a)));
    bufp->chgBit(oldp+286,((1U & vlSelf->i_b)));
    bufp->chgBit(oldp+287,((1U & (vlSelf->i_a >> 0xaU))));
    bufp->chgBit(oldp+288,((1U & (vlSelf->i_b >> 0xaU))));
    bufp->chgBit(oldp+289,((1U & (vlSelf->i_a >> 0xbU))));
    bufp->chgBit(oldp+290,((1U & (vlSelf->i_b >> 0xbU))));
    bufp->chgBit(oldp+291,((1U & (vlSelf->i_a >> 0xcU))));
    bufp->chgBit(oldp+292,((1U & (vlSelf->i_b >> 0xcU))));
    bufp->chgBit(oldp+293,((1U & (vlSelf->i_a >> 0xdU))));
    bufp->chgBit(oldp+294,((1U & (vlSelf->i_b >> 0xdU))));
    bufp->chgBit(oldp+295,((1U & (vlSelf->i_a >> 0xeU))));
    bufp->chgBit(oldp+296,((1U & (vlSelf->i_b >> 0xeU))));
    bufp->chgBit(oldp+297,((1U & (vlSelf->i_a >> 0xfU))));
    bufp->chgBit(oldp+298,((1U & (vlSelf->i_b >> 0xfU))));
    bufp->chgBit(oldp+299,((1U & (vlSelf->i_a >> 0x10U))));
    bufp->chgBit(oldp+300,((1U & (vlSelf->i_b >> 0x10U))));
    bufp->chgBit(oldp+301,((1U & (vlSelf->i_a >> 0x11U))));
    bufp->chgBit(oldp+302,((1U & (vlSelf->i_b >> 0x11U))));
    bufp->chgBit(oldp+303,((1U & (vlSelf->i_a >> 0x12U))));
    bufp->chgBit(oldp+304,((1U & (vlSelf->i_b >> 0x12U))));
    bufp->chgBit(oldp+305,((1U & (vlSelf->i_a >> 0x13U))));
    bufp->chgBit(oldp+306,((1U & (vlSelf->i_b >> 0x13U))));
    bufp->chgBit(oldp+307,((1U & (vlSelf->i_a >> 1U))));
    bufp->chgBit(oldp+308,((1U & (vlSelf->i_b >> 1U))));
    bufp->chgBit(oldp+309,((1U & (vlSelf->i_a >> 0x14U))));
    bufp->chgBit(oldp+310,((1U & (vlSelf->i_b >> 0x14U))));
    bufp->chgBit(oldp+311,((1U & (vlSelf->i_a >> 0x15U))));
    bufp->chgBit(oldp+312,((1U & (vlSelf->i_b >> 0x15U))));
    bufp->chgBit(oldp+313,((1U & (vlSelf->i_a >> 0x16U))));
    bufp->chgBit(oldp+314,((1U & (vlSelf->i_b >> 0x16U))));
    bufp->chgBit(oldp+315,((1U & (vlSelf->i_a >> 0x17U))));
    bufp->chgBit(oldp+316,((1U & (vlSelf->i_b >> 0x17U))));
    bufp->chgBit(oldp+317,((1U & (vlSelf->i_a >> 0x18U))));
    bufp->chgBit(oldp+318,((1U & (vlSelf->i_b >> 0x18U))));
    bufp->chgBit(oldp+319,((1U & (vlSelf->i_a >> 0x19U))));
    bufp->chgBit(oldp+320,((1U & (vlSelf->i_b >> 0x19U))));
    bufp->chgBit(oldp+321,((1U & (vlSelf->i_a >> 0x1aU))));
    bufp->chgBit(oldp+322,((1U & (vlSelf->i_b >> 0x1aU))));
    bufp->chgBit(oldp+323,((1U & (vlSelf->i_a >> 0x1bU))));
    bufp->chgBit(oldp+324,((1U & (vlSelf->i_b >> 0x1bU))));
    bufp->chgBit(oldp+325,((1U & (vlSelf->i_a >> 0x1cU))));
    bufp->chgBit(oldp+326,((1U & (vlSelf->i_b >> 0x1cU))));
    bufp->chgBit(oldp+327,((1U & (vlSelf->i_a >> 0x1dU))));
    bufp->chgBit(oldp+328,((1U & (vlSelf->i_b >> 0x1dU))));
    bufp->chgBit(oldp+329,((1U & (vlSelf->i_a >> 2U))));
    bufp->chgBit(oldp+330,((1U & (vlSelf->i_b >> 2U))));
    bufp->chgBit(oldp+331,((1U & (vlSelf->i_a >> 0x1eU))));
    bufp->chgBit(oldp+332,((1U & (vlSelf->i_b >> 0x1eU))));
    bufp->chgBit(oldp+333,((vlSelf->i_a >> 0x1fU)));
    bufp->chgBit(oldp+334,((vlSelf->i_b >> 0x1fU)));
    bufp->chgBit(oldp+335,((1U & (vlSelf->i_a >> 3U))));
    bufp->chgBit(oldp+336,((1U & (vlSelf->i_b >> 3U))));
    bufp->chgBit(oldp+337,((1U & (vlSelf->i_a >> 4U))));
    bufp->chgBit(oldp+338,((1U & (vlSelf->i_b >> 4U))));
    bufp->chgBit(oldp+339,((1U & (vlSelf->i_a >> 5U))));
    bufp->chgBit(oldp+340,((1U & (vlSelf->i_b >> 5U))));
    bufp->chgBit(oldp+341,((1U & (vlSelf->i_a >> 6U))));
    bufp->chgBit(oldp+342,((1U & (vlSelf->i_b >> 6U))));
    bufp->chgBit(oldp+343,((1U & (vlSelf->i_a >> 7U))));
    bufp->chgBit(oldp+344,((1U & (vlSelf->i_b >> 7U))));
    bufp->chgBit(oldp+345,((1U & (vlSelf->i_a >> 8U))));
    bufp->chgBit(oldp+346,((1U & (vlSelf->i_b >> 8U))));
    bufp->chgBit(oldp+347,((1U & (vlSelf->i_a >> 9U))));
    bufp->chgBit(oldp+348,((1U & (vlSelf->i_b >> 9U))));
    bufp->chgIData(oldp+349,(((0x80000000U & ((vlSelf->i_a 
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
    bufp->chgBit(oldp+350,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))));
    bufp->chgBit(oldp+351,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c))))));
    bufp->chgBit(oldp+352,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c))))));
    bufp->chgBit(oldp+353,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c))))));
    bufp->chgBit(oldp+354,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c))))));
    bufp->chgBit(oldp+355,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c))))));
    bufp->chgBit(oldp+356,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c))))));
    bufp->chgBit(oldp+357,((1U & ((vlSelf->i_a >> 0x10U) 
                                  ^ ((vlSelf->i_b >> 0x10U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c))))));
    bufp->chgBit(oldp+358,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c))))));
    bufp->chgBit(oldp+359,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c))))));
    bufp->chgBit(oldp+360,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c))))));
    bufp->chgBit(oldp+361,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c))))));
    bufp->chgBit(oldp+362,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c))))));
    bufp->chgBit(oldp+363,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c))))));
    bufp->chgBit(oldp+364,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c))))));
    bufp->chgBit(oldp+365,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c))))));
    bufp->chgBit(oldp+366,((1U & ((vlSelf->i_a >> 0x18U) 
                                  ^ ((vlSelf->i_b >> 0x18U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c))))));
    bufp->chgBit(oldp+367,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c))))));
    bufp->chgBit(oldp+368,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c))))));
    bufp->chgBit(oldp+369,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c))))));
    bufp->chgBit(oldp+370,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c))))));
    bufp->chgBit(oldp+371,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c))))));
    bufp->chgBit(oldp+372,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c))))));
    bufp->chgBit(oldp+373,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c))))));
    bufp->chgBit(oldp+374,((((vlSelf->i_a ^ vlSelf->i_b) 
                             >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))));
    bufp->chgBit(oldp+375,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))) 
                                  | ((vlSelf->i_b >> 0x1fU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))))));
    bufp->chgBit(oldp+376,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c))))));
    bufp->chgBit(oldp+377,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c))))));
    bufp->chgBit(oldp+378,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c))))));
    bufp->chgBit(oldp+379,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c))))));
    bufp->chgBit(oldp+380,((1U & ((vlSelf->i_a >> 8U) 
                                  ^ ((vlSelf->i_b >> 8U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c))))));
    bufp->chgBit(oldp+381,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c))))));
    bufp->chgBit(oldp+382,(vlSelf->Block_adder_total__DOT__CSA__DOT__c16));
    bufp->chgBit(oldp+383,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c16)
                                   ? (((vlSelf->i_a 
                                        >> 0x17U) & 
                                       ((vlSelf->i_b 
                                         >> 0x17U) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                           >> 6U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x17U) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                            >> 6U)))
                                   : (((vlSelf->i_a 
                                        >> 0x17U) & 
                                       ((vlSelf->i_b 
                                         >> 0x17U) 
                                        | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                           >> 6U))) 
                                      | ((vlSelf->i_b 
                                          >> 0x17U) 
                                         & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                            >> 6U)))))));
    bufp->chgCData(oldp+384,(((0x80U & ((0xffffff80U 
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
                                               ^ ((0xfffffffcU 
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
    bufp->chgCData(oldp+385,(((0x80U & ((0xffff80U 
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
                                               ^ ((0xfffffcU 
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
    bufp->chgCData(oldp+386,(((0x80U & ((0xffff80U 
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
                                               ^ ((0xfffffcU 
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
    bufp->chgBit(oldp+387,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 6U))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+388,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 6U))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+389,(((0x80U & ((0xff80U & 
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
                                               ^ ((0xfffcU 
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
    bufp->chgCData(oldp+390,(((0x80U & ((0xff80U & 
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
                                               ^ ((0xfffcU 
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
    bufp->chgBit(oldp+391,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgBit(oldp+392,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgCData(oldp+393,(((0x80U & ((0x80U & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                        ^ ((0x80U & 
                                            (vlSelf->i_b 
                                             >> 0x18U)) 
                                           ^ (0xffffff80U 
                                              & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                 << 1U))))) 
                              | ((0x40U & ((0xc0U & 
                                            (vlSelf->i_a 
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
                                               ^ ((0xfcU 
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
    bufp->chgCData(oldp+394,(((0x80U & ((0x80U & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                        ^ ((0x80U & 
                                            (vlSelf->i_b 
                                             >> 0x18U)) 
                                           ^ (0xffffff80U 
                                              & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                 << 1U))))) 
                              | ((0x40U & ((0xc0U & 
                                            (vlSelf->i_a 
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
                                               ^ ((0xfcU 
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
    bufp->chgBit(oldp+395,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1fU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgBit(oldp+396,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1fU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgCData(oldp+397,((0xffU & (vlSelf->i_a 
                                       >> 8U))),8);
    bufp->chgCData(oldp+398,((0xffU & (vlSelf->i_b 
                                       >> 8U))),8);
    bufp->chgBit(oldp+399,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->chgBit(oldp+400,((1U & (((vlSelf->i_a >> 9U) 
                                   & ((vlSelf->i_b 
                                       >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 9U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->chgBit(oldp+401,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+402,((1U & (((vlSelf->i_a >> 0xaU) 
                                   & ((vlSelf->i_b 
                                       >> 0xaU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 1U))) 
                                  | ((vlSelf->i_b >> 0xaU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+403,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+404,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 2U))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+405,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+406,((1U & (((vlSelf->i_a >> 0xcU) 
                                   & ((vlSelf->i_b 
                                       >> 0xcU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 3U))) 
                                  | ((vlSelf->i_b >> 0xcU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+407,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+408,((1U & (((vlSelf->i_a >> 0xdU) 
                                   & ((vlSelf->i_b 
                                       >> 0xdU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 4U))) 
                                  | ((vlSelf->i_b >> 0xdU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+409,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+410,((1U & (((vlSelf->i_a >> 0xeU) 
                                   & ((vlSelf->i_b 
                                       >> 0xeU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 5U))) 
                                  | ((vlSelf->i_b >> 0xeU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+411,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+412,((1U & ((~ (vlSelf->i_b >> 8U)) 
                                  ^ (vlSelf->i_a >> 8U)))));
    bufp->chgBit(oldp+413,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+414,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->chgBit(oldp+415,((1U & (((vlSelf->i_a >> 9U) 
                                   & ((vlSelf->i_b 
                                       >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 9U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->chgBit(oldp+416,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+417,((1U & (((vlSelf->i_a >> 0xaU) 
                                   & ((vlSelf->i_b 
                                       >> 0xaU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 1U))) 
                                  | ((vlSelf->i_b >> 0xaU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+418,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+419,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 2U))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+420,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+421,((1U & (((vlSelf->i_a >> 0xcU) 
                                   & ((vlSelf->i_b 
                                       >> 0xcU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 3U))) 
                                  | ((vlSelf->i_b >> 0xcU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+422,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+423,((1U & (((vlSelf->i_a >> 0xdU) 
                                   & ((vlSelf->i_b 
                                       >> 0xdU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 4U))) 
                                  | ((vlSelf->i_b >> 0xdU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+424,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+425,((1U & (((vlSelf->i_a >> 0xeU) 
                                   & ((vlSelf->i_b 
                                       >> 0xeU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 5U))) 
                                  | ((vlSelf->i_b >> 0xeU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+426,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+427,((0xffU & (vlSelf->i_a 
                                       >> 0x10U))),8);
    bufp->chgCData(oldp+428,((0xffU & (vlSelf->i_b 
                                       >> 0x10U))),8);
    bufp->chgBit(oldp+429,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->chgBit(oldp+430,((1U & (((vlSelf->i_a >> 0x11U) 
                                   & ((vlSelf->i_b 
                                       >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x11U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->chgBit(oldp+431,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+432,((1U & (((vlSelf->i_a >> 0x12U) 
                                   & ((vlSelf->i_b 
                                       >> 0x12U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x12U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+433,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+434,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+435,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+436,((1U & (((vlSelf->i_a >> 0x14U) 
                                   & ((vlSelf->i_b 
                                       >> 0x14U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x14U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+437,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+438,((1U & (((vlSelf->i_a >> 0x15U) 
                                   & ((vlSelf->i_b 
                                       >> 0x15U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x15U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+439,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+440,((1U & (((vlSelf->i_a >> 0x16U) 
                                   & ((vlSelf->i_b 
                                       >> 0x16U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x16U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+441,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+442,((1U & ((~ (vlSelf->i_b >> 0x10U)) 
                                  ^ (vlSelf->i_a >> 0x10U)))));
    bufp->chgBit(oldp+443,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+444,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->chgBit(oldp+445,((1U & (((vlSelf->i_a >> 0x11U) 
                                   & ((vlSelf->i_b 
                                       >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x11U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->chgBit(oldp+446,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+447,((1U & (((vlSelf->i_a >> 0x12U) 
                                   & ((vlSelf->i_b 
                                       >> 0x12U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x12U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+448,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+449,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+450,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+451,((1U & (((vlSelf->i_a >> 0x14U) 
                                   & ((vlSelf->i_b 
                                       >> 0x14U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x14U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+452,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+453,((1U & (((vlSelf->i_a >> 0x15U) 
                                   & ((vlSelf->i_b 
                                       >> 0x15U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x15U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+454,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+455,((1U & (((vlSelf->i_a >> 0x16U) 
                                   & ((vlSelf->i_b 
                                       >> 0x16U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x16U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+456,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+457,((vlSelf->i_a >> 0x18U)),8);
    bufp->chgCData(oldp+458,((vlSelf->i_b >> 0x18U)),8);
    bufp->chgBit(oldp+459,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->chgBit(oldp+460,((1U & (((vlSelf->i_a >> 0x19U) 
                                   & ((vlSelf->i_b 
                                       >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x19U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->chgBit(oldp+461,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+462,((1U & (((vlSelf->i_a >> 0x1aU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1aU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+463,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+464,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1bU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+465,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+466,((1U & (((vlSelf->i_a >> 0x1cU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1cU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1cU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+467,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+468,((1U & (((vlSelf->i_a >> 0x1dU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1dU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+469,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+470,((1U & (((vlSelf->i_a >> 0x1eU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1eU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1eU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+471,((1U & ((vlSelf->i_a >> 0x1fU) 
                                  ^ ((vlSelf->i_b >> 0x1fU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+472,((1U & ((~ (vlSelf->i_b >> 0x18U)) 
                                  ^ (vlSelf->i_a >> 0x18U)))));
    bufp->chgBit(oldp+473,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+474,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->chgBit(oldp+475,((1U & (((vlSelf->i_a >> 0x19U) 
                                   & ((vlSelf->i_b 
                                       >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x19U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->chgBit(oldp+476,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+477,((1U & (((vlSelf->i_a >> 0x1aU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1aU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+478,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+479,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1bU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+480,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+481,((1U & (((vlSelf->i_a >> 0x1cU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1cU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1cU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+482,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+483,((1U & (((vlSelf->i_a >> 0x1dU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1dU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+484,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+485,((1U & (((vlSelf->i_a >> 0x1eU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1eU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1eU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+486,((1U & ((vlSelf->i_a >> 0x1fU) 
                                  ^ ((vlSelf->i_b >> 0x1fU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+487,((0xffU & vlSelf->i_a)),8);
    bufp->chgCData(oldp+488,((0xffU & vlSelf->i_b)),8);
    bufp->chgBit(oldp+489,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->chgBit(oldp+490,((1U & (((vlSelf->i_a >> 1U) 
                                   & ((vlSelf->i_b 
                                       >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))) 
                                  | ((vlSelf->i_b >> 1U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->chgBit(oldp+491,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+492,((1U & (((vlSelf->i_a >> 2U) 
                                   & ((vlSelf->i_b 
                                       >> 2U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 1U))) 
                                  | ((vlSelf->i_b >> 2U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+493,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+494,((1U & (((vlSelf->i_a >> 3U) 
                                   & ((vlSelf->i_b 
                                       >> 3U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 2U))) 
                                  | ((vlSelf->i_b >> 3U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+495,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+496,((1U & (((vlSelf->i_a >> 4U) 
                                   & ((vlSelf->i_b 
                                       >> 4U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 3U))) 
                                  | ((vlSelf->i_b >> 4U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+497,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+498,((1U & (((vlSelf->i_a >> 5U) 
                                   & ((vlSelf->i_b 
                                       >> 5U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 4U))) 
                                  | ((vlSelf->i_b >> 5U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+499,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+500,((1U & (((vlSelf->i_a >> 6U) 
                                   & ((vlSelf->i_b 
                                       >> 6U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 5U))) 
                                  | ((vlSelf->i_b >> 6U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+501,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+502,((0xfU & vlSelf->i_a)),4);
    bufp->chgCData(oldp+503,((0xfU & vlSelf->i_b)),4);
    bufp->chgCData(oldp+504,(((8U & ((0xfffffff8U & vlSelf->i_a) 
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
    bufp->chgCData(oldp+505,(((8U & ((vlSelf->i_a & 
                                      ((0xfffffff8U 
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
    bufp->chgCData(oldp+506,((0xfU & (vlSelf->i_a ^ vlSelf->i_b))),4);
    bufp->chgBit(oldp+507,((1U & (vlSelf->i_a ^ (vlSelf->i_b 
                                                 ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))))));
    bufp->chgBit(oldp+508,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+509,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+510,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+511,((1U & (((vlSelf->i_a >> 3U) 
                                   & ((vlSelf->i_b 
                                       >> 3U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 3U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+512,((0xfU & (vlSelf->i_a >> 4U))),4);
    bufp->chgCData(oldp+513,((0xfU & (vlSelf->i_b >> 4U))),4);
    bufp->chgCData(oldp+514,(((8U & ((0xffffff8U & 
                                      (vlSelf->i_a 
                                       >> 4U)) ^ ((0xffffff8U 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 1U)))))))),4);
    bufp->chgCData(oldp+515,(((8U & (((vlSelf->i_a 
                                       >> 4U) & ((0xffffff8U 
                                                  & (vlSelf->i_b 
                                                     >> 4U)) 
                                                 | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                    << 3U))) 
                                     | ((vlSelf->i_b 
                                         >> 4U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                   << 3U)))) 
                              | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                  << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                             << 1U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->chgCData(oldp+516,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 4U))),4);
    bufp->chgBit(oldp+517,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+518,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+519,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+520,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+521,((1U & (((vlSelf->i_a >> 7U) 
                                   & ((vlSelf->i_b 
                                       >> 7U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 7U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+522,((0xfU & (vlSelf->i_a >> 8U))),4);
    bufp->chgCData(oldp+523,((0xfU & (vlSelf->i_b >> 8U))),4);
    bufp->chgCData(oldp+524,(((8U & ((0xfffff8U & (vlSelf->i_a 
                                                   >> 8U)) 
                                     ^ ((0xfffff8U 
                                         & (vlSelf->i_b 
                                            >> 8U)) 
                                        ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 2U)))))))),4);
    bufp->chgCData(oldp+525,(((8U & (((vlSelf->i_a 
                                       >> 8U) & ((0xfffff8U 
                                                  & (vlSelf->i_b 
                                                     >> 8U)) 
                                                 | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                    << 3U))) 
                                     | ((vlSelf->i_b 
                                         >> 8U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                   << 3U)))) 
                              | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                  << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                             << 1U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->chgCData(oldp+526,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 8U))),4);
    bufp->chgBit(oldp+527,((1U & ((vlSelf->i_a >> 8U) 
                                  ^ ((vlSelf->i_b >> 8U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+528,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+529,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+530,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+531,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+532,((0xfU & (vlSelf->i_a >> 0xcU))),4);
    bufp->chgCData(oldp+533,((0xfU & (vlSelf->i_b >> 0xcU))),4);
    bufp->chgCData(oldp+534,(((8U & ((0xffff8U & (vlSelf->i_a 
                                                  >> 0xcU)) 
                                     ^ ((0xffff8U & 
                                         (vlSelf->i_b 
                                          >> 0xcU)) 
                                        ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U)))) 
                              | ((4U & ((0xffffcU & 
                                         (vlSelf->i_a 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 3U)))))))),4);
    bufp->chgCData(oldp+535,(((8U & (((vlSelf->i_a 
                                       >> 0xcU) & (
                                                   (0xffff8U 
                                                    & (vlSelf->i_b 
                                                       >> 0xcU)) 
                                                   | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                      << 3U))) 
                                     | ((vlSelf->i_b 
                                         >> 0xcU) & 
                                        ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                         << 3U)))) 
                              | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                  << 2U) | (((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                             << 1U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))),4);
    bufp->chgCData(oldp+536,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+537,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+538,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+539,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+540,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+541,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+542,((0xfU & (vlSelf->i_a >> 0x10U))),4);
    bufp->chgCData(oldp+543,((0xfU & (vlSelf->i_b >> 0x10U))),4);
    bufp->chgCData(oldp+544,(((8U & ((0xfff8U & (vlSelf->i_a 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 4U)))))))),4);
    bufp->chgCData(oldp+545,(((8U & (((vlSelf->i_a 
                                       >> 0x10U) & 
                                      ((0xfff8U & (vlSelf->i_b 
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
    bufp->chgCData(oldp+546,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x10U))),4);
    bufp->chgBit(oldp+547,((1U & ((vlSelf->i_a >> 0x10U) 
                                  ^ ((vlSelf->i_b >> 0x10U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+548,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+549,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+550,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+551,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x13U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+552,((0xfU & (vlSelf->i_a >> 0x14U))),4);
    bufp->chgCData(oldp+553,((0xfU & (vlSelf->i_b >> 0x14U))),4);
    bufp->chgCData(oldp+554,(((8U & ((0xff8U & (vlSelf->i_a 
                                                >> 0x14U)) 
                                     ^ ((0xff8U & (vlSelf->i_b 
                                                   >> 0x14U)) 
                                        ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U)))) 
                              | ((4U & ((0xffcU & (vlSelf->i_a 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 5U)))))))),4);
    bufp->chgCData(oldp+555,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+556,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x14U))),4);
    bufp->chgBit(oldp+557,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+558,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+559,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+560,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+561,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x17U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+562,((0xfU & (vlSelf->i_a >> 0x18U))),4);
    bufp->chgCData(oldp+563,((0xfU & (vlSelf->i_b >> 0x18U))),4);
    bufp->chgCData(oldp+564,(((8U & ((0xf8U & (vlSelf->i_a 
                                               >> 0x18U)) 
                                     ^ ((0xf8U & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                        ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                           << 3U)))) 
                              | ((4U & ((0xfcU & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                        ^ ((0xfcU & 
                                            (vlSelf->i_b 
                                             >> 0x18U)) 
                                           ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                              << 2U)))) 
                                 | ((2U & ((0xfeU & 
                                            (vlSelf->i_a 
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
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   >> 6U)))))))),4);
    bufp->chgCData(oldp+565,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+566,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x18U))),4);
    bufp->chgBit(oldp+567,((1U & ((vlSelf->i_a >> 0x18U) 
                                  ^ ((vlSelf->i_b >> 0x18U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+568,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+569,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+570,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+571,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x1bU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+572,((vlSelf->i_a >> 0x1cU)),4);
    bufp->chgCData(oldp+573,((vlSelf->i_b >> 0x1cU)),4);
    bufp->chgCData(oldp+574,((((8U & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x1cU)) ^ 
                               ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                                << 3U)) | ((4U & ((0xcU 
                                                   & (vlSelf->i_a 
                                                      >> 0x1cU)) 
                                                  ^ 
                                                  ((0xcU 
                                                    & (vlSelf->i_b 
                                                       >> 0x1cU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c) 
                                                    << 2U)))) 
                                           | ((2U & 
                                               ((0xeU 
                                                 & (vlSelf->i_a 
                                                    >> 0x1cU)) 
                                                ^ (
                                                   (0xeU 
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
    bufp->chgCData(oldp+575,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+576,(((vlSelf->i_a ^ vlSelf->i_b) 
                              >> 0x1cU)),4);
    bufp->chgBit(oldp+577,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 7U))))));
    bufp->chgBit(oldp+578,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))))));
    bufp->chgBit(oldp+579,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c))))));
    bufp->chgBit(oldp+580,((((vlSelf->i_a ^ vlSelf->i_b) 
                             >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))));
    bufp->chgBit(oldp+581,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))) 
                                  | ((vlSelf->i_b >> 0x1fU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))))));
}

void VBlock_adder_total___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root__trace_cleanup\n"); );
    // Init
    VBlock_adder_total___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlock_adder_total___024root*>(voidSelf);
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
}
