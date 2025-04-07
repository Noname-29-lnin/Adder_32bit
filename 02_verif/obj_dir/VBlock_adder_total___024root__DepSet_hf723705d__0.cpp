// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlock_adder_total.h for the primary calling header

#include "VBlock_adder_total__pch.h"
#include "VBlock_adder_total___024root.h"

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__0(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0x16U) & ((vlSelf->i_b 
                                             >> 0x16U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                               >> 5U))) 
                 | ((vlSelf->i_b >> 0x16U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 5U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0x15U) & ((vlSelf->i_b 
                                             >> 0x15U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                               >> 4U))) 
                 | ((vlSelf->i_b >> 0x15U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 4U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0x14U) & ((vlSelf->i_b 
                                             >> 0x14U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                               >> 3U))) 
                 | ((vlSelf->i_b >> 0x14U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 3U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0x13U) & ((vlSelf->i_b 
                                             >> 0x13U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                               >> 2U))) 
                 | ((vlSelf->i_b >> 0x13U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 2U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x12U) & ((vlSelf->i_b 
                                             >> 0x12U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                               >> 1U))) 
                 | ((vlSelf->i_b >> 0x12U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                              >> 1U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x11U) & ((vlSelf->i_b 
                                             >> 0x11U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))) 
                 | ((vlSelf->i_b >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__1(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__1\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0x1eU) & ((vlSelf->i_b 
                                             >> 0x1eU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                               >> 5U))) 
                 | ((vlSelf->i_b >> 0x1eU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              >> 5U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0x1dU) & ((vlSelf->i_b 
                                             >> 0x1dU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                               >> 4U))) 
                 | ((vlSelf->i_b >> 0x1dU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              >> 4U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0x1cU) & ((vlSelf->i_b 
                                             >> 0x1cU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                               >> 3U))) 
                 | ((vlSelf->i_b >> 0x1cU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              >> 3U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0x1bU) & ((vlSelf->i_b 
                                             >> 0x1bU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                               >> 2U))) 
                 | ((vlSelf->i_b >> 0x1bU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              >> 2U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x1aU) & ((vlSelf->i_b 
                                             >> 0x1aU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                               >> 1U))) 
                 | ((vlSelf->i_b >> 0x1aU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              >> 1U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x19U) & ((vlSelf->i_b 
                                             >> 0x19U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))) 
                 | ((vlSelf->i_b >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__2(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__2\n"); );
    // Init
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA1__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA1__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA2__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA2__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA3__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA3__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA4__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA4__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA5__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA5__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA6__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA6__o_c = 0;
    // Body
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0x16U) & ((vlSelf->i_b 
                                             >> 0x16U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                               >> 5U))) 
                 | ((vlSelf->i_b >> 0x16U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 5U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0x15U) & ((vlSelf->i_b 
                                             >> 0x15U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                               >> 4U))) 
                 | ((vlSelf->i_b >> 0x15U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 4U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0x14U) & ((vlSelf->i_b 
                                             >> 0x14U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                               >> 3U))) 
                 | ((vlSelf->i_b >> 0x14U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 3U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0x13U) & ((vlSelf->i_b 
                                             >> 0x13U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                               >> 2U))) 
                 | ((vlSelf->i_b >> 0x13U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 2U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x12U) & ((vlSelf->i_b 
                                             >> 0x12U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                               >> 1U))) 
                 | ((vlSelf->i_b >> 0x12U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                              >> 1U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x11U) & ((vlSelf->i_b 
                                             >> 0x11U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))) 
                 | ((vlSelf->i_b >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry)) 
           | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((vlSelf->i_a 
                                                            | vlSelf->i_b) 
                                                           >> 0x10U)))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__3(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__3\n"); );
    // Init
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA1__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA1__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA2__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA2__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA3__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA3__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA4__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA4__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA5__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA5__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA6__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA6__o_c = 0;
    // Body
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0x1eU) & ((vlSelf->i_b 
                                             >> 0x1eU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                               >> 5U))) 
                 | ((vlSelf->i_b >> 0x1eU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              >> 5U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0x1dU) & ((vlSelf->i_b 
                                             >> 0x1dU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                               >> 4U))) 
                 | ((vlSelf->i_b >> 0x1dU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              >> 4U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0x1cU) & ((vlSelf->i_b 
                                             >> 0x1cU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                               >> 3U))) 
                 | ((vlSelf->i_b >> 0x1cU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              >> 3U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0x1bU) & ((vlSelf->i_b 
                                             >> 0x1bU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                               >> 2U))) 
                 | ((vlSelf->i_b >> 0x1bU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              >> 2U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x1aU) & ((vlSelf->i_b 
                                             >> 0x1aU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                               >> 1U))) 
                 | ((vlSelf->i_b >> 0x1aU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              >> 1U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x19U) & ((vlSelf->i_b 
                                             >> 0x19U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))) 
                 | ((vlSelf->i_b >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry)) 
           | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((vlSelf->i_a 
                                                            | vlSelf->i_b) 
                                                           >> 0x18U)))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__4(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__4\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0xeU) & ((vlSelf->i_b 
                                            >> 0xeU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                              >> 5U))) 
                 | ((vlSelf->i_b >> 0xeU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                             >> 5U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0xdU) & ((vlSelf->i_b 
                                            >> 0xdU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                              >> 4U))) 
                 | ((vlSelf->i_b >> 0xdU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                             >> 4U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0xcU) & ((vlSelf->i_b 
                                            >> 0xcU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                              >> 3U))) 
                 | ((vlSelf->i_b >> 0xcU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                             >> 3U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0xbU) & ((vlSelf->i_b 
                                            >> 0xbU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                              >> 2U))) 
                 | ((vlSelf->i_b >> 0xbU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                             >> 2U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0xaU) & ((vlSelf->i_b 
                                            >> 0xaU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                              >> 1U))) 
                 | ((vlSelf->i_b >> 0xaU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                             >> 1U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 9U) & ((vlSelf->i_b 
                                          >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))) 
                 | ((vlSelf->i_b >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__5(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__5\n"); );
    // Init
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA1__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA1__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA2__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA2__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA3__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA3__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA4__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA4__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA5__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA5__o_c = 0;
    CData/*0:0*/ Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA6__o_c;
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA6__o_c = 0;
    // Body
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 0xeU) & ((vlSelf->i_b 
                                            >> 0xeU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                              >> 5U))) 
                 | ((vlSelf->i_b >> 0xeU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                             >> 5U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 0xdU) & ((vlSelf->i_b 
                                            >> 0xdU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                              >> 4U))) 
                 | ((vlSelf->i_b >> 0xdU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                             >> 4U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 0xcU) & ((vlSelf->i_b 
                                            >> 0xcU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                              >> 3U))) 
                 | ((vlSelf->i_b >> 0xcU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                             >> 3U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 0xbU) & ((vlSelf->i_b 
                                            >> 0xbU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                              >> 2U))) 
                 | ((vlSelf->i_b >> 0xbU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                             >> 2U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0xaU) & ((vlSelf->i_b 
                                            >> 0xaU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                              >> 1U))) 
                 | ((vlSelf->i_b >> 0xaU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                             >> 1U))));
    Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 9U) & ((vlSelf->i_b 
                                          >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))) 
                 | ((vlSelf->i_b >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry)) 
           | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((vlSelf->i_a 
                                                            | vlSelf->i_b) 
                                                           >> 8U)))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__6(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__6\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA6__o_c 
        = (1U & (((vlSelf->i_a >> 6U) & ((vlSelf->i_b 
                                          >> 6U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                          >> 5U))) 
                 | ((vlSelf->i_b >> 6U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                           >> 5U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA5__o_c 
        = (1U & (((vlSelf->i_a >> 5U) & ((vlSelf->i_b 
                                          >> 5U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                          >> 4U))) 
                 | ((vlSelf->i_b >> 5U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                           >> 4U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA4__o_c 
        = (1U & (((vlSelf->i_a >> 4U) & ((vlSelf->i_b 
                                          >> 4U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                          >> 3U))) 
                 | ((vlSelf->i_b >> 4U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                           >> 3U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA3__o_c 
        = (1U & (((vlSelf->i_a >> 3U) & ((vlSelf->i_b 
                                          >> 3U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                          >> 2U))) 
                 | ((vlSelf->i_b >> 3U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                           >> 2U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 2U) & ((vlSelf->i_b 
                                          >> 2U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                          >> 1U))) 
                 | ((vlSelf->i_b >> 2U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                           >> 1U))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 1U) & ((vlSelf->i_b 
                                          >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))) 
                 | ((vlSelf->i_b >> 1U) & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_sequent__TOP__0(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_g 
        = ((vlSelf->i_a & vlSelf->i_b) >> 0x1fU);
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x1eU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x1dU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x1cU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x1bU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x1aU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x19U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x17U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x16U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x15U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x14U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x13U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x12U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x11U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xfU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xeU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xdU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xcU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xbU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0xaU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 9U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 7U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 6U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 5U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 4U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 3U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 2U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 1U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x18U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 0x10U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p 
        = ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1fU);
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1eU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1dU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1cU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1bU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x1aU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x19U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x17U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x16U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x15U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x14U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x13U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x12U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x11U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xfU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xeU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xdU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xcU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xbU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0xaU));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 9U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 7U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 6U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 5U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 4U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 3U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 2U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 1U));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P 
        = (((IData)((0xfU == ((vlSelf->i_a ^ vlSelf->i_b) 
                              >> 0x1cU))) << 7U) | 
           (((IData)((0xfU == (0xfU & ((vlSelf->i_a 
                                        ^ vlSelf->i_b) 
                                       >> 0x18U)))) 
             << 6U) | (((IData)((0xfU == (0xfU & ((vlSelf->i_a 
                                                   ^ vlSelf->i_b) 
                                                  >> 0x14U)))) 
                        << 5U) | (((IData)((0xfU == 
                                            (0xfU & 
                                             ((vlSelf->i_a 
                                               ^ vlSelf->i_b) 
                                              >> 0x10U)))) 
                                   << 4U) | (((IData)(
                                                      (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & ((vlSelf->i_a 
                                                            ^ vlSelf->i_b) 
                                                           >> 0xcU)))) 
                                              << 3U) 
                                             | (((IData)(
                                                         (0xfU 
                                                          == 
                                                          (0xfU 
                                                           & ((vlSelf->i_a 
                                                               ^ vlSelf->i_b) 
                                                              >> 8U)))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & ((vlSelf->i_a 
                                                                  ^ vlSelf->i_b) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->i_a 
                                                          ^ vlSelf->i_b))))))))));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g 
        = (1U & ((vlSelf->i_a & vlSelf->i_b) >> 8U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x18U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 0x10U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p 
        = (1U & ((vlSelf->i_a ^ vlSelf->i_b) >> 8U));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s 
        = (1U & (vlSelf->i_a ^ vlSelf->i_b));
    vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g 
        = (1U & (vlSelf->i_a & vlSelf->i_b));
    vlSelf->Block_adder_total__DOT__KSA__DOT__G = (vlSelf->i_a 
                                                   & vlSelf->i_b);
    vlSelf->Block_adder_total__DOT__KSA__DOT__P = (vlSelf->i_a 
                                                   ^ vlSelf->i_b);
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[0U] 
        = (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p) 
            << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p) 
                          << 0x1eU) | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s))))))))))))))))))))))))))))))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__p = (
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p) 
                                                       << 0x1eU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p) 
                                                          << 0x1dU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p) 
                                                             << 0x1cU) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s))))))))))))))))))))))))))))))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[0U] 
        = (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_g) 
            << 0x1fU) | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_g) 
                          << 0x1eU) | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_g) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_g) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_g) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_g) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_g) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_g) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_g) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_g) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_g) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_g) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_g) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_g) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_g) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_g) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_g) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_g) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_g) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_g) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_g) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_g) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_g) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_g) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_g) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_g) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_g) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_g) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))))))))))))))))))))))))))))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__g = (
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_g) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_g) 
                                                       << 0x1eU) 
                                                      | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_g) 
                                                          << 0x1dU) 
                                                         | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_g) 
                                                             << 0x1cU) 
                                                            | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_g) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_g) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_g) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_g) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_g) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_g) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_g) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_g) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_g) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_g) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_g) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_g) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_g) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_g) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_g) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_g) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_g) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_g) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_g) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_g) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_g) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_g) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_g) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_g) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))))))))))))))))))))))))))))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c 
        = (1U & (((vlSelf->i_a >> 1U) & ((vlSelf->i_b 
                                          >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))) 
                 | ((vlSelf->i_b >> 1U) & (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb5b58e20__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1fU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1fU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x1eU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdea43a30__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1eU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1eU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x1dU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdeac9ff2__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1dU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1dU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x1cU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbabea72a__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1cU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1cU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x1bU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0 
        = (IData)((3U == (3U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha353cb0a__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1bU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1bU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x1aU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeca450a__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x1aU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x1aU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x19U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6cb6bc5__0 
        = (IData)((0x60000000U == (0x60000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_heec65c01__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x19U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x19U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x18U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha0169a1c__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x18U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x18U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x17U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha688435a__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x17U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x17U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x16U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbb06fc1e__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x16U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x16U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x15U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf51c551__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x15U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x15U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x14U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hded921cd__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x14U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x14U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x13U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6bc7a70__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x13U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x13U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x12U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h529db6ec__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x12U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x12U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x11U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b33f6f__0 
        = (IData)((0x30000000U == (0x30000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcc8ca85b__0 
        = (IData)((0x18000000U == (0x18000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeb089b2__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x11U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x11U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0x10U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he09955a2__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0x10U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                                >> 0x10U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                             >> 0xfU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf16da826__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xfU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xfU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 0xeU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf18013f6__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xeU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xeU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 0xdU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc799c0cd__0 
        = (IData)((0xc000000U == (0xc000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcba26e24__0 
        = (IData)((0x6000000U == (0x6000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b2b3d9__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xdU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xdU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 0xcU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd2cf6755__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xcU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xcU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 0xbU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5984059c__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xbU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xbU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 0xaU))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59971b44__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 0xaU) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                               >> 0xaU) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                           >> 9U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he28b5042__0 
        = (IData)((0x3000000U == (0x3000000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h377570d3__0 
        = (IData)((0x1800000U == (0x1800000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hefd74ab2__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 9U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 9U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 8U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he936b888__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 8U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 8U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 7U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6ce19c7__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 7U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 7U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 6U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9538ed4__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 6U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 6U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 5U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha68544d0__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 5U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 5U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 4U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha9d0c4eb__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 4U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 4U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 3U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d399fb5__0 
        = (IData)((0xc00000U == (0xc00000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcca504e2__0 
        = (IData)((0x600000U == (0x600000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb7f74b1a__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 3U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 3U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 2U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf5a1edd5__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 2U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 2U) & (vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                                       >> 1U))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0 
        = (1U & ((vlSelf->Block_adder_total__DOT__KSA__DOT__G 
                  >> 1U) | ((vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                             >> 1U) & vlSelf->Block_adder_total__DOT__KSA__DOT__G)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b66a1a__0 
        = (IData)((0x300000U == (0x300000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6e73a66__0 
        = (IData)((0x180000U == (0x180000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h35ca30f2__0 
        = (IData)((0xcU == (0xcU & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfeeeef25__0 
        = (IData)((6U == (6U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0da3cdc__0 
        = (IData)((0xc0000U == (0xc0000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f018e7b__0 
        = (IData)((0x60000U == (0x60000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3bbf92f7__0 
        = (IData)((0x30000U == (0x30000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5d8df45__0 
        = (IData)((0x18000U == (0x18000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfea5fe27__0 
        = (IData)((0xc000U == (0xc000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hff4eed4a__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361ebc08__0 
        = (IData)((0x30U == (0x30U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h36e3ff88__0 
        = (IData)((0x18U == (0x18U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe728400__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd72705e__0 
        = (IData)((0x1800U == (0x1800U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h386a6bbd__0 
        = (IData)((0xc0U == (0xc0U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h38eef1ba__0 
        = (IData)((0x60U == (0x60U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h12a6ed9e__0 
        = (IData)((0xc00U == (0xc00U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h131d3ba3__0 
        = (IData)((0x600U == (0x600U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he252bae5__0 
        = (IData)((0x300U == (0x300U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he14356fb__0 
        = (IData)((0x180U == (0x180U & vlSelf->Block_adder_total__DOT__KSA__DOT__P)));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c 
        = (1U & (((vlSelf->i_a >> 2U) & ((vlSelf->i_b 
                                          >> 2U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c))) 
                 | ((vlSelf->i_b >> 2U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha616c649__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0) 
            << 1U) | (1U & vlSelf->Block_adder_total__DOT__KSA__DOT__P));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4669030b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb5b58e20__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdeac9ff2__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5ef05ee0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdea43a30__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6cb6bc5__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbabea72a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc4020dbf__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdeac9ff2__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b33f6f__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha353cb0a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf372fb54__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b33f6f__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h031237c0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbabea72a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcc8ca85b__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeca450a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h43852427__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6cb6bc5__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcc8ca85b__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3aedc873__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha353cb0a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc799c0cd__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_heec65c01__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfff31c34__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b33f6f__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc799c0cd__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c421a5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeca450a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcba26e24__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha0169a1c__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9e535c94__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcc8ca85b__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcba26e24__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb57e79d6__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_heec65c01__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he28b5042__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha688435a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9994404__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc799c0cd__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he28b5042__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h571a90b7__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha0169a1c__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h377570d3__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbb06fc1e__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc7d602b6__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcba26e24__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h377570d3__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h77d4a7e9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha688435a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d399fb5__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf51c551__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc5aadebe__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he28b5042__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d399fb5__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h542bef1b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbb06fc1e__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcca504e2__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hded921cd__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2ac739f0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h377570d3__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcca504e2__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h70fb64d3__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0) 
            << 1U) | (1U & vlSelf->Block_adder_total__DOT__KSA__DOT__G));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34b4b29e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf51c551__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b66a1a__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6bc7a70__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9f373942__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d399fb5__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b66a1a__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6bdf61b4__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hded921cd__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6e73a66__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h529db6ec__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4cb699b1__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcca504e2__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6e73a66__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc3442b04__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h35ca30f2__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb7f74b1a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h35ca30f2__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8135cde__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfeeeef25__0) 
           & vlSelf->Block_adder_total__DOT__KSA__DOT__P);
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf5a1edd5__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfeeeef25__0) 
              & vlSelf->Block_adder_total__DOT__KSA__DOT__G));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58881925__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6bc7a70__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0da3cdc__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeb089b2__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8cec54d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b66a1a__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0da3cdc__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ffabe31__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h529db6ec__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f018e7b__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he09955a2__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f378dc9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf6e73a66__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f018e7b__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h270399d9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbeb089b2__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3bbf92f7__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf16da826__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b232004__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0da3cdc__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3bbf92f7__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h89973fd2__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he09955a2__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5d8df45__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf18013f6__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3426f76d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f018e7b__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5d8df45__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdabf56f9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf16da826__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfea5fe27__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b2b3d9__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b6250a0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3bbf92f7__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfea5fe27__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h51661bdb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf18013f6__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hff4eed4a__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd2cf6755__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcf063a16__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5d8df45__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hff4eed4a__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475abd8e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha68544d0__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361ebc08__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb7f74b1a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd311044__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361ebc08__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h35ca30f2__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7ceaf14f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha9d0c4eb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h36e3ff88__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf5a1edd5__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e4f2179__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h36e3ff88__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfeeeef25__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0e7538eb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf1b2b3d9__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe728400__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5984059c__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hec46bc1d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfea5fe27__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe728400__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hed303474__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd2cf6755__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd72705e__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59971b44__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h45e0afcb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hff4eed4a__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd72705e__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7dc1c4cb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6ce19c7__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h386a6bbd__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha68544d0__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h07ddeeba__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h386a6bbd__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361ebc08__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4db0cbbb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9538ed4__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h38eef1ba__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha9d0c4eb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b88d2f9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h38eef1ba__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h36e3ff88__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc6e098df__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5984059c__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h12a6ed9e__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hefd74ab2__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he10e6912__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe728400__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h12a6ed9e__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361c6d67__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59971b44__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h131d3ba3__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he936b888__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha3954fdf__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd72705e__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h131d3ba3__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe22944d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hefd74ab2__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he252bae5__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb6ce19c7__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5f433d21__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h12a6ed9e__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he252bae5__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfa392fad__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he252bae5__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h386a6bbd__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h41d8fee4__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he936b888__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he14356fb__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9538ed4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3b9a663d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h131d3ba3__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he14356fb__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha6c8ee3a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he14356fb__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h38eef1ba__0));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c 
        = (1U & (((vlSelf->i_a >> 3U) & ((vlSelf->i_b 
                                          >> 3U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c))) 
                 | ((vlSelf->i_b >> 3U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3c8ad5df__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4669030b__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3aedc873__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d38d598__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5ef05ee0__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h43852427__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c421a5__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ee99306__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc4020dbf__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfff31c34__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb57e79d6__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h537867a6__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9994404__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0115502c__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h031237c0__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9e535c94__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h571a90b7__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h32b7cfd3__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h43852427__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc7d602b6__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcdf34a70__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3aedc873__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9994404__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h77d4a7e9__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96898b0f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfff31c34__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc5aadebe__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h716a8ccb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c421a5__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc7d602b6__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h542bef1b__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he96df775__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9e535c94__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2ac739f0__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha4d0e8d3__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb57e79d6__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc5aadebe__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34b4b29e__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf4c727ff__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb9994404__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9f373942__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h26aa0ccd__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h571a90b7__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2ac739f0__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6bdf61b4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf641505b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc7d602b6__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4cb699b1__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d2846ec__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc3442b04__0) 
            << 3U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8135cde__0) 
                       << 2U) | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha616c649__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c69239c__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0) 
            << 3U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0) 
                       << 2U) | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h70fb64d3__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h111e81cd__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h77d4a7e9__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9f373942__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58881925__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d8785f1__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc5aadebe__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8cec54d__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h345a2e7c__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h542bef1b__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4cb699b1__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ffabe31__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h76396dd3__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2ac739f0__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f378dc9__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h973e7a0a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34b4b29e__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8cec54d__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h270399d9__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd99fc2f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9f373942__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b232004__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d3a81a4__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6bdf61b4__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f378dc9__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h89973fd2__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h256feb86__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4cb699b1__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3426f76d__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0fffa626__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58881925__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b232004__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdabf56f9__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5006b846__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8cec54d__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b6250a0__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8985e572__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ffabe31__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3426f76d__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h51661bdb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe6b2bf9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0f378dc9__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcf063a16__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d016e2a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd311044__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e76d6b8__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475abd8e__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd311044__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ce873d1__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e4f2179__0) 
           & vlSelf->Block_adder_total__DOT__KSA__DOT__P);
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8f00ef4__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7ceaf14f__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e4f2179__0) 
              & vlSelf->Block_adder_total__DOT__KSA__DOT__G));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd29215d0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h270399d9__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b6250a0__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0e7538eb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0eae794__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b232004__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hec46bc1d__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h16b76ce4__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h89973fd2__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcf063a16__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hed303474__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4097b7b5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3426f76d__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h45e0afcb__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9ed2bb3d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h07ddeeba__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc3442b04__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dc3ac78__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7dc1c4cb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h07ddeeba__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d6361d5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b88d2f9__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8135cde__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49aee321__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4db0cbbb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b88d2f9__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59e0ec80__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdabf56f9__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hec46bc1d__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc6e098df__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3606f45e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b6250a0__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he10e6912__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58321c15__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h51661bdb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h45e0afcb__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361c6d67__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4d2de941__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcf063a16__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha3954fdf__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2e37be68__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0e7538eb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he10e6912__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe22944d__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcb9df61b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc6e098df__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5f433d21__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7dc1c4cb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h358e1b4b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hec46bc1d__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5f433d21__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf852b517__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5f433d21__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h07ddeeba__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h088deb9c__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe22944d__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfa392fad__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475abd8e__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb8c87dca__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he10e6912__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfa392fad__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h026cf16a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfa392fad__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfd311044__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h892d09ae__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hed303474__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha3954fdf__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h41d8fee4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b283d2a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h361c6d67__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3b9a663d__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4db0cbbb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5086fc9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h45e0afcb__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3b9a663d__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49cd688b__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3b9a663d__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2b88d2f9__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9d3f4eeb__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h41d8fee4__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha6c8ee3a__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7ceaf14f__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5fb0cac5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha3954fdf__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha6c8ee3a__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h00e60d48__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha6c8ee3a__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e4f2179__0));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c 
        = (1U & (((vlSelf->i_a >> 4U) & ((vlSelf->i_b 
                                          >> 4U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c))) 
                 | ((vlSelf->i_b >> 4U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3c8ad5df__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h111e81cd__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h34143b46__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d38d598__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h32b7cfd3__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h345a2e7c__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac4cd6ae__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ee99306__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96898b0f__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h973e7a0a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c5b1bc9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1a16fce0__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd99fc2f__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf45cb34f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0115502c__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he96df775__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d3a81a4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h54c3669c__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h32b7cfd3__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h256feb86__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h62eef385__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcdf34a70__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf4c727ff__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0fffa626__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1e093ef5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96898b0f__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5006b846__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he25df9c0__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h716a8ccb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf641505b__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8985e572__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hae627dd5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he96df775__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe6b2bf9__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd9995e3d__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha4d0e8d3__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d8785f1__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd29215d0__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hac919d47__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf4c727ff__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0eae794__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d9e18ca__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h26aa0ccd__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h76396dd3__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h16b76ce4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdda4b4e5__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf641505b__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4097b7b5__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h349ebd05__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9ed2bb3d__0) 
            << 7U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d6361d5__0) 
                       << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d016e2a__0) 
                                  << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ce873d1__0) 
                                             << 4U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1d2846ec__0)))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_haf8cc564__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dc3ac78__0) 
            << 7U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49aee321__0) 
                       << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e76d6b8__0) 
                                  << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8f00ef4__0) 
                                             << 4U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6c69239c__0)))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46650077__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h111e81cd__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd99fc2f__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59e0ec80__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd4da507__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3d8785f1__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3606f45e__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2c147164__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h345a2e7c__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h256feb86__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58321c15__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h475b5e57__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h76396dd3__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4d2de941__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7da363f6__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h973e7a0a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5006b846__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2e37be68__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd639f895__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0fffa626__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0eae794__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcb9df61b__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h78fd1ea9__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h358e1b4b__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9ed2bb3d__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4b0d9c42__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcd99fc2f__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h358e1b4b__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73bc7e8a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h59e0ec80__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h358e1b4b__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dc3ac78__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf866125__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf852b517__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc3442b04__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb3d6b21e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf0eae794__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf852b517__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf10a4e06__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hcb9df61b__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf852b517__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h19289043__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h47ccf2e8__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hd29215d0__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3606f45e__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h088deb9c__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h71d5b11f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb8c87dca__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d016e2a__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h7087b9ae__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5006b846__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb8c87dca__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73ba5b6f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2e37be68__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hb8c87dca__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6e76d6b8__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96ace1fa__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h026cf16a__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5b1e7ec7__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbbb27814__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h3606f45e__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h026cf16a__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hda00ae4a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h088deb9c__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h026cf16a__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6244a9ec__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0c8bee28__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h2d3a81a4__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe6b2bf9__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h892d09ae__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b68da7e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8985e572__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4097b7b5__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b283d2a__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha76b18b8__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5086fc9__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0d6361d5__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h8063b25f__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h256feb86__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5086fc9__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46c9cd1e__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h58321c15__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he5086fc9__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49aee321__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h91dd81ba__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49cd688b__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8135cde__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h681ff933__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4097b7b5__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49cd688b__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbc8f09e2__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6b283d2a__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h49cd688b__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hc10a4c84__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1ed7b901__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h16b76ce4__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4d2de941__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9d3f4eeb__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h476df2f1__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5fb0cac5__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h6ce873d1__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9da1f1fc__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hfe6b2bf9__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5fb0cac5__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h64526989__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h892d09ae__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h5fb0cac5__0) 
              & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_he8f00ef4__0)));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h74b5da3c__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h00e60d48__0) 
           & vlSelf->Block_adder_total__DOT__KSA__DOT__P);
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0035f299__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4d2de941__0) 
           & (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h00e60d48__0));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dd7a24a__0 
        = ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h9d3f4eeb__0) 
           | ((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h00e60d48__0) 
              & vlSelf->Block_adder_total__DOT__KSA__DOT__G));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c 
        = (1U & (((vlSelf->i_a >> 5U) & ((vlSelf->i_b 
                                          >> 5U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c))) 
                 | ((vlSelf->i_b >> 5U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h1f0b425b__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h78fd1ea9__0) 
            << 0xfU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_ha76b18b8__0) 
                         << 0xeU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h71d5b11f__0) 
                                      << 0xdU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h476df2f1__0) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hdf866125__0) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h91dd81ba__0) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h96ace1fa__0) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h74b5da3c__0) 
                                                               << 8U) 
                                                              | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h349ebd05__0)))))))));
    vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0 
        = (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73bc7e8a__0) 
            << 0xfU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h46c9cd1e__0) 
                         << 0xeU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h73ba5b6f__0) 
                                      << 0xdU) | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h64526989__0) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hf10a4e06__0) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hbc8f09e2__0) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_hda00ae4a__0) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h4dd7a24a__0) 
                                                               << 8U) 
                                                              | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_haf8cc564__0)))))))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c 
        = (1U & (((vlSelf->i_a >> 6U) & ((vlSelf->i_b 
                                          >> 6U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c))) 
                 | ((vlSelf->i_b >> 6U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c))));
    vlSelf->o_KSA = (vlSelf->Block_adder_total__DOT__KSA__DOT__P 
                     ^ VL_SHIFTL_III(32,32,32, ((((IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h97a38d12__0) 
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
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__KSA__DOT____VdfgTmp_h0a69d39a__0))))))))))))))))), 1U));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c 
        = (1U & (((vlSelf->i_a >> 7U) & ((vlSelf->i_b 
                                          >> 7U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c))) 
                 | ((vlSelf->i_b >> 7U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c 
        = (1U & (((vlSelf->i_a >> 8U) & ((vlSelf->i_b 
                                          >> 8U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c))) 
                 | ((vlSelf->i_b >> 8U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c 
        = (1U & (((vlSelf->i_a >> 9U) & ((vlSelf->i_b 
                                          >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c))) 
                 | ((vlSelf->i_b >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c 
        = (1U & (((vlSelf->i_a >> 0xaU) & ((vlSelf->i_b 
                                            >> 0xaU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c))) 
                 | ((vlSelf->i_b >> 0xaU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c 
        = (1U & (((vlSelf->i_a >> 0xbU) & ((vlSelf->i_b 
                                            >> 0xbU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c))) 
                 | ((vlSelf->i_b >> 0xbU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c 
        = (1U & (((vlSelf->i_a >> 0xcU) & ((vlSelf->i_b 
                                            >> 0xcU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c))) 
                 | ((vlSelf->i_b >> 0xcU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c 
        = (1U & (((vlSelf->i_a >> 0xdU) & ((vlSelf->i_b 
                                            >> 0xdU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c))) 
                 | ((vlSelf->i_b >> 0xdU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c 
        = (1U & (((vlSelf->i_a >> 0xeU) & ((vlSelf->i_b 
                                            >> 0xeU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c))) 
                 | ((vlSelf->i_b >> 0xeU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c 
        = (1U & (((vlSelf->i_a >> 0xfU) & ((vlSelf->i_b 
                                            >> 0xfU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c))) 
                 | ((vlSelf->i_b >> 0xfU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c 
        = (1U & (((vlSelf->i_a >> 0x10U) & ((vlSelf->i_b 
                                             >> 0x10U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c))) 
                 | ((vlSelf->i_b >> 0x10U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c 
        = (1U & (((vlSelf->i_a >> 0x11U) & ((vlSelf->i_b 
                                             >> 0x11U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c))) 
                 | ((vlSelf->i_b >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c 
        = (1U & (((vlSelf->i_a >> 0x12U) & ((vlSelf->i_b 
                                             >> 0x12U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c))) 
                 | ((vlSelf->i_b >> 0x12U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c 
        = (1U & (((vlSelf->i_a >> 0x13U) & ((vlSelf->i_b 
                                             >> 0x13U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c))) 
                 | ((vlSelf->i_b >> 0x13U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c 
        = (1U & (((vlSelf->i_a >> 0x14U) & ((vlSelf->i_b 
                                             >> 0x14U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c))) 
                 | ((vlSelf->i_b >> 0x14U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c 
        = (1U & (((vlSelf->i_a >> 0x15U) & ((vlSelf->i_b 
                                             >> 0x15U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c))) 
                 | ((vlSelf->i_b >> 0x15U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c 
        = (1U & (((vlSelf->i_a >> 0x16U) & ((vlSelf->i_b 
                                             >> 0x16U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c))) 
                 | ((vlSelf->i_b >> 0x16U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c 
        = (1U & (((vlSelf->i_a >> 0x17U) & ((vlSelf->i_b 
                                             >> 0x17U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c))) 
                 | ((vlSelf->i_b >> 0x17U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c 
        = (1U & (((vlSelf->i_a >> 0x18U) & ((vlSelf->i_b 
                                             >> 0x18U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c))) 
                 | ((vlSelf->i_b >> 0x18U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c 
        = (1U & (((vlSelf->i_a >> 0x19U) & ((vlSelf->i_b 
                                             >> 0x19U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c))) 
                 | ((vlSelf->i_b >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c 
        = (1U & (((vlSelf->i_a >> 0x1aU) & ((vlSelf->i_b 
                                             >> 0x1aU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c))) 
                 | ((vlSelf->i_b >> 0x1aU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c 
        = (1U & (((vlSelf->i_a >> 0x1bU) & ((vlSelf->i_b 
                                             >> 0x1bU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c))) 
                 | ((vlSelf->i_b >> 0x1bU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c 
        = (1U & (((vlSelf->i_a >> 0x1cU) & ((vlSelf->i_b 
                                             >> 0x1cU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c))) 
                 | ((vlSelf->i_b >> 0x1cU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c 
        = (1U & (((vlSelf->i_a >> 0x1dU) & ((vlSelf->i_b 
                                             >> 0x1dU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c))) 
                 | ((vlSelf->i_b >> 0x1dU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c))));
    vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c 
        = (1U & (((vlSelf->i_a >> 0x1eU) & ((vlSelf->i_b 
                                             >> 0x1eU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c))) 
                 | ((vlSelf->i_b >> 0x1eU) & (IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c))));
    vlSelf->o_CRA = (((0x80000000U & (vlSelf->i_a ^ vlSelf->i_b)) 
                      ^ ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA31__i_c) 
                         << 0x1fU)) | ((0x40000000U 
                                        & ((0xc0000000U 
                                            & vlSelf->i_a) 
                                           ^ ((0xc0000000U 
                                               & vlSelf->i_b) 
                                              ^ ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA30__i_c) 
                                                 << 0x1eU)))) 
                                       | ((0x20000000U 
                                           & ((0xe0000000U 
                                               & vlSelf->i_a) 
                                              ^ ((0xe0000000U 
                                                  & vlSelf->i_b) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA29__i_c) 
                                                  << 0x1dU)))) 
                                          | ((0x10000000U 
                                              & ((0xf0000000U 
                                                  & vlSelf->i_a) 
                                                 ^ 
                                                 ((0xf0000000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA28__i_c) 
                                                   << 0x1cU)))) 
                                             | ((0x8000000U 
                                                 & ((0xf8000000U 
                                                     & vlSelf->i_a) 
                                                    ^ 
                                                    ((0xf8000000U 
                                                      & vlSelf->i_b) 
                                                     ^ 
                                                     ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA27__i_c) 
                                                      << 0x1bU)))) 
                                                | ((0x4000000U 
                                                    & ((0xfc000000U 
                                                        & vlSelf->i_a) 
                                                       ^ 
                                                       ((0xfc000000U 
                                                         & vlSelf->i_b) 
                                                        ^ 
                                                        ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA26__i_c) 
                                                         << 0x1aU)))) 
                                                   | ((0x2000000U 
                                                       & ((0xfe000000U 
                                                           & vlSelf->i_a) 
                                                          ^ 
                                                          ((0xfe000000U 
                                                            & vlSelf->i_b) 
                                                           ^ 
                                                           ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA25__i_c) 
                                                            << 0x19U)))) 
                                                      | ((0x1000000U 
                                                          & ((0xff000000U 
                                                              & vlSelf->i_a) 
                                                             ^ 
                                                             ((0xff000000U 
                                                               & vlSelf->i_b) 
                                                              ^ 
                                                              ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA24__i_c) 
                                                               << 0x18U)))) 
                                                         | ((0x800000U 
                                                             & ((0xff800000U 
                                                                 & vlSelf->i_a) 
                                                                ^ 
                                                                ((0xff800000U 
                                                                  & vlSelf->i_b) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA23__i_c) 
                                                                  << 0x17U)))) 
                                                            | ((0x400000U 
                                                                & ((0xffc00000U 
                                                                    & vlSelf->i_a) 
                                                                   ^ 
                                                                   ((0xffc00000U 
                                                                     & vlSelf->i_b) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA22__i_c) 
                                                                     << 0x16U)))) 
                                                               | ((0x200000U 
                                                                   & ((0xffe00000U 
                                                                       & vlSelf->i_a) 
                                                                      ^ 
                                                                      ((0xffe00000U 
                                                                        & vlSelf->i_b) 
                                                                       ^ 
                                                                       ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA21__i_c) 
                                                                        << 0x15U)))) 
                                                                  | ((0x100000U 
                                                                      & ((0xfff00000U 
                                                                          & vlSelf->i_a) 
                                                                         ^ 
                                                                         ((0xfff00000U 
                                                                           & vlSelf->i_b) 
                                                                          ^ 
                                                                          ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA20__i_c) 
                                                                           << 0x14U)))) 
                                                                     | ((0x80000U 
                                                                         & ((0xfff80000U 
                                                                             & vlSelf->i_a) 
                                                                            ^ 
                                                                            ((0xfff80000U 
                                                                              & vlSelf->i_b) 
                                                                             ^ 
                                                                             ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA19__i_c) 
                                                                              << 0x13U)))) 
                                                                        | ((0x40000U 
                                                                            & ((0xfffc0000U 
                                                                                & vlSelf->i_a) 
                                                                               ^ 
                                                                               ((0xfffc0000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA18__i_c) 
                                                                                << 0x12U)))) 
                                                                           | ((0x20000U 
                                                                               & ((0xfffe0000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffe0000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA17__i_c) 
                                                                                << 0x11U)))) 
                                                                              | ((0x10000U 
                                                                                & ((0xffff0000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffff0000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA16__i_c) 
                                                                                << 0x10U)))) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffff8000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA15__i_c) 
                                                                                << 0xfU)))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffc000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA14__i_c) 
                                                                                << 0xeU)))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffe000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA13__i_c) 
                                                                                << 0xdU)))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffff000U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA12__i_c) 
                                                                                << 0xcU)))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffff800U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA11__i_c) 
                                                                                << 0xbU)))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffc00U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA10__i_c) 
                                                                                << 0xaU)))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffe00U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA9__i_c) 
                                                                                << 9U)))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffff00U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA8__i_c) 
                                                                                << 8U)))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffff80U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA7__i_c) 
                                                                                << 7U)))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffffc0U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA6__i_c) 
                                                                                << 6U)))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xffffffe0U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA5__i_c) 
                                                                                << 5U)))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffff0U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA4__i_c) 
                                                                                << 4U)))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffff8U 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA3__i_c) 
                                                                                << 3U)))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffffcU 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CRA__DOT____Vcellinp__FA2__i_c) 
                                                                                << 2U)))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & vlSelf->i_a) 
                                                                                ^ 
                                                                                ((0xfffffffeU 
                                                                                & vlSelf->i_b) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g) 
                                                                                << 1U)))) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__7(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & ((vlSelf->i_a & (vlSelf->i_b | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))) 
                 | (vlSelf->i_b & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 4U) & ((vlSelf->i_b 
                                          >> 4U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                          >> 1U))) 
                 | ((vlSelf->i_b >> 4U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                           >> 1U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 8U) & ((vlSelf->i_b 
                                          >> 8U) | 
                                         ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                          >> 2U))) 
                 | ((vlSelf->i_b >> 8U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                           >> 2U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 0xcU) & ((vlSelf->i_b 
                                            >> 0xcU) 
                                           | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                              >> 3U))) 
                 | ((vlSelf->i_b >> 0xcU) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                             >> 3U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 0x10U) & ((vlSelf->i_b 
                                             >> 0x10U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                               >> 4U))) 
                 | ((vlSelf->i_b >> 0x10U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                              >> 4U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 0x14U) & ((vlSelf->i_b 
                                             >> 0x14U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                               >> 5U))) 
                 | ((vlSelf->i_b >> 0x14U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                              >> 5U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c 
        = (1U & (((vlSelf->i_a >> 0x18U) & ((vlSelf->i_b 
                                             >> 0x18U) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                               >> 6U))) 
                 | ((vlSelf->i_b >> 0x18U) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                              >> 6U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 1U) & ((vlSelf->i_b 
                                          >> 1U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 1U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 5U) & ((vlSelf->i_b 
                                          >> 5U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 5U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 9U) & ((vlSelf->i_b 
                                          >> 9U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 9U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0xdU) & ((vlSelf->i_b 
                                            >> 0xdU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 0xdU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x11U) & ((vlSelf->i_b 
                                             >> 0x11U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 0x11U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x15U) & ((vlSelf->i_b 
                                             >> 0x15U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 0x15U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c 
        = (1U & (((vlSelf->i_a >> 0x19U) & ((vlSelf->i_b 
                                             >> 0x19U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))) 
                 | ((vlSelf->i_b >> 0x19U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 2U) & ((vlSelf->i_b 
                                          >> 2U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 2U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 6U) & ((vlSelf->i_b 
                                          >> 6U) | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 6U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0xaU) & ((vlSelf->i_b 
                                            >> 0xaU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 0xaU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0xeU) & ((vlSelf->i_b 
                                            >> 0xeU) 
                                           | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 0xeU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x12U) & ((vlSelf->i_b 
                                             >> 0x12U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 0x12U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x16U) & ((vlSelf->i_b 
                                             >> 0x16U) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 0x16U) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c 
        = (1U & (((vlSelf->i_a >> 0x1aU) & ((vlSelf->i_b 
                                             >> 0x1aU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c))) 
                 | ((vlSelf->i_b >> 0x1aU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c))));
    __Vtemp_1 = ((0x80U & (((0x40U & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                             ? ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                >> 6U) : (((vlSelf->i_a 
                                            >> 0x1bU) 
                                           & ((vlSelf->i_b 
                                               >> 0x1bU) 
                                              | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                          | ((vlSelf->i_b 
                                              >> 0x1bU) 
                                             & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                           << 7U)) | ((0x40U & (((0x20U 
                                                  & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                  ? 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 5U)
                                                  : 
                                                 (((vlSelf->i_a 
                                                    >> 0x17U) 
                                                   & ((vlSelf->i_b 
                                                       >> 0x17U) 
                                                      | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                  | ((vlSelf->i_b 
                                                      >> 0x17U) 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   ((0x10U 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                     ? 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                     >> 4U)
                                                     : 
                                                    (((vlSelf->i_a 
                                                       >> 0x13U) 
                                                      & ((vlSelf->i_b 
                                                          >> 0x13U) 
                                                         | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                     | ((vlSelf->i_b 
                                                         >> 0x13U) 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((8U 
                                                  & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                  ? 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                  >> 3U)
                                                  : 
                                                 (((vlSelf->i_a 
                                                    >> 0xfU) 
                                                   & ((vlSelf->i_b 
                                                       >> 0xfU) 
                                                      | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                  | ((vlSelf->i_b 
                                                      >> 0xfU) 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                << 4U)) 
                                            | ((8U 
                                                & (((4U 
                                                     & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                     ? 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                     >> 2U)
                                                     : 
                                                    (((vlSelf->i_a 
                                                       >> 0xbU) 
                                                      & ((vlSelf->i_b 
                                                          >> 0xbU) 
                                                         | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                     | ((vlSelf->i_b 
                                                         >> 0xbU) 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((2U 
                                                        & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                        ? 
                                                       ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                        >> 1U)
                                                        : 
                                                       (((vlSelf->i_a 
                                                          >> 7U) 
                                                         & ((vlSelf->i_b 
                                                             >> 7U) 
                                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                        | ((vlSelf->i_b 
                                                            >> 7U) 
                                                           & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                      << 2U)) 
                                                  | (2U 
                                                     & (((1U 
                                                          & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_P))
                                                          ? (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry)
                                                          : 
                                                         (((vlSelf->i_a 
                                                            >> 3U) 
                                                           & ((vlSelf->i_b 
                                                               >> 3U) 
                                                              | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c))) 
                                                          | ((vlSelf->i_b 
                                                              >> 3U) 
                                                             & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c)))) 
                                                        << 1U))))))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry 
        = __Vtemp_1;
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c 
        = (1U & (((vlSelf->i_a >> 0x1cU) & ((vlSelf->i_b 
                                             >> 0x1cU) 
                                            | ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                               >> 7U))) 
                 | ((vlSelf->i_b >> 0x1cU) & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                              >> 7U))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c 
        = (1U & (((vlSelf->i_a >> 0x1dU) & ((vlSelf->i_b 
                                             >> 0x1dU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))) 
                 | ((vlSelf->i_b >> 0x1dU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c))));
    vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c 
        = (1U & (((vlSelf->i_a >> 0x1eU) & ((vlSelf->i_b 
                                             >> 0x1eU) 
                                            | (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c))) 
                 | ((vlSelf->i_b >> 0x1eU) & (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c))));
    vlSelf->o_CSKA = ((((0x80000000U & (vlSelf->i_a 
                                        ^ vlSelf->i_b)) 
                        ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA3__i_c) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((0xc0000000U 
                                              & vlSelf->i_a) 
                                             ^ ((0xc0000000U 
                                                 & vlSelf->i_b) 
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA2__i_c) 
                                                   << 0x1eU)))) 
                                         | ((0x20000000U 
                                             & ((0xe0000000U 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xe0000000U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__7__KET____DOT__rca__DOT____Vcellinp__FA1__i_c) 
                                                    << 0x1dU)))) 
                                            | (0x10000000U 
                                               & ((0xf0000000U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xf0000000U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   (0xf0000000U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                       << 0x15U)))))))) 
                      | (((0x8000000U & ((0xf8000000U 
                                          & vlSelf->i_a) 
                                         ^ ((0xf8000000U 
                                             & vlSelf->i_b) 
                                            ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                               << 0x1bU)))) 
                          | ((0x4000000U & ((0xfc000000U 
                                             & vlSelf->i_a) 
                                            ^ ((0xfc000000U 
                                                & vlSelf->i_b) 
                                               ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                  << 0x1aU)))) 
                             | ((0x2000000U & ((0xfe000000U 
                                                & vlSelf->i_a) 
                                               ^ ((0xfe000000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__6__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                   << 0x19U)))) 
                                | (0x1000000U & ((0xff000000U 
                                                  & vlSelf->i_a) 
                                                 ^ 
                                                 ((0xff000000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                      << 0x12U)))))))) 
                         | (((0x800000U & ((0xff800000U 
                                            & vlSelf->i_a) 
                                           ^ ((0xff800000U 
                                               & vlSelf->i_b) 
                                              ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                 << 0x17U)))) 
                             | ((0x400000U & ((0xffc00000U 
                                               & vlSelf->i_a) 
                                              ^ ((0xffc00000U 
                                                  & vlSelf->i_b) 
                                                 ^ 
                                                 ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                  << 0x16U)))) 
                                | ((0x200000U & ((0xffe00000U 
                                                  & vlSelf->i_a) 
                                                 ^ 
                                                 ((0xffe00000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__5__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                   << 0x15U)))) 
                                   | (0x100000U & (
                                                   (0xfff00000U 
                                                    & vlSelf->i_a) 
                                                   ^ 
                                                   ((0xfff00000U 
                                                     & vlSelf->i_b) 
                                                    ^ 
                                                    (0xfff00000U 
                                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                        << 0xfU)))))))) 
                            | (((0x80000U & ((0xfff80000U 
                                              & vlSelf->i_a) 
                                             ^ ((0xfff80000U 
                                                 & vlSelf->i_b) 
                                                ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                   << 0x13U)))) 
                                | ((0x40000U & ((0xfffc0000U 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xfffc0000U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                    << 0x12U)))) 
                                   | ((0x20000U & (
                                                   (0xfffe0000U 
                                                    & vlSelf->i_a) 
                                                   ^ 
                                                   ((0xfffe0000U 
                                                     & vlSelf->i_b) 
                                                    ^ 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__4__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                     << 0x11U)))) 
                                      | (0x10000U & 
                                         ((0xffff0000U 
                                           & vlSelf->i_a) 
                                          ^ ((0xffff0000U 
                                              & vlSelf->i_b) 
                                             ^ (0xffff0000U 
                                                & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                   << 0xcU)))))))) 
                               | (((0x8000U & ((0xffff8000U 
                                                & vlSelf->i_a) 
                                               ^ ((0xffff8000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                   << 0xfU)))) 
                                   | ((0x4000U & ((0xffffc000U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xffffc000U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                    << 0xeU)))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & vlSelf->i_a) 
                                           ^ ((0xffffe000U 
                                               & vlSelf->i_b) 
                                              ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__3__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                 << 0xdU)))) 
                                         | (0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->i_a) 
                                               ^ ((0xfffff000U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  (0xfffff000U 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                      << 9U)))))))) 
                                  | (((0x800U & ((0xfffff800U 
                                                  & vlSelf->i_a) 
                                                 ^ 
                                                 ((0xfffff800U 
                                                   & vlSelf->i_b) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                   << 0xbU)))) 
                                      | ((0x400U & 
                                          ((0xfffffc00U 
                                            & vlSelf->i_a) 
                                           ^ ((0xfffffc00U 
                                               & vlSelf->i_b) 
                                              ^ ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                 << 0xaU)))) 
                                         | ((0x200U 
                                             & ((0xfffffe00U 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xfffffe00U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__2__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                    << 9U)))) 
                                            | (0x100U 
                                               & ((0xffffff00U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xffffff00U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   (0xffffff00U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                       << 6U)))))))) 
                                     | (((0x80U & (
                                                   (0xffffff80U 
                                                    & vlSelf->i_a) 
                                                   ^ 
                                                   ((0xffffff80U 
                                                     & vlSelf->i_b) 
                                                    ^ 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                     << 7U)))) 
                                         | ((0x40U 
                                             & ((0xffffffc0U 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xffffffc0U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                    << 6U)))) 
                                            | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & vlSelf->i_a) 
                                                   ^ 
                                                   ((0xffffffe0U 
                                                     & vlSelf->i_b) 
                                                    ^ 
                                                    ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__1__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                     << 5U)))) 
                                               | (0x10U 
                                                  & ((0xfffffff0U 
                                                      & vlSelf->i_a) 
                                                     ^ 
                                                     ((0xfffffff0U 
                                                       & vlSelf->i_b) 
                                                      ^ 
                                                      (0xfffffff0U 
                                                       & ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                                          << 3U)))))))) 
                                        | ((8U & ((0xfffffff8U 
                                                   & vlSelf->i_a) 
                                                  ^ 
                                                  ((0xfffffff8U 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA2__o_c) 
                                                    << 3U)))) 
                                           | ((4U & 
                                               ((0xfffffffcU 
                                                 & vlSelf->i_a) 
                                                ^ (
                                                   (0xfffffffcU 
                                                    & vlSelf->i_b) 
                                                   ^ 
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA1__o_c) 
                                                    << 2U)))) 
                                              | ((2U 
                                                  & ((0xfffffffeU 
                                                      & vlSelf->i_a) 
                                                     ^ 
                                                     ((0xfffffffeU 
                                                       & vlSelf->i_b) 
                                                      ^ 
                                                      ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__CSKA_BLOCK__BRA__0__KET____DOT__rca__DOT____Vcellout__FA0__o_c) 
                                                       << 1U)))) 
                                                 | (1U 
                                                    & (vlSelf->i_a 
                                                       ^ 
                                                       (vlSelf->i_b 
                                                        ^ (IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry))))))))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__8(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__8\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry)) 
           | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_g))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__9(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__9\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry)) 
           | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_g))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__10(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__10\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry)) 
           | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_g))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__11(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__11\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry 
        = ((0x80U & (IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry)) 
           | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA6__o_c) 
               << 6U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA5__o_c) 
                          << 5U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA4__o_c) 
                                     << 4U) | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA3__o_c) 
                                                << 3U) 
                                               | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA2__o_c) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT____Vcellout__FA1__o_c) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_g))))))));
    vlSelf->Block_adder_total__DOT__CSA__DOT__c8 = 
        (1U & (((vlSelf->i_a >> 7U) & ((vlSelf->i_b 
                                        >> 7U) | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                  >> 6U))) 
               | ((vlSelf->i_b >> 7U) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                         >> 6U))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__12(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__12\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                 | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                       << 1U)))) | 
                 ((0x40000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                  | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                     & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                        << 1U)))) | 
                  ((0x20000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                   | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                      & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                         << 1U)))) 
                   | ((0x10000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                      | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                         & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                            << 1U)))) 
                      | ((0x8000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                        | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                              << 1U)))) 
                         | ((0x4000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                           | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                 << 1U)))) 
                            | ((0x2000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                              | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                    << 1U)))) 
                               | ((0x1000000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                 | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                       << 1U)))) 
                                  | ((0x800000U & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                   | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                      & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                         << 1U)))) 
                                     | ((0x400000U 
                                         & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                            | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                               & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                  << 1U)))) 
                                        | ((0x200000U 
                                            & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                               | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                     << 1U)))) 
                                           | ((0x100000U 
                                               & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                  | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                     & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                        << 1U)))) 
                                              | ((0x80000U 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                     | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                        & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                           << 1U)))) 
                                                 | ((0x40000U 
                                                     & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                        | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                              << 1U)))) 
                                                    | ((0x20000U 
                                                        & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                           | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                 << 1U)))) 
                                                       | ((0x10000U 
                                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                              | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                    << 1U)))) 
                                                          | ((0x8000U 
                                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                 | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                       << 1U)))) 
                                                             | ((0x4000U 
                                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                    | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                       & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                          << 1U)))) 
                                                                | ((0x2000U 
                                                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                       | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                          & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                             << 1U)))) 
                                                                   | ((0x1000U 
                                                                       & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                          | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                             & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                             | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                         | ((0x400U 
                                                                             & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                            | ((0x200U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                               | ((0x100U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((8U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((4U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((2U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__g 
                                                                                | (vlSelf->Block_adder_total__DOT__CLA__DOT__p 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & vlSelf->Block_adder_total__DOT__CLA__DOT__g))))))))))))))))))))))))))))))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__c = __Vtemp_1;
    vlSelf->o_CLA = ((0x80000000U & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__31__KET____DOT__FA__o_p) 
                                      << 0x1fU) ^ (0x80000000U 
                                                   & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                      << 1U)))) 
                     | ((0x40000000U & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__30__KET____DOT__FA__o_p) 
                                         << 0x1eU) 
                                        ^ (0xc0000000U 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                              << 1U)))) 
                        | ((0x20000000U & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__29__KET____DOT__FA__o_p) 
                                            << 0x1dU) 
                                           ^ (0xe0000000U 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                 << 1U)))) 
                           | ((0x10000000U & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__28__KET____DOT__FA__o_p) 
                                               << 0x1cU) 
                                              ^ (0xf0000000U 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                    << 1U)))) 
                              | ((0x8000000U & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__27__KET____DOT__FA__o_p) 
                                                 << 0x1bU) 
                                                ^ (0xf8000000U 
                                                   & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                      << 1U)))) 
                                 | ((0x4000000U & (
                                                   ((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__26__KET____DOT__FA__o_p) 
                                                    << 0x1aU) 
                                                   ^ 
                                                   (0xfc000000U 
                                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                       << 1U)))) 
                                    | ((0x2000000U 
                                        & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__25__KET____DOT__FA__o_p) 
                                            << 0x19U) 
                                           ^ (0xfe000000U 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                 << 1U)))) 
                                       | ((0x1000000U 
                                           & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p) 
                                               << 0x18U) 
                                              ^ (0xff000000U 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                    << 1U)))) 
                                          | ((0x800000U 
                                              & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__23__KET____DOT__FA__o_p) 
                                                  << 0x17U) 
                                                 ^ 
                                                 (0xff800000U 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                     << 1U)))) 
                                             | ((0x400000U 
                                                 & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__22__KET____DOT__FA__o_p) 
                                                     << 0x16U) 
                                                    ^ 
                                                    (0xffc00000U 
                                                     & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                        << 1U)))) 
                                                | ((0x200000U 
                                                    & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__21__KET____DOT__FA__o_p) 
                                                        << 0x15U) 
                                                       ^ 
                                                       (0xffe00000U 
                                                        & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                           << 1U)))) 
                                                   | ((0x100000U 
                                                       & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__20__KET____DOT__FA__o_p) 
                                                           << 0x14U) 
                                                          ^ 
                                                          (0xfff00000U 
                                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                              << 1U)))) 
                                                      | ((0x80000U 
                                                          & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__19__KET____DOT__FA__o_p) 
                                                              << 0x13U) 
                                                             ^ 
                                                             (0xfff80000U 
                                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                 << 1U)))) 
                                                         | ((0x40000U 
                                                             & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__18__KET____DOT__FA__o_p) 
                                                                 << 0x12U) 
                                                                ^ 
                                                                (0xfffc0000U 
                                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                    << 1U)))) 
                                                            | ((0x20000U 
                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__17__KET____DOT__FA__o_p) 
                                                                    << 0x11U) 
                                                                   ^ 
                                                                   (0xfffe0000U 
                                                                    & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                       << 1U)))) 
                                                               | ((0x10000U 
                                                                   & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p) 
                                                                       << 0x10U) 
                                                                      ^ 
                                                                      (0xffff0000U 
                                                                       & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                          << 1U)))) 
                                                                  | ((0x8000U 
                                                                      & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__15__KET____DOT__FA__o_p) 
                                                                          << 0xfU) 
                                                                         ^ 
                                                                         (0xffff8000U 
                                                                          & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                             << 1U)))) 
                                                                     | ((0x4000U 
                                                                         & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__14__KET____DOT__FA__o_p) 
                                                                             << 0xeU) 
                                                                            ^ 
                                                                            (0xffffc000U 
                                                                             & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                        | ((0x2000U 
                                                                            & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__13__KET____DOT__FA__o_p) 
                                                                                << 0xdU) 
                                                                               ^ 
                                                                               (0xffffe000U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                           | ((0x1000U 
                                                                               & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__12__KET____DOT__FA__o_p) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0xfffff000U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                              | ((0x800U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__11__KET____DOT__FA__o_p) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__10__KET____DOT__FA__o_p) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__9__KET____DOT__FA__o_p) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p) 
                                                                                << 8U) 
                                                                                ^ 
                                                                                (0xffffff00U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__7__KET____DOT__FA__o_p) 
                                                                                << 7U) 
                                                                                ^ 
                                                                                (0xffffff80U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__6__KET____DOT__FA__o_p) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0xffffffc0U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__5__KET____DOT__FA__o_p) 
                                                                                << 5U) 
                                                                                ^ 
                                                                                (0xffffffe0U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__4__KET____DOT__FA__o_p) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0xfffffff0U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__3__KET____DOT__FA__o_p) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__2__KET____DOT__FA__o_p) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                                                                << 1U)))) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__1__KET____DOT__FA__o_p) 
                                                                                ^ vlSelf->Block_adder_total__DOT__CLA__DOT__c) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__13(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__13\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CSA__DOT__c16 = 
        (1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c8)
                ? (((vlSelf->i_a >> 0xfU) & ((vlSelf->i_b 
                                              >> 0xfU) 
                                             | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                >> 6U))) 
                   | ((vlSelf->i_b >> 0xfU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                               >> 6U)))
                : (((vlSelf->i_a >> 0xfU) & ((vlSelf->i_b 
                                              >> 0xfU) 
                                             | ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                >> 6U))) 
                   | ((vlSelf->i_b >> 0xfU) & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                               >> 6U)))));
}

VL_INLINE_OPT void VBlock_adder_total___024root___ico_comb__TOP__14(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___ico_comb__TOP__14\n"); );
    // Body
    vlSelf->o_CSA = ((((1U & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c16)
                               ? (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                      >> 6U)))
                               : (((vlSelf->i_a >> 0x17U) 
                                   & ((vlSelf->i_b 
                                       >> 0x17U) | 
                                      ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                       >> 6U))) | (
                                                   (vlSelf->i_b 
                                                    >> 0x17U) 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                      >> 6U)))))
                        ? ((0x80U & ((0x80U & (vlSelf->i_a 
                                               >> 0x18U)) 
                                     ^ ((0x80U & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                        ^ (0xffffff80U 
                                           & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                              << 1U))))) 
                           | ((0x40U & ((0xc0U & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                        ^ ((0xc0U & 
                                            (vlSelf->i_b 
                                             >> 0x18U)) 
                                           ^ (0xffffffc0U 
                                              & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                 << 1U))))) 
                              | ((0x20U & ((0xe0U & 
                                            (vlSelf->i_a 
                                             >> 0x18U)) 
                                           ^ ((0xe0U 
                                               & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                              ^ (0xffffffe0U 
                                                 & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                    << 1U))))) 
                                 | ((0x10U & ((0xf0U 
                                               & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                              ^ ((0xf0U 
                                                  & (vlSelf->i_b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                     << 1U))))) 
                                    | ((8U & ((0xf8U 
                                               & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->i_b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 (0xfffffff8U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                     << 1U))))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->i_a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->i_b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                                      << 1U))))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
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
                                                    >> 0x18U))))))))))
                        : ((0x80U & ((0x80U & (vlSelf->i_a 
                                               >> 0x18U)) 
                                     ^ ((0x80U & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                        ^ (0xffffff80U 
                                           & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                              << 1U))))) 
                           | ((0x40U & ((0xc0U & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                        ^ ((0xc0U & 
                                            (vlSelf->i_b 
                                             >> 0x18U)) 
                                           ^ (0xffffffc0U 
                                              & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                 << 1U))))) 
                              | ((0x20U & ((0xe0U & 
                                            (vlSelf->i_a 
                                             >> 0x18U)) 
                                           ^ ((0xe0U 
                                               & (vlSelf->i_b 
                                                  >> 0x18U)) 
                                              ^ (0xffffffe0U 
                                                 & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                    << 1U))))) 
                                 | ((0x10U & ((0xf0U 
                                               & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                              ^ ((0xf0U 
                                                  & (vlSelf->i_b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                     << 1U))))) 
                                    | ((8U & ((0xf8U 
                                               & (vlSelf->i_a 
                                                  >> 0x18U)) 
                                              ^ ((0xf8U 
                                                  & (vlSelf->i_b 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 (0xfffffff8U 
                                                  & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                     << 1U))))) 
                                       | ((4U & ((0xfcU 
                                                  & (vlSelf->i_a 
                                                     >> 0x18U)) 
                                                 ^ 
                                                 ((0xfcU 
                                                   & (vlSelf->i_b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                      << 1U))))) 
                                          | ((2U & 
                                              ((0xfeU 
                                                & (vlSelf->i_a 
                                                   >> 0x18U)) 
                                               ^ ((0xfeU 
                                                   & (vlSelf->i_b 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                                   << 1U)))) 
                                             | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__24__KET____DOT__FA__o_p))))))))) 
                      << 0x18U) | ((((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c16)
                                      ? ((0x80U & (
                                                   (0xff80U 
                                                    & (vlSelf->i_a 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   ((0xff80U 
                                                     & (vlSelf->i_b 
                                                        >> 0x10U)) 
                                                    ^ 
                                                    (0xffffff80U 
                                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                        << 1U))))) 
                                         | ((0x40U 
                                             & ((0xffc0U 
                                                 & (vlSelf->i_a 
                                                    >> 0x10U)) 
                                                ^ (
                                                   (0xffc0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xffffffc0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                       << 1U))))) 
                                            | ((0x20U 
                                                & ((0xffe0U 
                                                    & (vlSelf->i_a 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   ((0xffe0U 
                                                     & (vlSelf->i_b 
                                                        >> 0x10U)) 
                                                    ^ 
                                                    (0xffffffe0U 
                                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                                        << 1U))))) 
                                               | ((0x10U 
                                                   & ((0xfff0U 
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
                                                  | ((8U 
                                                      & ((0xfff8U 
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
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->i_a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
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
                                                                  >> 0x10U))))))))))
                                      : ((0x80U & (
                                                   (0xff80U 
                                                    & (vlSelf->i_a 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   ((0xff80U 
                                                     & (vlSelf->i_b 
                                                        >> 0x10U)) 
                                                    ^ 
                                                    (0xffffff80U 
                                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                        << 1U))))) 
                                         | ((0x40U 
                                             & ((0xffc0U 
                                                 & (vlSelf->i_a 
                                                    >> 0x10U)) 
                                                ^ (
                                                   (0xffc0U 
                                                    & (vlSelf->i_b 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (0xffffffc0U 
                                                    & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                       << 1U))))) 
                                            | ((0x20U 
                                                & ((0xffe0U 
                                                    & (vlSelf->i_a 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   ((0xffe0U 
                                                     & (vlSelf->i_b 
                                                        >> 0x10U)) 
                                                    ^ 
                                                    (0xffffffe0U 
                                                     & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                                        << 1U))))) 
                                               | ((0x10U 
                                                   & ((0xfff0U 
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
                                                  | ((8U 
                                                      & ((0xfff8U 
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
                                                     | ((4U 
                                                         & ((0xfffcU 
                                                             & (vlSelf->i_a 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((0xfffcU 
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
                                                           | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__16__KET____DOT__FA__o_p))))))))) 
                                    << 0x10U) | ((((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__c8)
                                                    ? 
                                                   ((0x80U 
                                                     & ((0xffff80U 
                                                         & (vlSelf->i_a 
                                                            >> 8U)) 
                                                        ^ 
                                                        ((0xffff80U 
                                                          & (vlSelf->i_b 
                                                             >> 8U)) 
                                                         ^ 
                                                         (0xffffff80U 
                                                          & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                             << 1U))))) 
                                                    | ((0x40U 
                                                        & ((0xffffc0U 
                                                            & (vlSelf->i_a 
                                                               >> 8U)) 
                                                           ^ 
                                                           ((0xffffc0U 
                                                             & (vlSelf->i_b 
                                                                >> 8U)) 
                                                            ^ 
                                                            (0xffffffc0U 
                                                             & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                                << 1U))))) 
                                                       | ((0x20U 
                                                           & ((0xffffe0U 
                                                               & (vlSelf->i_a 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((0xffffe0U 
                                                                & (vlSelf->i_b 
                                                                   >> 8U)) 
                                                               ^ 
                                                               (0xffffffe0U 
                                                                & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                                                   << 1U))))) 
                                                          | ((0x10U 
                                                              & ((0xfffff0U 
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
                                                             | ((8U 
                                                                 & ((0xfffff8U 
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
                                                                | ((4U 
                                                                    & ((0xfffffcU 
                                                                        & (vlSelf->i_a 
                                                                           >> 8U)) 
                                                                       ^ 
                                                                       ((0xfffffcU 
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
                                                                             >> 8U))))))))))
                                                    : 
                                                   ((0x80U 
                                                     & ((0xffff80U 
                                                         & (vlSelf->i_a 
                                                            >> 8U)) 
                                                        ^ 
                                                        ((0xffff80U 
                                                          & (vlSelf->i_b 
                                                             >> 8U)) 
                                                         ^ 
                                                         (0xffffff80U 
                                                          & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                             << 1U))))) 
                                                    | ((0x40U 
                                                        & ((0xffffc0U 
                                                            & (vlSelf->i_a 
                                                               >> 8U)) 
                                                           ^ 
                                                           ((0xffffc0U 
                                                             & (vlSelf->i_b 
                                                                >> 8U)) 
                                                            ^ 
                                                            (0xffffffc0U 
                                                             & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                                << 1U))))) 
                                                       | ((0x20U 
                                                           & ((0xffffe0U 
                                                               & (vlSelf->i_a 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((0xffffe0U 
                                                                & (vlSelf->i_b 
                                                                   >> 8U)) 
                                                               ^ 
                                                               (0xffffffe0U 
                                                                & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                                                   << 1U))))) 
                                                          | ((0x10U 
                                                              & ((0xfffff0U 
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
                                                             | ((8U 
                                                                 & ((0xfffff8U 
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
                                                                | ((4U 
                                                                    & ((0xfffffcU 
                                                                        & (vlSelf->i_a 
                                                                           >> 8U)) 
                                                                       ^ 
                                                                       ((0xfffffcU 
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
                                                                      | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__8__KET____DOT__FA__o_p))))))))) 
                                                  << 8U) 
                                                 | ((0x80U 
                                                     & ((0xffffff80U 
                                                         & vlSelf->i_a) 
                                                        ^ 
                                                        ((0xffffff80U 
                                                          & vlSelf->i_b) 
                                                         ^ 
                                                         (0xffffff80U 
                                                          & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                             << 1U))))) 
                                                    | ((0x40U 
                                                        & ((0xffffffc0U 
                                                            & vlSelf->i_a) 
                                                           ^ 
                                                           ((0xffffffc0U 
                                                             & vlSelf->i_b) 
                                                            ^ 
                                                            (0xffffffc0U 
                                                             & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                                << 1U))))) 
                                                       | ((0x20U 
                                                           & ((0xffffffe0U 
                                                               & vlSelf->i_a) 
                                                              ^ 
                                                              ((0xffffffe0U 
                                                                & vlSelf->i_b) 
                                                               ^ 
                                                               (0xffffffe0U 
                                                                & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                                   << 1U))))) 
                                                          | ((0x10U 
                                                              & ((0xfffffff0U 
                                                                  & vlSelf->i_a) 
                                                                 ^ 
                                                                 ((0xfffffff0U 
                                                                   & vlSelf->i_b) 
                                                                  ^ 
                                                                  (0xfffffff0U 
                                                                   & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                                      << 1U))))) 
                                                             | ((8U 
                                                                 & ((0xfffffff8U 
                                                                     & vlSelf->i_a) 
                                                                    ^ 
                                                                    ((0xfffffff8U 
                                                                      & vlSelf->i_b) 
                                                                     ^ 
                                                                     (0xfffffff8U 
                                                                      & ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                                                         << 1U))))) 
                                                                | ((4U 
                                                                    & ((0xfffffffcU 
                                                                        & vlSelf->i_a) 
                                                                       ^ 
                                                                       ((0xfffffffcU 
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
                                                                      | (IData)(vlSelf->Block_adder_total__DOT__CLA__DOT____Vcellout__gen_fulladder__BRA__0__KET____DOT__FA__o_s)))))))))));
}

void VBlock_adder_total___024root___eval_ico(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_ico\n"); );
    // Body
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x81ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x201ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x101ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x1dULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x1fdULL & vlSelf->__VicoTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__14(vlSelf);
    }
}

void VBlock_adder_total___024root___eval_triggers__ico(VBlock_adder_total___024root* vlSelf);

bool VBlock_adder_total___024root___eval_phase__ico(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VBlock_adder_total___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VBlock_adder_total___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void VBlock_adder_total___024root___act_sequent__TOP__4(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [0U] >> 1U) & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                           [0U])));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [0U] >> 2U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [0U] >> 1U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [0U] >> 3U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [0U] >> 2U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [0U] >> 4U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [0U] >> 3U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffffefU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x10U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [0U] >> 5U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [0U] 
                                              >> 4U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffffdfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x20U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [0U] >> 6U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [0U] 
                                              >> 5U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffffbfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x40U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [0U] >> 7U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [0U] 
                                              >> 6U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffff7fU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x80U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [0U] >> 8U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [0U] 
                                              >> 7U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffeffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x100U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                [0U] >> 9U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [0U] 
                                               >> 8U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffdffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x200U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                [0U] >> 0xaU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                 [0U] 
                                                 >> 9U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffffbffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x400U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                [0U] >> 0xbU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                 [0U] 
                                                 >> 0xaU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xfffff7ffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x800U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                [0U] >> 0xcU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                 [0U] 
                                                 >> 0xbU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffefffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x1000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                 [0U] >> 0xdU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xcU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffdfffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x2000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                 [0U] >> 0xeU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xdU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffffbfffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x4000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                 [0U] >> 0xfU) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xeU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[1U] 
        = ((0xffff7fffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [1U]) | (0x8000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                 [0U] >> 0x10U) & (
                                                   vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                   [0U] 
                                                   >> 0xfU))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [1U] >> 1U) & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                           [1U])));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [1U] >> 2U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [1U] >> 1U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [1U] >> 3U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [1U] >> 2U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [1U] >> 4U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [1U] >> 3U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xffffffefU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (0x10U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [1U] >> 5U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [1U] 
                                              >> 4U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xffffffdfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (0x20U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [1U] >> 6U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [1U] 
                                              >> 5U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xffffffbfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (0x40U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [1U] >> 7U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [1U] 
                                              >> 6U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[2U] 
        = ((0xffffff7fU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [2U]) | (0x80U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                               [1U] >> 8U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                              [1U] 
                                              >> 7U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [3U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [2U] >> 1U) & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                           [2U])));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [3U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [2U] >> 2U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [2U] >> 1U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [3U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [2U] >> 3U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [2U] >> 2U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[3U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [3U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [2U] >> 4U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [2U] >> 3U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[4U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [4U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [3U] >> 1U) & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                           [3U])));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[4U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [4U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [3U] >> 2U) & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                           [3U] >> 1U))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level[5U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
            [5U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                            [4U] >> 1U) & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                           [4U])));
}

VL_INLINE_OPT void VBlock_adder_total___024root___act_sequent__TOP__5(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [0U] >> 1U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [0U] >> 1U) 
                                           & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                           [0U]))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [0U] >> 2U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [0U] >> 2U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [0U] 
                                              >> 1U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [0U] >> 3U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [0U] >> 3U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [0U] 
                                              >> 2U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [0U] >> 4U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [0U] >> 4U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [0U] 
                                              >> 3U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffffefU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x10U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [0U] >> 5U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [0U] 
                                               >> 5U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [0U] 
                                                 >> 4U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffffdfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x20U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [0U] >> 6U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [0U] 
                                               >> 6U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [0U] 
                                                 >> 5U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffffbfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x40U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [0U] >> 7U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [0U] 
                                               >> 7U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [0U] 
                                                 >> 6U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffff7fU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x80U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [0U] >> 8U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [0U] 
                                               >> 8U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [0U] 
                                                 >> 7U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffeffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x100U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                [0U] >> 9U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                [0U] 
                                                >> 9U) 
                                               & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                  [0U] 
                                                  >> 8U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffdffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x200U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                [0U] >> 0xaU) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                    [0U] 
                                                    >> 9U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffffbffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x400U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                [0U] >> 0xbU) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                    [0U] 
                                                    >> 0xaU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xfffff7ffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x800U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                [0U] >> 0xcU) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                  [0U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                    [0U] 
                                                    >> 0xbU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffefffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x1000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                 [0U] >> 0xdU) | ((
                                                   vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                   [0U] 
                                                   >> 0xdU) 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                     [0U] 
                                                     >> 0xcU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffdfffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x2000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                 [0U] >> 0xeU) | ((
                                                   vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                   [0U] 
                                                   >> 0xeU) 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                     [0U] 
                                                     >> 0xdU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffffbfffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x4000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                 [0U] >> 0xfU) | ((
                                                   vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                   [0U] 
                                                   >> 0xfU) 
                                                  & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                     [0U] 
                                                     >> 0xeU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[1U] 
        = ((0xffff7fffU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [1U]) | (0x8000U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                 [0U] >> 0x10U) | (
                                                   (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                                    [0U] 
                                                    >> 0x10U) 
                                                   & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                      [0U] 
                                                      >> 0xfU)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [1U] >> 1U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [1U] >> 1U) 
                                           & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                           [1U]))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [1U] >> 2U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [1U] >> 2U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [1U] 
                                              >> 1U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [1U] >> 3U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [1U] >> 3U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [1U] 
                                              >> 2U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [1U] >> 4U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [1U] >> 4U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [1U] 
                                              >> 3U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xffffffefU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (0x10U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [1U] >> 5U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [1U] 
                                               >> 5U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [1U] 
                                                 >> 4U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xffffffdfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (0x20U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [1U] >> 6U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [1U] 
                                               >> 6U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [1U] 
                                                 >> 5U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xffffffbfU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (0x40U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [1U] >> 7U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [1U] 
                                               >> 7U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [1U] 
                                                 >> 6U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[2U] 
        = ((0xffffff7fU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [2U]) | (0x80U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                               [1U] >> 8U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                               [1U] 
                                               >> 8U) 
                                              & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                                 [1U] 
                                                 >> 7U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [3U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [2U] >> 1U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [2U] >> 1U) 
                                           & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                           [2U]))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [3U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [2U] >> 2U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [2U] >> 2U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [2U] 
                                              >> 1U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3U] 
        = ((0xfffffffbU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [3U]) | (4U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [2U] >> 3U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [2U] >> 3U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [2U] 
                                              >> 2U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[3U] 
        = ((0xfffffff7U & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [3U]) | (8U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [2U] >> 4U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [2U] >> 4U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [2U] 
                                              >> 3U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[4U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [4U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [3U] >> 1U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [3U] >> 1U) 
                                           & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                           [3U]))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[4U] 
        = ((0xfffffffdU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [4U]) | (2U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [3U] >> 2U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [3U] >> 2U) 
                                           & (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                              [3U] 
                                              >> 1U)))));
    vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level[5U] 
        = ((0xfffffffeU & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
            [5U]) | (1U & ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                            [4U] >> 1U) | ((vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level
                                            [4U] >> 1U) 
                                           & vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level
                                           [4U]))));
}

void VBlock_adder_total___024root___eval_act(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_act\n"); );
    // Body
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___act_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x38ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((0x3f8ULL & vlSelf->__VactTriggered.word(0U))) {
        VBlock_adder_total___024root___ico_comb__TOP__14(vlSelf);
    }
}

void VBlock_adder_total___024root___eval_nba(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_nba\n"); );
}

void VBlock_adder_total___024root___eval_triggers__act(VBlock_adder_total___024root* vlSelf);

bool VBlock_adder_total___024root___eval_phase__act(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VBlock_adder_total___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VBlock_adder_total___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VBlock_adder_total___024root___eval_phase__nba(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VBlock_adder_total___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__ico(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__nba(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__act(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG

void VBlock_adder_total___024root___eval(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VBlock_adder_total___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../01_rtl/Block_adder_total.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VBlock_adder_total___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VBlock_adder_total___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_rtl/Block_adder_total.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VBlock_adder_total___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_rtl/Block_adder_total.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VBlock_adder_total___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VBlock_adder_total___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VBlock_adder_total___024root___eval_debug_assertions(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
