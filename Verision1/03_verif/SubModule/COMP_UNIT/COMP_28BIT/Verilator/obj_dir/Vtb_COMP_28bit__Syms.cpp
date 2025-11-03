// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_COMP_28bit__pch.h"
#include "Vtb_COMP_28bit.h"
#include "Vtb_COMP_28bit___024root.h"
#include "Vtb_COMP_28bit_COMP_4bit.h"

// FUNCTIONS
Vtb_COMP_28bit__Syms::~Vtb_COMP_28bit__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_COMP_28bit__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_COMP_28bit__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_COMP_28bit__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_COMP_28bit__Syms::Vtb_COMP_28bit__Syms(VerilatedContext* contextp, const char* namep, Vtb_COMP_28bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_0")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_1")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_2")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_3")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_4")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_5")}
    , TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6{this, Verilated::catName(namep, "tb_COMP_28bit.DUT.u_i_data_6")}
{
        // Check resources
        Verilated::stackCheck(86);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5;
    TOP.__PVT__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6 = &TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_0.__Vconfigure(true);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_1.__Vconfigure(false);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_2.__Vconfigure(false);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_3.__Vconfigure(false);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_4.__Vconfigure(false);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_5.__Vconfigure(false);
    TOP__tb_COMP_28bit__DOT__DUT__DOT__u_i_data_6.__Vconfigure(false);
}
