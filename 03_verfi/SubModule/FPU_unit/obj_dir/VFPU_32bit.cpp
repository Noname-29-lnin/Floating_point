// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFPU_32bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFPU_32bit::VFPU_32bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFPU_32bit__Syms(contextp(), _vcname__, this)}
    , i_alu_op{vlSymsp->TOP.i_alu_op}
    , i_data_a{vlSymsp->TOP.i_data_a}
    , i_data_b{vlSymsp->TOP.i_data_b}
    , o_result{vlSymsp->TOP.o_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VFPU_32bit::VFPU_32bit(const char* _vcname__)
    : VFPU_32bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFPU_32bit::~VFPU_32bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFPU_32bit___024root___eval_debug_assertions(VFPU_32bit___024root* vlSelf);
#endif  // VL_DEBUG
void VFPU_32bit___024root___eval_static(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___eval_initial(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___eval_settle(VFPU_32bit___024root* vlSelf);
void VFPU_32bit___024root___eval(VFPU_32bit___024root* vlSelf);

void VFPU_32bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFPU_32bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFPU_32bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFPU_32bit___024root___eval_static(&(vlSymsp->TOP));
        VFPU_32bit___024root___eval_initial(&(vlSymsp->TOP));
        VFPU_32bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFPU_32bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFPU_32bit::eventsPending() { return false; }

uint64_t VFPU_32bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFPU_32bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFPU_32bit___024root___eval_final(VFPU_32bit___024root* vlSelf);

VL_ATTR_COLD void VFPU_32bit::final() {
    VFPU_32bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFPU_32bit::hierName() const { return vlSymsp->name(); }
const char* VFPU_32bit::modelName() const { return "VFPU_32bit"; }
unsigned VFPU_32bit::threads() const { return 1; }
void VFPU_32bit::prepareClone() const { contextp()->prepareClone(); }
void VFPU_32bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFPU_32bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFPU_32bit___024root__trace_decl_types(VerilatedVcd* tracep);

void VFPU_32bit___024root__trace_init_top(VFPU_32bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFPU_32bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFPU_32bit___024root*>(voidSelf);
    VFPU_32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFPU_32bit___024root__trace_decl_types(tracep);
    VFPU_32bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFPU_32bit___024root__trace_register(VFPU_32bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFPU_32bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFPU_32bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFPU_32bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
