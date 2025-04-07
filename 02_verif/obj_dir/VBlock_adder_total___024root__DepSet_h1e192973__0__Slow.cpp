// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlock_adder_total.h for the primary calling header

#include "VBlock_adder_total__pch.h"
#include "VBlock_adder_total__Syms.h"
#include "VBlock_adder_total___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBlock_adder_total___024root___dump_triggers__stl(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VBlock_adder_total___024root___eval_triggers__stl(VBlock_adder_total___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlock_adder_total___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level.neq(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level__0));
    vlSelf->__VstlTriggered.set(2U, (vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level.neq(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level__0) 
                                     | vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level.neq(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level__0)));
    vlSelf->__VstlTriggered.set(3U, (vlSelf->Block_adder_total__DOT__CLA__DOT__c 
                                     != vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__c__0));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(5U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(6U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(7U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(9U, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(0xaU, ((IData)(vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__0)));
    vlSelf->__VstlTriggered.set(0xbU, ((IData)(vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__0)));
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level__0.assign(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__p_level);
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level__0.assign(vlSelf->Block_adder_total__DOT__CLA__DOT__CLA32__DOT__g_level);
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CLA__DOT__c__0 
        = vlSelf->Block_adder_total__DOT__CLA__DOT__c;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_L__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H2_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_1__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry__0 
        = vlSelf->Block_adder_total__DOT__CSA__DOT__RCA_H3_0__DOT__carry;
    vlSelf->__Vtrigprevexpr___TOP__Block_adder_total__DOT__CSKA__DOT__group_Carry__0 
        = vlSelf->Block_adder_total__DOT__CSKA__DOT__group_Carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
        vlSelf->__VstlTriggered.set(9U, 1U);
        vlSelf->__VstlTriggered.set(0xaU, 1U);
        vlSelf->__VstlTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBlock_adder_total___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
