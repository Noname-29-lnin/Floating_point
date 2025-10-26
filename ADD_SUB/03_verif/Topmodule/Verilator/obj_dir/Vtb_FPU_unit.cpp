// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_FPU_unit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_FPU_unit::Vtb_FPU_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_FPU_unit__Syms(contextp(), _vcname__, this)}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_low}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SWAP_UNIT__DOT__COMP_LESS_UNIT__DOT__u_high}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_SUB_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__0__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__1__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__2__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__3__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__4__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__5__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_COMP_28BIT_UNIT__DOT__GEN_COMP_4BIT__BRA__6__KET____DOT__u_comp4}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_4BIT_UNIT_0}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__1__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__2__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__3__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__4__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__5__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__MAN_ALU_UNIT__DOT__ALU_SUB_UNIT__DOT__CLA_BLOCK_GEN__BRA__6__KET____DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_0}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__LOPD_24BIT_UNIT__DOT__LOPD_SUB__DOT__CLA_4BIT_UNIT_1}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_0}
    , __PVT__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1{vlSymsp->TOP.__PVT__tb_FPU_unit__DOT__dut__DOT__EXP_ADJUST_UNIT__DOT__CLA_8BIT_UNIT__DOT__CLA_4BIT_UNIT_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_FPU_unit::Vtb_FPU_unit(const char* _vcname__)
    : Vtb_FPU_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_FPU_unit::~Vtb_FPU_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_FPU_unit___024root___eval_debug_assertions(Vtb_FPU_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_FPU_unit___024root___eval_static(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___eval_initial(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___eval_settle(Vtb_FPU_unit___024root* vlSelf);
void Vtb_FPU_unit___024root___eval(Vtb_FPU_unit___024root* vlSelf);

void Vtb_FPU_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_FPU_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_FPU_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_FPU_unit___024root___eval_static(&(vlSymsp->TOP));
        Vtb_FPU_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_FPU_unit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_FPU_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_FPU_unit::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_FPU_unit::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_FPU_unit::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_FPU_unit::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_FPU_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_FPU_unit___024root___eval_final(Vtb_FPU_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_FPU_unit::final() {
    Vtb_FPU_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_FPU_unit::hierName() const { return vlSymsp->name(); }
const char* Vtb_FPU_unit::modelName() const { return "Vtb_FPU_unit"; }
unsigned Vtb_FPU_unit::threads() const { return 1; }
void Vtb_FPU_unit::prepareClone() const { contextp()->prepareClone(); }
void Vtb_FPU_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_FPU_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_FPU_unit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_FPU_unit___024root__trace_init_top(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_FPU_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_FPU_unit___024root*>(voidSelf);
    Vtb_FPU_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_FPU_unit___024root__trace_decl_types(tracep);
    Vtb_FPU_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_FPU_unit___024root__trace_register(Vtb_FPU_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_FPU_unit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_FPU_unit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_FPU_unit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
