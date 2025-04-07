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
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
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
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgCData(oldp+8,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry),8);
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+16,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry),8);
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+24,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry),8);
        bufp->chgBit(oldp+25,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+32,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry),8);
        bufp->chgBit(oldp+33,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+40,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry),8);
        bufp->chgBit(oldp+41,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 4U))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 5U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     >> 6U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+48,(vlSelf->Block_adder_total__DOT__CLA__DOT__P),32);
        bufp->chgIData(oldp+49,(vlSelf->Block_adder_total__DOT__CLA__DOT__G),32);
        bufp->chgBit(oldp+50,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellout__FA0__o_s));
        bufp->chgBit(oldp+51,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA1__i_c));
        bufp->chgBit(oldp+52,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c));
        bufp->chgBit(oldp+53,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c));
        bufp->chgBit(oldp+54,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c));
        bufp->chgBit(oldp+55,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c));
        bufp->chgBit(oldp+56,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c));
        bufp->chgBit(oldp+57,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c));
        bufp->chgBit(oldp+58,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c));
        bufp->chgBit(oldp+59,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c));
        bufp->chgBit(oldp+60,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c));
        bufp->chgBit(oldp+61,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c));
        bufp->chgBit(oldp+62,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c));
        bufp->chgBit(oldp+63,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c));
        bufp->chgBit(oldp+64,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c));
        bufp->chgBit(oldp+65,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c));
        bufp->chgBit(oldp+66,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c));
        bufp->chgBit(oldp+67,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c));
        bufp->chgBit(oldp+68,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c));
        bufp->chgBit(oldp+69,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c));
        bufp->chgBit(oldp+70,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c));
        bufp->chgBit(oldp+71,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c));
        bufp->chgBit(oldp+72,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c));
        bufp->chgBit(oldp+73,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c));
        bufp->chgBit(oldp+74,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c));
        bufp->chgBit(oldp+75,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c));
        bufp->chgBit(oldp+76,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c));
        bufp->chgBit(oldp+77,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c));
        bufp->chgBit(oldp+78,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c));
        bufp->chgBit(oldp+79,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c));
        bufp->chgBit(oldp+80,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c));
        bufp->chgBit(oldp+81,(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c));
        bufp->chgCData(oldp+82,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P),8);
        bufp->chgIData(oldp+83,(VL_SHIFTL_III(32,32,32, 
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
                                                                                & vlSelf->Block_adder_total__DOT__CLA__DOT__G)) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0))))))))))))))))), 1U)),32);
        bufp->chgIData(oldp+84,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb5b58e20__0) 
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
        bufp->chgIData(oldp+85,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0) 
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
        bufp->chgIData(oldp+86,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4669030b__0) 
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
        bufp->chgIData(oldp+87,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0) 
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
        bufp->chgIData(oldp+88,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3c8ad5df__0) 
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
        bufp->chgIData(oldp+89,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0) 
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
        bufp->chgIData(oldp+90,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
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
        bufp->chgIData(oldp+91,((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
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
        bufp->chgIData(oldp+92,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
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
                                                                                & vlSelf->Block_adder_total__DOT__CLA__DOT__G)) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0)))))))))))))))))),32);
        bufp->chgIData(oldp+93,(((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0) 
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
                                                                                & vlSelf->Block_adder_total__DOT__CLA__DOT__P) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1f0b425b__0)))))))))))))))))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+94,(vlSelf->Block_adder_total__DOT__CSA__DOT__c8));
        bufp->chgCData(oldp+95,(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry),8);
        bufp->chgBit(oldp+96,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     >> 1U))));
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     >> 2U))));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     >> 3U))));
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                      >> 6U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+103,(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry),8);
        bufp->chgBit(oldp+104,((1U & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))));
        bufp->chgBit(oldp+105,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+106,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+107,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+108,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 1U))));
        bufp->chgBit(oldp+109,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+110,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+111,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 2U))));
        bufp->chgBit(oldp+113,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+114,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+115,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 3U))));
        bufp->chgBit(oldp+117,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+118,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+119,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+120,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 4U))));
        bufp->chgBit(oldp+121,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+122,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+123,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+124,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 5U))));
        bufp->chgBit(oldp+125,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+126,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+127,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 6U))));
        bufp->chgBit(oldp+129,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c));
        bufp->chgBit(oldp+130,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c));
        bufp->chgBit(oldp+131,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                      >> 7U))));
        bufp->chgBit(oldp+133,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c));
        bufp->chgBit(oldp+134,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c));
        bufp->chgBit(oldp+135,(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c));
    }
    bufp->chgIData(oldp+136,(vlSelf->i_a),32);
    bufp->chgIData(oldp+137,(vlSelf->i_b),32);
    bufp->chgIData(oldp+138,(vlSelf->o_CRA),32);
    bufp->chgIData(oldp+139,(vlSelf->o_CLA),32);
    bufp->chgIData(oldp+140,(vlSelf->o_CSA),32);
    bufp->chgIData(oldp+141,(vlSelf->o_CSKA),32);
    bufp->chgIData(oldp+142,(vlSelf->o_KSA),32);
    bufp->chgIData(oldp+143,(vlSelf->Block_adder_total__DOT__CLA__DOT__C),32);
    bufp->chgIData(oldp+144,(((0x80000000U & ((vlSelf->i_a 
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
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA1__i_c))))))))))))))))))))))))))))))))),32);
    bufp->chgBit(oldp+145,((1U & vlSelf->i_a)));
    bufp->chgBit(oldp+146,((1U & vlSelf->i_b)));
    bufp->chgBit(oldp+147,((1U & (vlSelf->i_a >> 1U))));
    bufp->chgBit(oldp+148,((1U & (vlSelf->i_b >> 1U))));
    bufp->chgBit(oldp+149,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA1__i_c))))));
    bufp->chgBit(oldp+150,((1U & (vlSelf->i_a >> 0xaU))));
    bufp->chgBit(oldp+151,((1U & (vlSelf->i_b >> 0xaU))));
    bufp->chgBit(oldp+152,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c))))));
    bufp->chgBit(oldp+153,((1U & (vlSelf->i_a >> 0xbU))));
    bufp->chgBit(oldp+154,((1U & (vlSelf->i_b >> 0xbU))));
    bufp->chgBit(oldp+155,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c))))));
    bufp->chgBit(oldp+156,((1U & (vlSelf->i_a >> 0xcU))));
    bufp->chgBit(oldp+157,((1U & (vlSelf->i_b >> 0xcU))));
    bufp->chgBit(oldp+158,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c))))));
    bufp->chgBit(oldp+159,((1U & (vlSelf->i_a >> 0xdU))));
    bufp->chgBit(oldp+160,((1U & (vlSelf->i_b >> 0xdU))));
    bufp->chgBit(oldp+161,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c))))));
    bufp->chgBit(oldp+162,((1U & (vlSelf->i_a >> 0xeU))));
    bufp->chgBit(oldp+163,((1U & (vlSelf->i_b >> 0xeU))));
    bufp->chgBit(oldp+164,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c))))));
    bufp->chgBit(oldp+165,((1U & (vlSelf->i_a >> 0xfU))));
    bufp->chgBit(oldp+166,((1U & (vlSelf->i_b >> 0xfU))));
    bufp->chgBit(oldp+167,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c))))));
    bufp->chgBit(oldp+168,((1U & (vlSelf->i_a >> 0x10U))));
    bufp->chgBit(oldp+169,((1U & (vlSelf->i_b >> 0x10U))));
    bufp->chgBit(oldp+170,((1U & ((vlSelf->i_a >> 0x10U) 
                                  ^ ((vlSelf->i_b >> 0x10U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c))))));
    bufp->chgBit(oldp+171,((1U & (vlSelf->i_a >> 0x11U))));
    bufp->chgBit(oldp+172,((1U & (vlSelf->i_b >> 0x11U))));
    bufp->chgBit(oldp+173,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c))))));
    bufp->chgBit(oldp+174,((1U & (vlSelf->i_a >> 0x12U))));
    bufp->chgBit(oldp+175,((1U & (vlSelf->i_b >> 0x12U))));
    bufp->chgBit(oldp+176,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c))))));
    bufp->chgBit(oldp+177,((1U & (vlSelf->i_a >> 0x13U))));
    bufp->chgBit(oldp+178,((1U & (vlSelf->i_b >> 0x13U))));
    bufp->chgBit(oldp+179,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c))))));
    bufp->chgBit(oldp+180,((1U & (vlSelf->i_a >> 2U))));
    bufp->chgBit(oldp+181,((1U & (vlSelf->i_b >> 2U))));
    bufp->chgBit(oldp+182,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c))))));
    bufp->chgBit(oldp+183,((1U & (vlSelf->i_a >> 0x14U))));
    bufp->chgBit(oldp+184,((1U & (vlSelf->i_b >> 0x14U))));
    bufp->chgBit(oldp+185,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c))))));
    bufp->chgBit(oldp+186,((1U & (vlSelf->i_a >> 0x15U))));
    bufp->chgBit(oldp+187,((1U & (vlSelf->i_b >> 0x15U))));
    bufp->chgBit(oldp+188,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c))))));
    bufp->chgBit(oldp+189,((1U & (vlSelf->i_a >> 0x16U))));
    bufp->chgBit(oldp+190,((1U & (vlSelf->i_b >> 0x16U))));
    bufp->chgBit(oldp+191,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c))))));
    bufp->chgBit(oldp+192,((1U & (vlSelf->i_a >> 0x17U))));
    bufp->chgBit(oldp+193,((1U & (vlSelf->i_b >> 0x17U))));
    bufp->chgBit(oldp+194,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c))))));
    bufp->chgBit(oldp+195,((1U & (vlSelf->i_a >> 0x18U))));
    bufp->chgBit(oldp+196,((1U & (vlSelf->i_b >> 0x18U))));
    bufp->chgBit(oldp+197,((1U & ((vlSelf->i_a >> 0x18U) 
                                  ^ ((vlSelf->i_b >> 0x18U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c))))));
    bufp->chgBit(oldp+198,((1U & (vlSelf->i_a >> 0x19U))));
    bufp->chgBit(oldp+199,((1U & (vlSelf->i_b >> 0x19U))));
    bufp->chgBit(oldp+200,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c))))));
    bufp->chgBit(oldp+201,((1U & (vlSelf->i_a >> 0x1aU))));
    bufp->chgBit(oldp+202,((1U & (vlSelf->i_b >> 0x1aU))));
    bufp->chgBit(oldp+203,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c))))));
    bufp->chgBit(oldp+204,((1U & (vlSelf->i_a >> 0x1bU))));
    bufp->chgBit(oldp+205,((1U & (vlSelf->i_b >> 0x1bU))));
    bufp->chgBit(oldp+206,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c))))));
    bufp->chgBit(oldp+207,((1U & (vlSelf->i_a >> 0x1cU))));
    bufp->chgBit(oldp+208,((1U & (vlSelf->i_b >> 0x1cU))));
    bufp->chgBit(oldp+209,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c))))));
    bufp->chgBit(oldp+210,((1U & (vlSelf->i_a >> 0x1dU))));
    bufp->chgBit(oldp+211,((1U & (vlSelf->i_b >> 0x1dU))));
    bufp->chgBit(oldp+212,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c))))));
    bufp->chgBit(oldp+213,((1U & (vlSelf->i_a >> 3U))));
    bufp->chgBit(oldp+214,((1U & (vlSelf->i_b >> 3U))));
    bufp->chgBit(oldp+215,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c))))));
    bufp->chgBit(oldp+216,((1U & (vlSelf->i_a >> 0x1eU))));
    bufp->chgBit(oldp+217,((1U & (vlSelf->i_b >> 0x1eU))));
    bufp->chgBit(oldp+218,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c))))));
    bufp->chgBit(oldp+219,((vlSelf->i_a >> 0x1fU)));
    bufp->chgBit(oldp+220,((vlSelf->i_b >> 0x1fU)));
    bufp->chgBit(oldp+221,((((vlSelf->i_a ^ vlSelf->i_b) 
                             >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))));
    bufp->chgBit(oldp+222,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))) 
                                  | ((vlSelf->i_b >> 0x1fU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c))))));
    bufp->chgBit(oldp+223,((1U & (vlSelf->i_a >> 4U))));
    bufp->chgBit(oldp+224,((1U & (vlSelf->i_b >> 4U))));
    bufp->chgBit(oldp+225,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c))))));
    bufp->chgBit(oldp+226,((1U & (vlSelf->i_a >> 5U))));
    bufp->chgBit(oldp+227,((1U & (vlSelf->i_b >> 5U))));
    bufp->chgBit(oldp+228,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c))))));
    bufp->chgBit(oldp+229,((1U & (vlSelf->i_a >> 6U))));
    bufp->chgBit(oldp+230,((1U & (vlSelf->i_b >> 6U))));
    bufp->chgBit(oldp+231,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c))))));
    bufp->chgBit(oldp+232,((1U & (vlSelf->i_a >> 7U))));
    bufp->chgBit(oldp+233,((1U & (vlSelf->i_b >> 7U))));
    bufp->chgBit(oldp+234,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c))))));
    bufp->chgBit(oldp+235,((1U & (vlSelf->i_a >> 8U))));
    bufp->chgBit(oldp+236,((1U & (vlSelf->i_b >> 8U))));
    bufp->chgBit(oldp+237,((1U & ((vlSelf->i_a >> 8U) 
                                  ^ ((vlSelf->i_b >> 8U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c))))));
    bufp->chgBit(oldp+238,((1U & (vlSelf->i_a >> 9U))));
    bufp->chgBit(oldp+239,((1U & (vlSelf->i_b >> 9U))));
    bufp->chgBit(oldp+240,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c))))));
    bufp->chgBit(oldp+241,(vlSelf->Block_adder_total__DOT__CSA__DOT__c16));
    bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c16)
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
    bufp->chgCData(oldp+243,(((0x80U & ((0xffffff80U 
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
                                                | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellout__FA0__o_s))))))))),8);
    bufp->chgCData(oldp+244,(((0x80U & ((0xffff80U 
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
                                                | (1U 
                                                   & ((vlSelf->i_a 
                                                       ^ vlSelf->i_b) 
                                                      >> 8U)))))))))),8);
    bufp->chgCData(oldp+245,(((0x80U & ((0xffff80U 
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
    bufp->chgBit(oldp+246,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 6U))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+247,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 6U))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+248,(((0x80U & ((0xff80U & 
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
                                                | (1U 
                                                   & ((vlSelf->i_a 
                                                       ^ vlSelf->i_b) 
                                                      >> 0x10U)))))))))),8);
    bufp->chgCData(oldp+249,(((0x80U & ((0xff80U & 
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
    bufp->chgBit(oldp+250,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgBit(oldp+251,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgCData(oldp+252,(((0x80U & ((0x80U & (vlSelf->i_a 
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
                                                | (1U 
                                                   & ((vlSelf->i_a 
                                                       ^ vlSelf->i_b) 
                                                      >> 0x18U)))))))))),8);
    bufp->chgCData(oldp+253,(((0x80U & ((0x80U & (vlSelf->i_a 
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
    bufp->chgBit(oldp+254,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1fU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgBit(oldp+255,((1U & (((vlSelf->i_a >> 0x1fU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1fU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1fU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 6U))))));
    bufp->chgCData(oldp+256,((0xffU & (vlSelf->i_a 
                                       >> 8U))),8);
    bufp->chgCData(oldp+257,((0xffU & (vlSelf->i_b 
                                       >> 8U))),8);
    bufp->chgBit(oldp+258,((1U & ((vlSelf->i_a ^ vlSelf->i_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+259,((1U & ((vlSelf->i_a & vlSelf->i_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+260,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->chgBit(oldp+261,((1U & (((vlSelf->i_a >> 9U) 
                                   & ((vlSelf->i_b 
                                       >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 9U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))))));
    bufp->chgBit(oldp+262,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+263,((1U & (((vlSelf->i_a >> 0xaU) 
                                   & ((vlSelf->i_b 
                                       >> 0xaU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 1U))) 
                                  | ((vlSelf->i_b >> 0xaU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+264,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+265,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 2U))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+266,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+267,((1U & (((vlSelf->i_a >> 0xcU) 
                                   & ((vlSelf->i_b 
                                       >> 0xcU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 3U))) 
                                  | ((vlSelf->i_b >> 0xcU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+268,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+269,((1U & (((vlSelf->i_a >> 0xdU) 
                                   & ((vlSelf->i_b 
                                       >> 0xdU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 4U))) 
                                  | ((vlSelf->i_b >> 0xdU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+270,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+271,((1U & (((vlSelf->i_a >> 0xeU) 
                                   & ((vlSelf->i_b 
                                       >> 0xeU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                   >> 5U))) 
                                  | ((vlSelf->i_b >> 0xeU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+272,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+273,((1U & ((~ (vlSelf->i_b >> 8U)) 
                                  ^ (vlSelf->i_a >> 8U)))));
    bufp->chgBit(oldp+274,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 8U))));
    bufp->chgBit(oldp+275,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->chgBit(oldp+276,((1U & (((vlSelf->i_a >> 9U) 
                                   & ((vlSelf->i_b 
                                       >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 9U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))))));
    bufp->chgBit(oldp+277,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+278,((1U & (((vlSelf->i_a >> 0xaU) 
                                   & ((vlSelf->i_b 
                                       >> 0xaU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 1U))) 
                                  | ((vlSelf->i_b >> 0xaU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+279,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+280,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 2U))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+281,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+282,((1U & (((vlSelf->i_a >> 0xcU) 
                                   & ((vlSelf->i_b 
                                       >> 0xcU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 3U))) 
                                  | ((vlSelf->i_b >> 0xcU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+283,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+284,((1U & (((vlSelf->i_a >> 0xdU) 
                                   & ((vlSelf->i_b 
                                       >> 0xdU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 4U))) 
                                  | ((vlSelf->i_b >> 0xdU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+285,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+286,((1U & (((vlSelf->i_a >> 0xeU) 
                                   & ((vlSelf->i_b 
                                       >> 0xeU) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                   >> 5U))) 
                                  | ((vlSelf->i_b >> 0xeU) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+287,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+288,((0xffU & (vlSelf->i_a 
                                       >> 0x10U))),8);
    bufp->chgCData(oldp+289,((0xffU & (vlSelf->i_b 
                                       >> 0x10U))),8);
    bufp->chgBit(oldp+290,((1U & ((vlSelf->i_a ^ vlSelf->i_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+291,((1U & ((vlSelf->i_a & vlSelf->i_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+292,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->chgBit(oldp+293,((1U & (((vlSelf->i_a >> 0x11U) 
                                   & ((vlSelf->i_b 
                                       >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x11U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))))));
    bufp->chgBit(oldp+294,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+295,((1U & (((vlSelf->i_a >> 0x12U) 
                                   & ((vlSelf->i_b 
                                       >> 0x12U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x12U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+296,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+297,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+298,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+299,((1U & (((vlSelf->i_a >> 0x14U) 
                                   & ((vlSelf->i_b 
                                       >> 0x14U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x14U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+300,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+301,((1U & (((vlSelf->i_a >> 0x15U) 
                                   & ((vlSelf->i_b 
                                       >> 0x15U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x15U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+302,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+303,((1U & (((vlSelf->i_a >> 0x16U) 
                                   & ((vlSelf->i_b 
                                       >> 0x16U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x16U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+304,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+305,((1U & ((~ (vlSelf->i_b >> 0x10U)) 
                                  ^ (vlSelf->i_a >> 0x10U)))));
    bufp->chgBit(oldp+306,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 0x10U))));
    bufp->chgBit(oldp+307,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->chgBit(oldp+308,((1U & (((vlSelf->i_a >> 0x11U) 
                                   & ((vlSelf->i_b 
                                       >> 0x11U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x11U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))))));
    bufp->chgBit(oldp+309,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+310,((1U & (((vlSelf->i_a >> 0x12U) 
                                   & ((vlSelf->i_b 
                                       >> 0x12U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x12U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+311,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+312,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+313,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+314,((1U & (((vlSelf->i_a >> 0x14U) 
                                   & ((vlSelf->i_b 
                                       >> 0x14U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x14U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+315,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+316,((1U & (((vlSelf->i_a >> 0x15U) 
                                   & ((vlSelf->i_b 
                                       >> 0x15U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x15U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+317,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+318,((1U & (((vlSelf->i_a >> 0x16U) 
                                   & ((vlSelf->i_b 
                                       >> 0x16U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x16U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+319,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+320,((vlSelf->i_a >> 0x18U)),8);
    bufp->chgCData(oldp+321,((vlSelf->i_b >> 0x18U)),8);
    bufp->chgBit(oldp+322,((1U & ((vlSelf->i_a ^ vlSelf->i_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+323,((1U & ((vlSelf->i_a & vlSelf->i_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+324,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->chgBit(oldp+325,((1U & (((vlSelf->i_a >> 0x19U) 
                                   & ((vlSelf->i_b 
                                       >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x19U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))))));
    bufp->chgBit(oldp+326,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+327,((1U & (((vlSelf->i_a >> 0x1aU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1aU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+328,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+329,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1bU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+330,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+331,((1U & (((vlSelf->i_a >> 0x1cU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1cU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1cU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+332,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+333,((1U & (((vlSelf->i_a >> 0x1dU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1dU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+334,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+335,((1U & (((vlSelf->i_a >> 0x1eU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1eU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1eU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+336,((1U & ((vlSelf->i_a >> 0x1fU) 
                                  ^ ((vlSelf->i_b >> 0x1fU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+337,((1U & ((~ (vlSelf->i_b >> 0x18U)) 
                                  ^ (vlSelf->i_a >> 0x18U)))));
    bufp->chgBit(oldp+338,((1U & ((vlSelf->i_a | vlSelf->i_b) 
                                  >> 0x18U))));
    bufp->chgBit(oldp+339,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->chgBit(oldp+340,((1U & (((vlSelf->i_a >> 0x19U) 
                                   & ((vlSelf->i_b 
                                       >> 0x19U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))) 
                                  | ((vlSelf->i_b >> 0x19U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))))));
    bufp->chgBit(oldp+341,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+342,((1U & (((vlSelf->i_a >> 0x1aU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1aU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 1U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 1U))))));
    bufp->chgBit(oldp+343,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+344,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 2U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1bU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 2U))))));
    bufp->chgBit(oldp+345,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+346,((1U & (((vlSelf->i_a >> 0x1cU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1cU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 3U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1cU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 3U))))));
    bufp->chgBit(oldp+347,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+348,((1U & (((vlSelf->i_a >> 0x1dU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1dU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 4U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 4U))))));
    bufp->chgBit(oldp+349,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+350,((1U & (((vlSelf->i_a >> 0x1eU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1eU) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                       >> 5U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x1eU) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      >> 5U))))));
    bufp->chgBit(oldp+351,((1U & ((vlSelf->i_a >> 0x1fU) 
                                  ^ ((vlSelf->i_b >> 0x1fU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+352,((0xffU & vlSelf->i_a)),8);
    bufp->chgCData(oldp+353,((0xffU & vlSelf->i_b)),8);
    bufp->chgBit(oldp+354,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->chgBit(oldp+355,((1U & (((vlSelf->i_a >> 1U) 
                                   & ((vlSelf->i_b 
                                       >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))) 
                                  | ((vlSelf->i_b >> 1U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))))));
    bufp->chgBit(oldp+356,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+357,((1U & (((vlSelf->i_a >> 2U) 
                                   & ((vlSelf->i_b 
                                       >> 2U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 1U))) 
                                  | ((vlSelf->i_b >> 2U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+358,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+359,((1U & (((vlSelf->i_a >> 3U) 
                                   & ((vlSelf->i_b 
                                       >> 3U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 2U))) 
                                  | ((vlSelf->i_b >> 3U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+360,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+361,((1U & (((vlSelf->i_a >> 4U) 
                                   & ((vlSelf->i_b 
                                       >> 4U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 3U))) 
                                  | ((vlSelf->i_b >> 4U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+362,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+363,((1U & (((vlSelf->i_a >> 5U) 
                                   & ((vlSelf->i_b 
                                       >> 5U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 4U))) 
                                  | ((vlSelf->i_b >> 5U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+364,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+365,((1U & (((vlSelf->i_a >> 6U) 
                                   & ((vlSelf->i_b 
                                       >> 6U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                 >> 5U))) 
                                  | ((vlSelf->i_b >> 6U) 
                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+366,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                        >> 6U))))));
    bufp->chgCData(oldp+367,((0xfU & vlSelf->i_a)),4);
    bufp->chgCData(oldp+368,((0xfU & vlSelf->i_b)),4);
    bufp->chgCData(oldp+369,(((8U & ((0xfffffff8U & vlSelf->i_a) 
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
    bufp->chgCData(oldp+370,(((8U & ((vlSelf->i_a & 
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
    bufp->chgCData(oldp+371,((0xfU & (vlSelf->i_a ^ vlSelf->i_b))),4);
    bufp->chgBit(oldp+372,((1U & (vlSelf->i_a ^ (vlSelf->i_b 
                                                 ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))))));
    bufp->chgBit(oldp+373,((1U & ((vlSelf->i_a >> 1U) 
                                  ^ ((vlSelf->i_b >> 1U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+374,((1U & ((vlSelf->i_a >> 2U) 
                                  ^ ((vlSelf->i_b >> 2U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+375,((1U & ((vlSelf->i_a >> 3U) 
                                  ^ ((vlSelf->i_b >> 3U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+376,((1U & (((vlSelf->i_a >> 3U) 
                                   & ((vlSelf->i_b 
                                       >> 3U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 3U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+377,((0xfU & (vlSelf->i_a >> 4U))),4);
    bufp->chgCData(oldp+378,((0xfU & (vlSelf->i_b >> 4U))),4);
    bufp->chgCData(oldp+379,(((8U & ((0xffffff8U & 
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
    bufp->chgCData(oldp+380,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+381,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 4U))),4);
    bufp->chgBit(oldp+382,((1U & ((vlSelf->i_a >> 4U) 
                                  ^ ((vlSelf->i_b >> 4U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 1U))))));
    bufp->chgBit(oldp+383,((1U & ((vlSelf->i_a >> 5U) 
                                  ^ ((vlSelf->i_b >> 5U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+384,((1U & ((vlSelf->i_a >> 6U) 
                                  ^ ((vlSelf->i_b >> 6U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+385,((1U & ((vlSelf->i_a >> 7U) 
                                  ^ ((vlSelf->i_b >> 7U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+386,((1U & (((vlSelf->i_a >> 7U) 
                                   & ((vlSelf->i_b 
                                       >> 7U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 7U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+387,((0xfU & (vlSelf->i_a >> 8U))),4);
    bufp->chgCData(oldp+388,((0xfU & (vlSelf->i_b >> 8U))),4);
    bufp->chgCData(oldp+389,(((8U & ((0xfffff8U & (vlSelf->i_a 
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
    bufp->chgCData(oldp+390,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+391,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 8U))),4);
    bufp->chgBit(oldp+392,((1U & ((vlSelf->i_a >> 8U) 
                                  ^ ((vlSelf->i_b >> 8U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 2U))))));
    bufp->chgBit(oldp+393,((1U & ((vlSelf->i_a >> 9U) 
                                  ^ ((vlSelf->i_b >> 9U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+394,((1U & ((vlSelf->i_a >> 0xaU) 
                                  ^ ((vlSelf->i_b >> 0xaU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+395,((1U & ((vlSelf->i_a >> 0xbU) 
                                  ^ ((vlSelf->i_b >> 0xbU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+396,((1U & (((vlSelf->i_a >> 0xbU) 
                                   & ((vlSelf->i_b 
                                       >> 0xbU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0xbU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+397,((0xfU & (vlSelf->i_a >> 0xcU))),4);
    bufp->chgCData(oldp+398,((0xfU & (vlSelf->i_b >> 0xcU))),4);
    bufp->chgCData(oldp+399,(((8U & ((0xffff8U & (vlSelf->i_a 
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
    bufp->chgCData(oldp+400,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+401,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+402,((1U & ((vlSelf->i_a >> 0xcU) 
                                  ^ ((vlSelf->i_b >> 0xcU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 3U))))));
    bufp->chgBit(oldp+403,((1U & ((vlSelf->i_a >> 0xdU) 
                                  ^ ((vlSelf->i_b >> 0xdU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+404,((1U & ((vlSelf->i_a >> 0xeU) 
                                  ^ ((vlSelf->i_b >> 0xeU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+405,((1U & ((vlSelf->i_a >> 0xfU) 
                                  ^ ((vlSelf->i_b >> 0xfU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+406,((1U & (((vlSelf->i_a >> 0xfU) 
                                   & ((vlSelf->i_b 
                                       >> 0xfU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0xfU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+407,((0xfU & (vlSelf->i_a >> 0x10U))),4);
    bufp->chgCData(oldp+408,((0xfU & (vlSelf->i_b >> 0x10U))),4);
    bufp->chgCData(oldp+409,(((8U & ((0xfff8U & (vlSelf->i_a 
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
    bufp->chgCData(oldp+410,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+411,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x10U))),4);
    bufp->chgBit(oldp+412,((1U & ((vlSelf->i_a >> 0x10U) 
                                  ^ ((vlSelf->i_b >> 0x10U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 4U))))));
    bufp->chgBit(oldp+413,((1U & ((vlSelf->i_a >> 0x11U) 
                                  ^ ((vlSelf->i_b >> 0x11U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+414,((1U & ((vlSelf->i_a >> 0x12U) 
                                  ^ ((vlSelf->i_b >> 0x12U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+415,((1U & ((vlSelf->i_a >> 0x13U) 
                                  ^ ((vlSelf->i_b >> 0x13U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+416,((1U & (((vlSelf->i_a >> 0x13U) 
                                   & ((vlSelf->i_b 
                                       >> 0x13U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x13U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+417,((0xfU & (vlSelf->i_a >> 0x14U))),4);
    bufp->chgCData(oldp+418,((0xfU & (vlSelf->i_b >> 0x14U))),4);
    bufp->chgCData(oldp+419,(((8U & ((0xff8U & (vlSelf->i_a 
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
    bufp->chgCData(oldp+420,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+421,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x14U))),4);
    bufp->chgBit(oldp+422,((1U & ((vlSelf->i_a >> 0x14U) 
                                  ^ ((vlSelf->i_b >> 0x14U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 5U))))));
    bufp->chgBit(oldp+423,((1U & ((vlSelf->i_a >> 0x15U) 
                                  ^ ((vlSelf->i_b >> 0x15U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+424,((1U & ((vlSelf->i_a >> 0x16U) 
                                  ^ ((vlSelf->i_b >> 0x16U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+425,((1U & ((vlSelf->i_a >> 0x17U) 
                                  ^ ((vlSelf->i_b >> 0x17U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+426,((1U & (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x17U) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+427,((0xfU & (vlSelf->i_a >> 0x18U))),4);
    bufp->chgCData(oldp+428,((0xfU & (vlSelf->i_b >> 0x18U))),4);
    bufp->chgCData(oldp+429,(((8U & ((0xf8U & (vlSelf->i_a 
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
    bufp->chgCData(oldp+430,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+431,((0xfU & ((vlSelf->i_a 
                                       ^ vlSelf->i_b) 
                                      >> 0x18U))),4);
    bufp->chgBit(oldp+432,((1U & ((vlSelf->i_a >> 0x18U) 
                                  ^ ((vlSelf->i_b >> 0x18U) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 6U))))));
    bufp->chgBit(oldp+433,((1U & ((vlSelf->i_a >> 0x19U) 
                                  ^ ((vlSelf->i_b >> 0x19U) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))))));
    bufp->chgBit(oldp+434,((1U & ((vlSelf->i_a >> 0x1aU) 
                                  ^ ((vlSelf->i_b >> 0x1aU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c))))));
    bufp->chgBit(oldp+435,((1U & ((vlSelf->i_a >> 0x1bU) 
                                  ^ ((vlSelf->i_b >> 0x1bU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgBit(oldp+436,((1U & (((vlSelf->i_a >> 0x1bU) 
                                   & ((vlSelf->i_b 
                                       >> 0x1bU) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                  | ((vlSelf->i_b >> 0x1bU) 
                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))))));
    bufp->chgCData(oldp+437,((vlSelf->i_a >> 0x1cU)),4);
    bufp->chgCData(oldp+438,((vlSelf->i_b >> 0x1cU)),4);
    bufp->chgCData(oldp+439,((((8U & ((vlSelf->i_a 
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
    bufp->chgCData(oldp+440,(((8U & (((vlSelf->i_a 
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
    bufp->chgCData(oldp+441,(((vlSelf->i_a ^ vlSelf->i_b) 
                              >> 0x1cU)),4);
    bufp->chgBit(oldp+442,((1U & ((vlSelf->i_a >> 0x1cU) 
                                  ^ ((vlSelf->i_b >> 0x1cU) 
                                     ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                        >> 7U))))));
    bufp->chgBit(oldp+443,((1U & ((vlSelf->i_a >> 0x1dU) 
                                  ^ ((vlSelf->i_b >> 0x1dU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))))));
    bufp->chgBit(oldp+444,((1U & ((vlSelf->i_a >> 0x1eU) 
                                  ^ ((vlSelf->i_b >> 0x1eU) 
                                     ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c))))));
    bufp->chgBit(oldp+445,((((vlSelf->i_a ^ vlSelf->i_b) 
                             >> 0x1fU) ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c))));
    bufp->chgBit(oldp+446,((1U & (((vlSelf->i_a >> 0x1fU) 
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
}
