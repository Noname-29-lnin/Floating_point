// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_FPU_unit.h for the primary calling header

#include "Vtb_FPU_unit__pch.h"
#include "Vtb_FPU_unit___024unit__03a__03a__VDynScope_0__Vclpkg.h"

Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::~Vtb_FPU_unit___024unit__03a__03a__VDynScope_0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_FPU_unit___024unit__03a__03a__VDynScope_0>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_FPU_unit___024unit__03a__03a__VDynScope_0::to_string_middle\n"); );
    // Body
    std::string out;
    out += "t_clk:" + VL_TO_STRING(__PVT__t_clk);
    out += ", PERIOD:" + VL_TO_STRING(__PVT__PERIOD);
    return out;
}
