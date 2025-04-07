// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlock_adder_total.h for the primary calling header

#include "VBlock_adder_total__pch.h"
#include "VBlock_adder_total__Syms.h"
#include "VBlock_adder_total___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__ico(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG

void VBlock_adder_total___024root___eval_triggers__ico(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (vlSelf->Block_adder_total__DOT__CLA__DOT__C 
                                     != vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__C__1));
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(3U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(4U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(5U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(6U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(7U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(8U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__1)));
    vlSelf->__VicoTriggered.set(9U, ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__1)));
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__C__1 
        = vlSelf->Block_adder_total__DOT__CLA__DOT__C;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__1 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__1 
        = vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
        vlSelf->__VicoTriggered.set(4U, 1U);
        vlSelf->__VicoTriggered.set(5U, 1U);
        vlSelf->__VicoTriggered.set(6U, 1U);
        vlSelf->__VicoTriggered.set(7U, 1U);
        vlSelf->__VicoTriggered.set(8U, 1U);
        vlSelf->__VicoTriggered.set(9U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBlock_adder_total___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__act(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG

void VBlock_adder_total___024root___eval_triggers__act(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->Block_adder_total__DOT__CLA__DOT__C 
                                     != vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__C__2));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__2)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__2)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__2)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__2)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__2)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__2)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__2)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__2)));
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__C__2 
        = vlSelf->Block_adder_total__DOT__CLA__DOT__C;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__2 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__2 
        = vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBlock_adder_total___024root___dump_triggers__act(vlSelf);
    }
#endif
}
