// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlock_adder_total__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlock_adder_total::VBlock_adder_total(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBlock_adder_total__Syms(contextp(), _vcname__, this)}
    , i_a{vlSymsp->TOP.i_a}
    , i_b{vlSymsp->TOP.i_b}
    , o_CRA{vlSymsp->TOP.o_CRA}
    , o_CLA{vlSymsp->TOP.o_CLA}
    , o_CSA{vlSymsp->TOP.o_CSA}
    , o_CSKA{vlSymsp->TOP.o_CSKA}
    , o_KSA{vlSymsp->TOP.o_KSA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBlock_adder_total::VBlock_adder_total(const char* _vcname__)
    : VBlock_adder_total(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBlock_adder_total::~VBlock_adder_total() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBlock_adder_total___024root___eval_debug_assertions(VBlock_adder_total___024root* vlSelf);
#endif  // VL_DEBUG
void VBlock_adder_total___024root___eval_static(VBlock_adder_total___024root* vlSelf);
void VBlock_adder_total___024root___eval_initial(VBlock_adder_total___024root* vlSelf);
void VBlock_adder_total___024root___eval_settle(VBlock_adder_total___024root* vlSelf);
void VBlock_adder_total___024root___eval(VBlock_adder_total___024root* vlSelf);

void VBlock_adder_total::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlock_adder_total::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlock_adder_total___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBlock_adder_total___024root___eval_static(&(vlSymsp->TOP));
        VBlock_adder_total___024root___eval_initial(&(vlSymsp->TOP));
        VBlock_adder_total___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBlock_adder_total___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBlock_adder_total::eventsPending() { return false; }

uint64_t VBlock_adder_total::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBlock_adder_total::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBlock_adder_total___024root___eval_final(VBlock_adder_total___024root* vlSelf);

VL_ATTR_COLD void VBlock_adder_total::final() {
    VBlock_adder_total___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBlock_adder_total::hierName() const { return vlSymsp->name(); }
const char* VBlock_adder_total::modelName() const { return "VBlock_adder_total"; }
unsigned VBlock_adder_total::threads() const { return 1; }
void VBlock_adder_total::prepareClone() const { contextp()->prepareClone(); }
void VBlock_adder_total::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VBlock_adder_total::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBlock_adder_total___024root__trace_decl_types(VerilatedVcd* tracep);

void VBlock_adder_total___024root__trace_init_top(VBlock_adder_total___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlock_adder_total___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlock_adder_total___024root*>(voidSelf);
    VBlock_adder_total__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VBlock_adder_total___024root__trace_decl_types(tracep);
    VBlock_adder_total___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VBlock_adder_total___024root__trace_register(VBlock_adder_total___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlock_adder_total::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBlock_adder_total::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlock_adder_total___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
