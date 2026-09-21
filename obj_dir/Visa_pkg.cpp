// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Visa_pkg__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Visa_pkg::Visa_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Visa_pkg__Syms(contextp(), _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , funct3{vlSymsp->TOP.funct3}
    , funct7{vlSymsp->TOP.funct7}
    , alu_sel{vlSymsp->TOP.alu_sel}
    , mem_to_reg{vlSymsp->TOP.mem_to_reg}
    , reg_write{vlSymsp->TOP.reg_write}
    , mem_write{vlSymsp->TOP.mem_write}
    , branch{vlSymsp->TOP.branch}
    , op_alu{vlSymsp->TOP.op_alu}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Visa_pkg::Visa_pkg(const char* _vcname__)
    : Visa_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Visa_pkg::~Visa_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Visa_pkg___024root___eval_debug_assertions(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Visa_pkg___024root___eval_static(Visa_pkg___024root* vlSelf);
void Visa_pkg___024root___eval_initial(Visa_pkg___024root* vlSelf);
void Visa_pkg___024root___eval_settle(Visa_pkg___024root* vlSelf);
void Visa_pkg___024root___eval(Visa_pkg___024root* vlSelf);

void Visa_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Visa_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Visa_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Visa_pkg___024root___eval_static(&(vlSymsp->TOP));
        Visa_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Visa_pkg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Visa_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Visa_pkg::eventsPending() { return false; }

uint64_t Visa_pkg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Visa_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Visa_pkg___024root___eval_final(Visa_pkg___024root* vlSelf);

VL_ATTR_COLD void Visa_pkg::final() {
    Visa_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Visa_pkg::hierName() const { return vlSymsp->name(); }
const char* Visa_pkg::modelName() const { return "Visa_pkg"; }
unsigned Visa_pkg::threads() const { return 1; }
void Visa_pkg::prepareClone() const { contextp()->prepareClone(); }
void Visa_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Visa_pkg::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Visa_pkg___024root__trace_decl_types(VerilatedVcd* tracep);

void Visa_pkg___024root__trace_init_top(Visa_pkg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Visa_pkg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Visa_pkg___024root*>(voidSelf);
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Visa_pkg___024root__trace_decl_types(tracep);
    Visa_pkg___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Visa_pkg___024root__trace_register(Visa_pkg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Visa_pkg::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Visa_pkg::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Visa_pkg___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
